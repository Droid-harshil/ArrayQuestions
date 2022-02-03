#include<iostream>
using namespace std;
#include<array>
#include<vector>
#include<deque>
int main()
{
  /*  array<int,7>arr1={1,2,3,4,5,6,7};
    cout<<arr1.size()<<endl;;//calculate size of array
    cout<<arr1.at(6)<<endl;
    cout<<arr1[6];
    for(int i=0;i<arr1.size();i++)//treaversing array
    {
        cout<<arr1[i]<<endl;
    }

    cout<<endl;
    cout<<arr1.front();
    cout<<endl;
    cout<<arr1.back();
*/
// vector<int>v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(13);
// v.push_back(14);
// v.push_back(15);
// v.push_back(16);
// v.push_back(17);
// v.push_back(18);
// v.push_back(19);
// v.push_back(20);
// for(int i:v)
// cout<<i<<endl;
// cout<<"size="<<v.size()<<endl;
// cout<<"capacity="<<v.capacity()<<endl;

// v.pop_back();
// for(int i:v)
// cout<<i<<endl;
// cout<<"enter values in vector"<<endl;
// for(int i:v)
// {
//   cin>>i;
// }
// for(int i:v)
// cout<<i<<endl;
//v.clear();//clear all elements of vector but didnt reduce capacity

//cout<<"capacity after clear="<<v.capacity()<<endl;
deque<int>d;
d.push_back(3);
d.push_back(4);
d.push_front(2);
d.push_front(1);
d.push_back(5);
d.push_back(6);
d.push_back(7);
cout<<"size = "<<d.size();
cout<<endl;
//d.pop_front();
for(int i:d)
cout<<i<<endl;



}