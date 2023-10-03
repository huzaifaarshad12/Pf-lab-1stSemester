#include<iostream>
using namespace std;
void add(float n1,float n2);
void sub(float n1,float n2);
void mul(float n1,float n2);
void div(float n1,float n2);
main()
{
	float n1,n2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	
if(op=='+')
{	add(n1,n2);

}
if(op=='-')
{	sub(n1,n2);

}
if(op=='*')
{	mul(n1,n2);

}
if(op=='/')
{	div(n1,n2);

}
         

}	
void add(float n1,float n2)
{
	float sum;
	sum=n1+n2;
	cout<<"Addition: "<<sum;
}

void sub(float n1,float n2)
{
	float sub;
	sub=n1-n2;
	cout<<"Subtraction: "<<sub;
}

void mul(float n1,float n2)
{
	float mul;
	mul=n1*n2;
	cout<<"Multiplication: "<<mul;
}

void div(float n1,float n2)
{
	float div;
	div=n1/n2;
	cout<<"Division: "<<div;
}


