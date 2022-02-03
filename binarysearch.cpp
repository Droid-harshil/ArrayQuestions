#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int element)
{
    int start=0;
    int end=size-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
    if(arr[mid]==element)
    {
        return mid;
    }
    else if(arr[mid]<element)
    {
       start=mid+1;
    }
    else
    {
        end=mid-1;
    }
    }
  return -1;
}
 int main()
 {
     int even[]={1,3,5,78,90,123};
     int odd[]={1,5,6,7,23,56,67,150};
     int evenindex=binarysearch(even ,6,5);
     int oddindex=binarysearch(odd,8,7);
     cout<<"element in even array is at index"<<evenindex<<endl;
     cout<<"element in odd array is at index"<<oddindex<<endl;

 }