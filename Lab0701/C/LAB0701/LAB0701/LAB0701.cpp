// LAB0701.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// ฟังก์ชันสำหรับการสลับค่าภายในอาร์เรย์
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// ฟังก์ชันสำหรับการเรียงลำดับโดยใช้ Bubble Sort
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {

        for (int j = 0; j < size - i - 1; ++j) {
            // ใช้ pointer เพื่อเปรียบเทียบและสลับค่า
            if (*(arr + j) > *(arr + j + 1)) {
                swap((arr + j), (arr + j + 1));
            }

        }

        cout << "----------------------\n";
        cout << "Loop. :" << (i + 1) << "\n";
        for (int ii = 0; ii < size; ++ii) {
            cout << *(arr + ii) << " ";
        }
        cout << endl;
    }
}
int main() {

    // กำหนดอาร์เรย์ตัวอย่าง
    int arr[] = { 64, 34, 25, 12, 22, 11, 90
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "before: \n";
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    // เรียกใช้ฟังก์ชันเรียงลำดับ
    bubbleSort(arr, size);
    cout << "\n------ after----------: \n";
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
