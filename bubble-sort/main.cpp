/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void bubblesort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[]={5,1,2,4,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before sorting"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl<<"After sorting"<<endl;
    bubblesort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}