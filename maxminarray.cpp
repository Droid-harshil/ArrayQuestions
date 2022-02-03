#include<iostream>
using namespace std;
int getMAX(int arr[],int size)
{
  int max=INT32_MIN;
  for(int i=0;i<size;i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
  }
  return max;
}
int getMIN(int arr[],int size)
{
  int min=INT32_MAX;
  for(int i=0;i<size;i++)
  {
      if(arr[i]<min)
      {
          min=arr[i];
      }
  }
  return min;
}
int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"MAX_ELEMENT IS : "<<getMAX(arr,size)<<endl;
     cout<<"MIN_ELEMENT IS : "<<getMIN(arr,size);
    
}