#include<iostream>
using namespace std;
void side(int length);
main(){
	int length;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>length;
	side(length);
}
void side(int length)
{
	int sticker;
	sticker=6*length*length;
	cout<<"Number of stickers needed: "<<sticker;
}