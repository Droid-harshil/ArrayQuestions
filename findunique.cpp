#include<iostream>
using namespace std;
int findunique(int arr[],int size)
{
int ans=0;
for(int i=0;i<size;i++)
{
    ans=ans^arr[i];//i means 1^2^1^2^3=3,eg:2 2^4^5^2^5^4^6=6
}
return ans;
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
        cout<<endl;
    }
    int unique=findunique(arr,size);
    cout<<unique;
}