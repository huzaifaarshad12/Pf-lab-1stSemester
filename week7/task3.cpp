#include<iostream>
using namespace std;
int frequencyChecker(int numb);

main(){
    int numb;

    cout<<"Enter a number: ";
    cin>>numb;

    int result=frequencyChecker(numb);
    cout <<"Total number of digits: "<<result;

}
int frequencyChecker(int numb){

   int digit=0;
    while(numb>0){

        digit=digit+1;
        numb=numb/10;
        




    }
return digit;





}