#include<iostream>
using namespace std;
int digit(int numb);

main(){

    int numb;
    cout<<"Enter a number: ";
    cin>>numb;

    int output=digit( numb);
    cout<<"Sum of digits: "<<output;


}
int digit(int numb){

	int mod=1;

	int sum=0;
	while(numb>0){

	mod=numb%10;
	numb=numb/10;
	sum=sum+mod;


}
return sum;





}