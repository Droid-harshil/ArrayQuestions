#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>arr;
    arr={1,2,3,4,5};
    array<int,6>arr2;
    arr2.fill(10);
    // cout<<arr.at(2)<<endl;
    // cout<<arr[3];
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
}