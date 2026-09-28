#include <bits/stdc++.h>
using namespace std;

int main(){
   
  // //max heap
  //  priority_queue<int>p;
  //  p.push(9); 
  //  p.push(100); 
  //  p.push(45); 
  //  p.push(19); 
  //  p.push(90); 
  //  p.push(9); 

  //  cout<<p.top() <<endl;
  //  p.pop();
  //  cout<<p.top();


   //min heap
   priority_queue<int, vector<int>, greater<int> >p;

    p.push(9); 
   p.push(100); 
   p.push(45); 
   p.push(19); 
   p.push(90); 
   p.push(9); 

   cout<<p.top();
    return 0;
}