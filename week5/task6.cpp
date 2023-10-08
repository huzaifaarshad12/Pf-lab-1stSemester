#include<iostream>
using namespace std;

string checkalphabetcase(char alphabet);
main(){
	
	char alphabet;
	string result;
	cout<<"Enter a character (A/a): ";
	cin>>alphabet;
	checkalphabetcase(alphabet);
	result=checkalphabetcase(alphabet);
	cout<<result;
	
	}
	string checkalphabetcase(char alphabet){
	if(alphabet=='A'){

		return "You have entered Capital A";
	}
	if(alphabet =='a'){

		return "You have entered small a";
	}
	
	 
	}