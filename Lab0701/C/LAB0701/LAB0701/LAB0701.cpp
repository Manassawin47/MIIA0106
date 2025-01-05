// LAB0701.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // เก็บ address ของ x

    cout << "ค่าของ x: " << x << endl;           // แสดงค่าของ x
    cout << "ตำแหน่งของ x: " << &x << endl;    // แสดง address ของ x
    cout << "ค่าผ่าน ptr: " << *ptr << endl;   // เข้าถึงค่าผ่าน ptr
    cout << "ตำแหน่งใน ptr: " << ptr << endl;  // แสดง address ที่ ptr เก็บไว้


    int y = 20;
    ptr = &y; // เก็บ address ของ y

    cout << "ค่าของ y: " << y << endl;           // แสดงค่าของ y
    cout << "ตำแหน่งของ y: " << &y << endl;    // แสดง address ของ y
    cout << "ค่าผ่าน ptr: " << *ptr << endl;   // เข้าถึงค่าผ่าน ptr
    cout << "ตำแหน่งใน ptr: " << ptr << endl;  // แสดง address ที่ ptr เก็บไว้

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
