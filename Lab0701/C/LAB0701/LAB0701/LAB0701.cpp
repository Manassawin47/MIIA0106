// LAB0701.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // �� address �ͧ x

    cout << "��Ңͧ x: " << x << endl;           // �ʴ���Ңͧ x
    cout << "���˹觢ͧ x: " << &x << endl;    // �ʴ� address �ͧ x
    cout << "��Ҽ�ҹ ptr: " << *ptr << endl;   // ��Ҷ֧��Ҽ�ҹ ptr
    cout << "���˹�� ptr: " << ptr << endl;  // �ʴ� address ��� ptr �����


    int y = 20;
    ptr = &y; // �� address �ͧ y

    cout << "��Ңͧ y: " << y << endl;           // �ʴ���Ңͧ y
    cout << "���˹觢ͧ y: " << &y << endl;    // �ʴ� address �ͧ y
    cout << "��Ҽ�ҹ ptr: " << *ptr << endl;   // ��Ҷ֧��Ҽ�ҹ ptr
    cout << "���˹�� ptr: " << ptr << endl;  // �ʴ� address ��� ptr �����

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
