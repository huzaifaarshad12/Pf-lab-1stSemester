#include<iostream>
using namespace std;
main()
{
	int population,births,pd;
	cout<<"Enter the current world population: ";
	cin>>population;
	
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>births;
	
	pd=births*12*30+population;
	cout<<"the population in three decades will be: "<<pd;
} 
