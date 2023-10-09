#include<iostream>
using namespace std;
bool number(int first,int second);

int main(){
    int first;
    int second;
    cout<<"Enter the first number: ";
    cin>>first;
    cout<<"Enter the second number: ";
    cin>>second;
    
     cout<< number(first,second);

}
bool number(int first,int second){
if(first>second){

    return 1;
}

if(first<second){

    return 0;

}
}