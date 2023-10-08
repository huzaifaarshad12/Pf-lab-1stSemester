#include<iostream>
#include<math.h>
using namespace std;
void disc(float a,float b,float c);
main(){
	float a,b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	disc(a,b,c);
	}

void disc(float a,float b,float c){

	float disc=pow(b,2)-4*a*c;
	if(disc>0)
{	float num1;
	float num2;		 
	num1=(-b+sqrt(disc))/(2 * a);
	num2=(-b-sqrt(disc))/(2 * a);
	cout<<"Solutions: x = "<<num1<<" and x = "<<num2;
}
	if(disc==0){
	cout<<"Solution: x = "<<-b/(2*a);

}
	if(disc<0)
{	float root;
	float image;
	root=(-b/(2*a));
	image=sqrt(-disc)/(2 * a);
		
	cout<<"Complex Solutions: x = "<<root<<" + "<<image<<"i and x = "<<root<<" - "<<image<<"i";

}
	
}



	

	