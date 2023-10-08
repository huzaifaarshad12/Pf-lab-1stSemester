#include <iostream>
using namespace std;
string OddishOrEvenish(int num);
main()
{ 
	int num;
	cout<<"Enter a five-digit number: ";
	cin>>num;
    OddishOrEvenish(num);
    string result = OddishOrEvenish(num);
    cout<<result;
}
string OddishOrEvenish(int num){

	int mod1;
	mod1 = num%10;
	int num1;
	num1 = num/10;
	int mod2;
	mod2 = num1 % 10;
	int num2;
	num2 = num1/10;
	int mod3;
	mod3 = num2%10;
	int num3;
	num3 = num2/10;
	int mod4;
	mod4 = num3%10;
	int num4;
        num4 = num3/10;
        int mod5;
        mod5 = num4%10;
        int num5;
	num5 = mod5 + mod4 + mod3 + mod2 + mod1;
	if(num5%2 == 1){
        return "Oddish";
    }
	if(num5%2 == 0){
        return "Evenish";
    }
}
		
	
