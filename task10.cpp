#include<iostream>
using namespace std;
bool areSameNumber(int, int, int);

int main(){
    int  n1 , n2 , n3;
        
        cout<<"Enter the first number: ";
        cin>> n1;
        
        cout<<"Enter the second number: ";
        cin>> n2;
    
        cout<<"Enter the third number: ";
        cin>> n3;

        int output=areSameNumber(n1,n2,n3);
        cout<<output;

}
bool areSameNumber(int n1, int n2, int n3){
    if(n1 == n2 && n2 == n3 && n1 == n3){
        return true;

    }
    else {
        return false;

        
    }

}
