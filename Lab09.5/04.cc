// #include <iostream>
// using namespace std;

// typedef struct Word_ {
//     string word;
//     int count;
// } Word;

// int main() {
//     string input;
//     int i, last_word = 0, find = 0;
//     Word data[20];

//     while (true) {
//         cin >> input;
//         if (input == "exit") {
//             break;
//         }

//         find = 0;
//         for (i = 0; i < last_word; i++) {
//             if (data[i].word == input) {
//                 data[i].count++;  // เพิ่มจำนวนการนับของคำที่เจอ
//                 find = 1;
//                 break;
//             }
//         }

//         // หากไม่พบคำใหม่ ให้เพิ่มคำลงใน array
//         if (find == 0 && last_word < 20) {
//             data[last_word].word = input;
//             data[last_word].count = 1;
//             last_word++;
//         }
//     }

//     // พิมพ์คำและจำนวนที่นับได้
//     cout << "Output:" << endl;
//     for (i = 0; i < last_word; i++) {
//         cout << data[i].word << " = " << data[i].count << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

typedef struct Word_ {
    string word;
    int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }

        find = 0;
        for(i=0;i<last_word;i++){
            if(data[i].word == input){
                data[i].count++;
                find = 1;
                break;
            }
        }

        if(!find){
            data[last_word].word = input;
            data[last_word].count = 1;
            last_word++;
        }
    }

    cout << "Output:" << endl;
    for(i=0;i<last_word;i++) {
        cout << data[i].word << " = " << data[i].count << endl;
    }

    return 0;
}
