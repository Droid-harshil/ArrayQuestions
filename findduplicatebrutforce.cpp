#include<iostream>
using namespace std;
int findduplicate(int arr[],int size)
{
 for(int i=0;i<size;i++)
 { int count=0;
     for(int j=0;j<size;j++)
     {
         if(arr[i]==arr[j])
         count++;
           if(count==2)
           return arr[i];
     }
 }
}
void printarray(int arr[],int size){
 for(int i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
}
int main()
{
    int size;
cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        
    }
    printarray(arr,size);
    int d=findduplicate(arr,size);
    cout<<"duplicate element is"<<d<<endl;
}