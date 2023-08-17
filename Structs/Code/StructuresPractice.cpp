#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{
	int length; //4 bytes
	int width; // 4 bytes
	char x; // 1 byte: allocates 4 bytes but uses 1 byte
	// printf("%lu", sizeof(Rectangle)); ---> 12

};

int main(){
	
	//delcare variable and init
	struct Rectangle r1 = {10,5};
	
	cout<< r1.length<<endl; // prints 10
	cout<<r1.width<<endl; // prints 5
	
	r1.length = 15;
	r1.width = 7;
	
	cout<< r1.length<<endl; // prints 15
	cout<<r1.width<<endl; // prints 7
	
	
	return 0;
}