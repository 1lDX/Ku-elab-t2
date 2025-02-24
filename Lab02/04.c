#include <stdio.h>
#include <stdlib.h>

int main() {
    char salary_str[100];
    float tax = 0, salary;
    fgets(salary_str, 100, stdin);
    salary = atof(salary_str);

    if (salary < 0) {
    printf("Error: Salary must be greater or equal to 0\n");
    }else {
        if (salary > 300000) {
        tax += 0.05 * 300000;      
        tax += 0.10 * (salary - 300000);

        } else {
        tax += 0.05 * salary;
        }
        printf("%.2f\n", tax);
    }

    return 0;
}
