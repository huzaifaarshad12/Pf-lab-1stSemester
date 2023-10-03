#include<iostream>
using namespace std;
void discount(int price,string day);
main(){
	string day;
	int amount;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	discount(amount,day);
}
void discount(int price,string day)
{
	float total,final;
	if(day=="Sunday"){
	total=price*0.1;
	final=price-total;
	cout<<"Payable Amount: $"<<final;
}
	int amount;
	if(day!="Sunday"){
	cout<<"Payable Amount: $"<<price;	
}
}