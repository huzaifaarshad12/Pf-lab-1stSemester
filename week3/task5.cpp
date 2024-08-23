#include<iostream>
using namespace std;
main(){
	string name;
	int mm;
	int im;
	int em;
	float Aggregate;
	
	cout<<"Enter the student's name: ";
	cin>>name ;
	
	cout<<"Enter matriculation marks (out of 1100): ";
	cin>>mm ;
	
	cout<<"Enter intermediate marks (out of 550): " ;
	cin>>im ;
	
	cout<<"Enter Ecat marks (out of 400): ";
	cin>>em ;
	
	Aggregate=((mm/1100.0)*0.10+(im/550.0)*0.40+(em/400.0)*0.50)*100;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<Aggregate<<"%";

}
