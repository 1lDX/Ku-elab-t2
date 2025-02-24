#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char filename[]){
    int amount = 0,count = 0, find = 0,count2 = 0;
    double price = 0;
    char name[100];
    FILE *file = fopen(filename, "r");
    fscanf(file,"%d",&count);
    Product products[count];

    while(1){        
        if(fscanf(file, "%*[^,],%*[^,],%[^,],%d,%lf",name,&amount,&price) <= 0){
            break;
        }

        for(int i=0;i<count;i++){
            if(strcmp(products[i].name,name) == 0){
                products[i].amount += amount;
                products[i].totalCost += price;
                find = 1;
                break;
            }
            
        }

        if(find == 0){
            Product product;
            strcpy(product.name, name);
            product.amount = amount;
            product.totalCost = price;
            products[count2] = product;
            count2 += 1;
            
        }
        find = 0;
    }
    printStock(products,count2);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}