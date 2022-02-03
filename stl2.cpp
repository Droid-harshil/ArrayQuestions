#include<iostream>
#include<list>
#include<stack>
using namespace std;
int main()
 {
//     list<int>l;
//     list<int>l1(5,200);
//     for(int j:l1)
//     {
//         cout<<j<<endl;
//     }
//     l.push_back(4);
//     l.push_front(2);
//     for(int i:l)
//     cout<<i<<endl;
//     l.reverse();
//     for(int i:l)
//     cout<<i<<endl;
//     l.erase(l.begin());
//     cout<<l.size();
  stack<int>s;
  stack<string>s1;
  s.push(2);
  s.push(5);
  s1.push("pareek");
  s1.push("harshil");
  

  cout<<s1.top();
  cout<<s1.empty();
}