#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;

void insert(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL || head->data >= value){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    while(current->next != NULL && current->next->data < value){
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void delete(int value){
    Node* current = head;
    Node* prev = NULL;
    
    while (current != NULL && current->data == value) {
        head = current->next;
        free(current);
        current = head;
    }
    
    while (current != NULL){
        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }
        if (current == NULL) return;
        prev->next = current->next;
        free(current);
        current = prev->next;
    }
}

void print(){
    printf("[ ");
    Node* current = head;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("]\n");
}

int main(){
    char command;
    int value;
    
    while(1){
        if(scanf(" %c", &command) != 1) break;
        if(command == 'i'){
            scanf(" %d", &value);
            insert(value);
        }else if(command == 'd'){
            scanf(" %d", &value);
            delete(value);
        }else if(command == 'p'){
            print();
        }else if(command == 'q'){
            break;
        }
    }
    
    return 0;
}
