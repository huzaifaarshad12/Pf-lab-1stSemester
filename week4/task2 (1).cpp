#include<iostream>
using namespace std;
void feet(float measurement);

main()
{
	float measurement;
	cout<<"Enter the measurement in inches: ";
	cin>>measurement;
	feet(measurement);
	
}
void feet(float measurement)
{
	float change;
	change=measurement/12;
	cout<<"Equivalent in feet: "<<change;

}