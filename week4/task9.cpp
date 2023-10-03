#include<iostream>
using namespace std;
void fuel(float distance);
main(){
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	fuel(distance);

}
void fuel(float distance)
{
	float fuelneeded;
	if(distance>10)
{	fuelneeded=distance*10;
	cout<<"Fuel needed; "<<fuelneeded;
}
	if(distance<10)
{	cout<<"Fuel needed: 100";

}

}	