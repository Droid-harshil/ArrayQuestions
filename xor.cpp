#include<iostream>
using namespace std;
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
    
    int ans=3;
for(int i=0;i<size;i++)
{
    ans=ans^arr[i];//i means 1^2^1^2^3=3,eg:2 2^4^5^2^5^4^6=6or 1^2=3or1^2^3=4
}
cout<<"ans is"<<ans;
}
