#include<iostream>
#include<queue>
using namespace std;
int main()
{
  queue<int>q;
  q.push(5);
  q.push(51);
  q.push(512);
  q.push(53);
  q.push(54);

  int n = q.size();
  while(n--)
  {
    cout<<q.front() <<" ";
    q.push(q.front());
    q.pop();
  }

}