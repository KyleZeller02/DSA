#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	
	int a = 10; // 4 bytes
	
	int *p; // declaration of pointer
	p = &a; // assign address of a to p
	
	cout<< a<<endl; // prints 10
	printf("Using Pointer: %d \n", *p); // prints 10
	printf("printing p without dereferecning: %d\n", p); // printing p without dereferecning: 1841393900. This is the address of p
	printf("Printing p: %d\nPrinting &a: %d\n", p, &a); // the memory address of both are printed, and they are identical
	
	
	//pointer to array
	
	int arr1[5] = {2,4,6,8,10};
	int *p1;
	p1 = arr1; // or, p1 = &arr1[0];
	
	//access elements using pointer
	printf("printing arr1 using array notation:\n");
	for(int i = 0; i <5; i++){
		cout<<arr1[i]<<endl;
	}
	
	printf("printing arr1 using p\n");
	for(int i = 0; i <5; i++){
		cout<<p1[i]<<endl;
	}
	
	//the array is created in the stack frame
	
	
	
	//create array in heap
	
	int *pHeap; // the pointer is in the stack
	
	p = (int *)malloc(5*sizeof(int)); // but the array is in the heap
	// in cpp ---> p = new int[5];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;
	p[4] = 5;
	
	cout<<"Printing p[i]"<<endl;
	for (int i = 0; i< 5; i++) {
		cout<<p[i]<<endl;
	}
	
	int *intP;
	char *charP;
	float *floatP;
	double *doubleP;
	struct Rectangle *rectP;
	//all pointers take same amount of memory, 8 bytes in 64 bit machines
	cout<<sizeof(intP)<<endl; // 8bytes
	cout<<sizeof(charP)<<endl; // 8bytes
	cout<<sizeof(floatP)<<endl; // 8bytes
	cout<<sizeof(doubleP)<<endl; // 8bytes
	cout<<sizeof(rectP)<<endl; // 8bytes
	
	//when we are done with memory, we must deallocate
	//in cpp:
//	delete [] p;
//	
//	//in c
//	free(p);
	
	struct Rectangle{
		int width;
		int length;
	};
	
	
	
	
	
	
}