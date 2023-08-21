#include <iostream>

using namespace std;

// Pass by Value (won't swap values outside of this function)
void swapByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    // Changes to x and y don't affect the original values outside this function
}

// Pass by Reference using pointers (will swap the actual values)
void swapByAddress(int *x, int *y) {
    int temp;
    temp = *x; // Store the value pointed to by x in temp
    *x = *y;   // Assign the value pointed to by y to the location pointed to by x
    *y = temp; // Assign the value from temp to the location pointed to by y
}

// Pass by Reference using C++ references (will swap the actual values)
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    // Changes to x and y directly affect the original values outside this function
}

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 15;
    
    // Call by Value (doesn't affect original values)
    swapByValue(a, b);
    cout << "By Value: " << a << " " << b << endl; // Outputs 10 15

    // Call by Address (affects original values, uses pointers)
    swapByAddress(&a, &b);
    cout << "By Address: " << a << " " << b << endl; // Outputs 15 10

    // Call by Reference (affects original values, uses C++ references)
    swapByReference(a, b);
    cout << "By Reference: " << a << " " << b << endl; // Outputs 10 15

    return 0; 
}
