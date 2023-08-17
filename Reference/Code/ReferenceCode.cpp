#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a = 10;
	int &r = a; // you can not change reference
	
	
	
	cout<<a<<endl<<r<<endl; //prints 10 2 times
	
	//what if we change value of a?
	a = 25;
	cout<<a<<endl<<r<<endl; // a and r are 25
	
	//reference does not take memory
	
	int b = 30;
	r = b;
	//30 is stored in r, thus a is also 30
	
	cout<<a<<endl<<r<<endl<<b<<endl; // a, b, and r are 30

	
	
}