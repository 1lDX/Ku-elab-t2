#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum) {
    long totalSum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        totalSum += arr[i];
    }

    int minValue = *min_element(arr.begin(), arr.end());
    int maxValue = *max_element(arr.begin(), arr.end());

    *minSum = totalSum - maxValue;  // ลบค่ามากที่สุดออก
    maxSum = totalSum - minValue;   // ลบค่าน้อยที่สุดออก
}

int main() {
    int n = 5;
    long min, max;
    vector<int> ar;

    // รับข้อมูลจากผู้ใช้
    for (int i = 0; i < n; ++i) {
        long temp;
        cin >> temp;
        ar.push_back(temp);
    }

    // เรียกใช้ฟังก์ชัน miniMaxSum
    miniMaxSum(ar, &min, max);

    // แสดงผลลัพธ์
    cout << min << " " << max << endl;

    return 0;
}
