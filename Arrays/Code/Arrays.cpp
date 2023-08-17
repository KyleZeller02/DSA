#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // Declaring an array of 5 integers. The values are uninitialized at this point.
    int a[5];

    // Assigning values to the first three elements of the array 'a'.
    a[0] = 12;
    a[1] = 3;
    a[2] = 25;

    // Printing the size of the whole array in bytes.
    cout << sizeof(a) << endl; // Output will be 20 on most systems with 4-byte integers.

    // Printing the size of an individual element in the array in bytes.
    cout << sizeof(a[1]) << endl; // Output will be 4 on most systems for 4-byte integers.

    // Printing the third element of the array 'a'.
    printf("%d\n", a[2]); // Output will be 25.

    // Initializing an array with fewer elements than its declared size; remaining elements will be set to 0.
    int b[10] = {2, 4, 6, 8, 10};
    printf("%d\n", b[6]); // Output will be 0 as remaining elements are automatically initialized to 0.

    cout << "printing b" << endl;

    // Traditional for loop to print all elements of array 'b'.
    for (int i = 0; i < 10; i++) {
        cout << b[i] << endl;
    }

    cout << "printing b" << endl;

    // Range-based for loop in C++ to print all elements of array 'b'. Requires C++11 or later.
    for (int x : b) {
        cout << x << endl;
    }

    int n;
    cout << "Enter size";
    cin >> n;

    // Variable-length array (VLA) declaration. This is a non-standard extension in C++.
    // It is supported in C99 but may cause errors or warnings in some C++ compilers.
    int c[n];

    // You must manually initialize elements for a VLA like 'c'; they won't be initialized automatically.
    c[0] = 1;

    // Looping over a VLA without initializing other elements may print garbage values or cause undefined behavior.
    for (int x : c) {
        cout << x << endl;
    }

    return 0;
}
