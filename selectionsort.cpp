#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<(n-1);i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        if(min!=i){
          swap(arr[min],arr[i]);
        }
    }
}
int main()
{
    int arr[20]={6,2,8,4,10};
    cout<<"array before sort"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    selectionsort(arr,5);
    cout<<endl;
     cout<<"array after sort"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}