#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string name;
    double salary, sales, totalIncome = 0;

    cin >> name;
    cin >> salary;
    totalIncome += salary * 12;

    for (int i = 0;i<12;i++) {
        cin >> sales;
        totalIncome += sales * 0.15; 
    }

    char result[100];
    sprintf(result, "%s %.2f", name.c_str(), totalIncome);
    cout << result << endl;

    return 0;
}
