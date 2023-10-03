#include<iostream>
#include<math.h>
using namespace std;
void radian(float base,float angle); 
main(){
	float base,height,angle;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>base;

	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>angle;

	radian(base,angle);
	
}
void radian(float base,float angle){
	
	float perp=tan((angle*1)/57.2958)*base;

	cout<<"The height of the tree is: "<<perp<<" feet";
	
}