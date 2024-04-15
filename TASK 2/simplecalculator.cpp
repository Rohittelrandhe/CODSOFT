#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float x,y;
	char op;
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	cout<<"Enter the operation: ";
	cin>>op;
	
	switch(op){
		case '+':
				cout<<"The addition of two number is: "<<x+y;
				break;
		case '-':
				cout<<"The subtraction of two number is: "<<x-y;
				break;
		case '*':
				cout<<"The multiplication of two number is: "<<x*y;
				break;
		case '/':
				cout<<"The division of two number is: "<<x/y;
				break;
		default:
			    cout<<"Invalid operation";
	}
	
	
}