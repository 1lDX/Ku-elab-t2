#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int value;
    struct node* next;
} node;


void printList(node *pList) {
    node *current = pList;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}


void insertNode(node **pList, int value){
    node *newNode = (node *)malloc(sizeof(node)); // new node
    newNode->value = value;
    newNode->next = NULL;

    //if list==null :D
    if (*pList == NULL) {
        *pList = newNode;
        return;
    }

    //insert :(
    if (value < (*pList)->value) {
        newNode->next = *pList;
        *pList = newNode;
        return;
    }

    //insert mid and last :(
    node *current = *pList;
    while (current->next != NULL && current->next->value < value) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

int main(){
    int i, value;
    node *pList = NULL;
    for (i = 0; i < 10; i++) {
        scanf("%d", &value);
        insertNode(&pList, value);
    }
    printList(pList);
    return 0;
}
