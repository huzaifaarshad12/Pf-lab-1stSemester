#include<iostream>
using namespace std;
int countIdenticalArrays(int arr[][3],int n);
main(){
    cout<<"Enter the number of rows for the array: ";
    int rows;
    cin>>rows;
    int arr[rows][3];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>> arr[i][j];
        }
    }
   int result=countIdenticalArrays(arr,rows);
   cout<<"The count of identical rows in the array is: "<<result;
}
int countIdenticalArrays(int arr[][3],int n){
    int count=0;
    bool same;
    int check[3];
    for(int i=0;i<n;i++){
    int num=0;
        for(int j=0;j<3;j++){
            check[j]=arr[0][j];
        }
        for(int k=0;k<3;k++){

            if(check[k]==arr[i][k]){
                same=true;
                num++;
            }
            else{
                same=false;
            }
        }
            if(same && num==3 ){
                count++;
            }
    }
    if(count!=1){
    return count;
    }
    else{
        return 0;
    }
}