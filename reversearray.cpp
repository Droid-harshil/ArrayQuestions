#include<iostream>
using namespace std;
void reversearray(int arr[],int size)
{
 int start,end;
 start=0;
 end=size-1;
  while(start<=end)
     {
       /*  int temp;
         temp=arr[start];
         arr[start]=arr[end];
         arr[end]=arr[temp];*/
         swap(arr[start],arr[end]);//more efficient to use this funciont
         start++;
         end--;
         
         

     }
 

}
int main()
{
  int size;
    cout<<" enter size of array"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"Array before swaped"<<endl;
     for(int i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    
     cout<<"Array after swap"<<endl;
    reversearray(arr,size);
      for(int i=0;i<size;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }

}