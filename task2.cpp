#include<iostream>
using namespace std;

void generateFibonacci(int length);
main(){
int length;

cout<<"Enter the length of the Fibonacci series: ";
cin>>length;

generateFibonacci( length);


}
void generateFibonacci(int length){
int num1=0;
int num2=1;
int sum=0;
    if(length>=1){
        cout<<num1;
    }
    
    for(int i=1;i<length;i=i+1){
        cout<<", "<<num2;
        sum=num1+num2;
        num1=num2;
        num2=sum;
        
    }


}