#include<iostream>
using namespace std;

 main()
{
    int count=0;
    bool nust=false;
    int arr1[3][3];
    int arr2[3][3]={{1,0,0},
                    {0,1,0},
                    {0,0,1}};
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>arr1[i][j];
            if(arr2[i][j]== arr1[i][j])
            {
                nust=true;
                count++;
            }
            else
            {
                nust=false;
            }

        }
    }
    cout<<"The matrix you entered is : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<"\t";

        }
        cout<<endl;
    }
if(nust && count==9)
{
    cout<<"The entered matrix is an identity matrix.";
}
else
{
    cout<<"The entered matrix is NOT an identity matrix.";
}

    








}