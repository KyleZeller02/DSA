#include <iostream>

using namespace std;
struct Rectangle{
	int length;
	int width;
};

int main(int argc, char *argv[]) {
	//in c++ we can omit the struct keyword
	Rectangle r = {10,5};
	
	cout<<r.length<<endl;
	cout<<r.width<<endl;
	
	
	Rectangle *p = (struct Rectangle *)malloc(sizeof(struct Rectangle))	;
	p->length = 1;
	p->width = 8;
	cout<<p->length<<endl;
	cout<<p->width<<endl;
	
	
	// inc++
	p = new Rectangle; // this allocates on the 
	
	
}