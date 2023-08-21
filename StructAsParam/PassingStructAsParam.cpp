#include <iostream>

using namespace std;

struct Rectangle{
	int length;
	int width;
};

//this method does not change the actual variable being passed in.
//This is pass by value
int area(struct Rectangle r1){
	return r1.length * r1.width;
}

//pass by reference, can change the property
void increaseLength(struct Rectangle &r2){
	r2.length++;
}

void changeLength(struct Rectangle *p, int n){
	p->length = n;
}


int main(int argc, char *argv[]) {
	
	struct Rectangle r = {10,5};
	
	printf("%d", area(r)); // seperate object created in the area call, properites are copied/ This is call by value
	
	
	increaseLength(r);
	printf("%d\n", r.length);
	
	
	changeLength(&r, 20);
	
	cout<<r.length<<"\n"<<endl;
	
}