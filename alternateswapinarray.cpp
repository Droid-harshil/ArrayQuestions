#include<iostream>
using namespace std;
void swapalternat(int arr[],int size)
{
    for(int i=0;i<size;i=i+2){
      if((i+1)<size)
      {
          swap(arr[i],arr[i+1]);
         
      }
    }
}
void printarray(int arr[],int size)
{
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
        cout<<endl;
    }
cout<<"alternate swaped array"<<endl;
swapalternat(arr,size);
printarray(arr,size);
}