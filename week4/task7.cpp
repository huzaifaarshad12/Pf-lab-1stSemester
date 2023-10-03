#include<iostream>
using namespace std;
void eo(int num);
main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	eo(num);
}
void eo(int num)
{
if(num%2==0)
{	cout<<"Number "<<num<<" is even";
}
if(num%2!=0)
{	cout<<"Number "<<num<<" is odd";
}

}
