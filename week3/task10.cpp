#include<iostream>
using namespace std;
main(){
	string name;
	int w,d,l,points;
	cout<<"Enter the name of the cricket team: ";
	cin>>name;
	cout<<"Enter the number of wins: ";
	cin>>w;
	w=w*3;
	cout<<"Enter the number of draws: ";
	cin>>d;
	d=d*1;
	cout<<"Enter the number of losses: ";
	cin>>l;
	l=l*0;
	points=w+d+l;
	cout<<name<< " has obtained "<<points<<" points in the Asia Cup tournament.";
}