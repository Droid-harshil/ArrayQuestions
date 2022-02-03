#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end)
    {
       int  mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            ans=mid;
             end=mid-1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}
int lasttocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end)
    {
       int  mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            ans=mid;
             start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}
int main()
{
    int size;
cout<<"enter size of array"<<endl;
    cin>>size;
    int key;
   cout<<"enter array elements"<<endl;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
     cout<<"enter element of which you want to find forst occurence"<<endl;
    cin>>key;
    int firstoc=firstocc(arr,size,key);
    cout<<"index of first occurence is"<<firstoc<<endl;
    int lasttoc=lasttocc(arr,size,key);
    cout<<"index of last occurence is"<<lasttoc<<endl;
}