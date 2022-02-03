#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
if(arr[i]==key)
{
return 1;
}
    }
    
}
int main()
{
    int size,key;
    cout<<" enter size of array"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"enter element you want to search"<<endl;
    cin>>key;
    int found=linearsearch(arr,size,key);
    if(found)
  cout<<"element is present";
  else 
  cout<<"element is not present"<<endl;
}