// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE 97

// typedef struct nodeType{
//     int item;
//     struct nodeType* next;
// } Node;

// Node* hashTable[SIZE] = {NULL};

// int hashFunction(int key){
//     return key % SIZE;
// }

// void insertitem(int value){
//     int index = hashFunction(value);
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) return;
//     newNode->item = value;
//     newNode->next = hashTable[index];
//     hashTable[index] = newNode;
// }

// void printTable(){
//     for(int i = 0;i < SIZE; i++){
//         printf("KEY %2d:", i);
//         Node* current = hashTable[i];
//         while(current){
//             printf(" %d", current->item);
//             current = current->next;
//         }
//         printf("\n");
//     }
// }

// void freeTable(){
//     for(int i = 0;i < SIZE; i++){
//         Node* current = hashTable[i];
//         while(current){
//             Node* temp = current;
//             current = current->next;
//             free(temp);
//         }
//     }
// }

// int main(){
//     char command;
//     int value;

//     while(1){
//         printf("input> ");
//         if(scanf(" %c", &command) != 1) break;
//         if(command == 'a'){
//             if(scanf(" %d", &value) == 1 && value > 0){
//                 insertitem(value);
//             }
//         }else if(command == 'p') {
//             printTable();
//         }else if(command == 'q') {
//             break;
//         }
//     }

//     freeTable();
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

#define SIZE 97

typedef struct nodeType {
    int item;
    struct nodeType* next;
} Node;

Node* hashTable[SIZE] = {NULL};

int hashFunction(int key){
    return key % SIZE;
}

void insertItem(int value){
    int index = hashFunction(value);
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) return;
    newNode->item = value;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

void printTable(){
    for(int i = 0;i < SIZE;i++){
        printf("KEY %d:", i);
        Node* current = hashTable[i];
        while(current){
            printf(" %d", current->item);
            current = current->next;
        }
        printf("\n");
    }
}

void freeTable(){
    for(int i = 0; i < SIZE; i++){
        Node* current = hashTable[i];
        while (current) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
        hashTable[i] = NULL;
    }
}

int main(){
    char command;
    int value;
    while(1){
        printf("input> ");
        if(scanf(" %c", &command) != 1)break;
        if(command == 'a') {
            if(scanf(" %d", &value) == 1 && value > 0){
                insertItem(value);
            }
        }else if(command == 'p'){
            printTable();
        }else if(command == 'q'){
            break;
        }
    }
    freeTable();
    return 0;
}

