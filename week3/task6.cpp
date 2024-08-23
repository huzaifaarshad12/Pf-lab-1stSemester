#include<iostream>
using namespace std;
main()
{
  long double mb;
  long double bit;
  
  cout<<"Enter the size in megabytes (MB): ";
  cin>>mb;
  
  bit=mb*1024*1024*8;
  cout<<mb<<" MB is equivalent to "<<bit<<" bits.";
}

