#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct good {
    char name[20];
    struct good *next;
} Good;

Good *start = NULL;

void add_good(Good *new_good) {
    Good *current_good = start;
    Good *previous_good = NULL;
    
    // หาตำแหน่งที่เหมาะสมสำหรับการเพิ่มโหนดใหม่ที่ท้ายลิสต์
    while (current_good) {
        previous_good = current_good;
        current_good = current_good->next;
    }
    
    // ถ้าลิสต์ว่าง จะตั้งค่า start ให้ชี้ไปที่ new_good
    if (previous_good != NULL) {
        previous_good->next = new_good;
    } else {
        start = new_good;
    }
}

int print_all_goods() {
    int count = 0;
    Good *current_good = start;
    
    while(current_good != NULL){
        printf("%s\n", current_good->name);
        current_good = current_good->next;
        count++;
    }

    return count;
}

int main() {
    char name[20];
    Good *new_node;

    printf("Name: ");
    scanf("%20s", name);

    // รับชื่อสินค้าจากผู้ใช้ไปเรื่อย ๆ จนกว่าจะพิมพ์ "done"
    while (strcmp(name, "done") != 0) {
        new_node = (Good *)malloc(sizeof(Good)); // จองหน่วยความจำให้ new_node
        strcpy(new_node->name, name);           // กำหนดชื่อสินค้า
        new_node->next = NULL;                   // ตั้งค่า next ของ new_node เป็น NULL
        add_good(new_node);                      // เพิ่ม new_node เข้าสู่ลิสต์

        printf("Name: ");
        scanf("%20s", name);  // รับชื่อสินค้าต่อไป
    }

    // พิมพ์สินค้าและจำนวนสินค้าที่เก็บในลิสต์
    printf("Total = %d\n", print_all_goods());

    return 0;
}
