////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Lecture 8 - Activity
////

#include <iostream>
#include <algorithm>
using namespace std;

// Slide 9 - Trying out Pointers
void slide9() {
    int num = 5;
    int* intPtr;
    intPtr = &num;
    cout << "\nThe memory address of integer num is " << &num << endl;
    cout << "The value of integer num is " << num << endl;
    cout << intPtr << endl;
    cout << *intPtr << endl;
    *intPtr = 6;
    cout << num << " " << *intPtr << endl;
}

// Slide 33 - "Kick the tires" of const pointers
void slide33() {
    char c = 'c', e = 'e';
    char* const ptr1 = &c;
    *ptr1 = 'C';
    //ptr1 = &e; doesnt work cause char* const ptr cannot be reassigned
    // * points to char c. & is memory address
    cout << "\nOutput of ptr1: " << *ptr1 << endl;
    cout << "End result of char c after changes: " << c << endl;

    const char d = 'd';
    const char* ptr2 = &d;
    cout << "Output of ptr2 before changes: " << *ptr2 << endl;
    //*ptr2 = 'D'; cannot change char d with const char* ptr2
    ptr2 = &e;
    cout << "Output of ptr 2 after changes: " << *ptr2 << endl;
}

// Slide 65 - No [] allowed
void slide65() {
    int array[10];
    int* arrPtr = array;
    for (int i = 0; i < 10; i++) {
        *arrPtr++ = i + 1; // just i itself would be 0-9. want 1-10
    }
    for (int element : array) {
        cout << element << endl;
    }
}

// Slide 95 - Reversing 123456
char* reverse(char* cstring) {
    cout << "\nBefore reverse: " << cstring << endl;
    int length = strlen(cstring);
    for (int i = 0; i < (length / 2); i++) {
        swap(cstring[i], cstring[length - i - 1]);
    } // A shorter bubble sort?
    return cstring;
}
void slide95() {
    char cstr[] = "123456";
    reverse(cstr);
    cout << "After reverse: " << cstr << endl;
}

int main()
{
    int userChoice;
    cout << "The following slides have been completed\n";
    cout << "Slide 9, 33, 65, 95" << endl;
    cout << "Enter a slide number to continue: ";
    cin >> userChoice;

    switch (userChoice) {
    case 9:
        slide9();
        break;
    case 33:
        slide33();
        break;
    case 65:
        slide65();
        break;
    case 95:
        slide95();
        break;
    default:
        cout << "Slide not found!" << endl;
    }
    
    system("pause");
    return 0;
}