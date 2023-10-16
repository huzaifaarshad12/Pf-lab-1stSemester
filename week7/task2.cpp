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
int numb1=0;
int numb2=1;
int sum=0;
    if(length>=1){
        cout<<numb1;
    }
    
    for(int i=1;i<length;i=i+1){

        cout<<", "<<numb2;
        sum=numb1+numb2;
        numb1=numb2;
        numb2=sum;
        
    }


}