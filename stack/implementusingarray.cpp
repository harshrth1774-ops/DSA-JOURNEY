#include<iostream>
using namespace std;
class Stack{
  int *arr;
  int size;
  int top;

  public:

  bool flag;    //flag = 1 (empty)  flag= 0 (empty)
  //construtor
  Stack(int s)
  {
    size=s;
    top=-1;
    arr = new int[s];
  }
  //push
  void push(int value)
  {
    if(top==size-1)
    {
      cout<<"Stack overflow\n";
      return;
    }else{
      top++;
      arr[top]=value;
      cout<<"pushed "<<value<<" into the stack\n";
      flag = 0;

    }
  }
  //pop
  void pop()
  {
    if(top==-1)
    {
      cout<<"stack undeflow\n";
      return;
    }else{
      top--;            //visual representation
      cout<<"popped"<<arr[top+1]<<"from the stack\n";

      if(top == -1)
      flag = 1;
    }
  }
  //peek
  int peek()
  {
    if(top==-1)
    {
      cout<<"stack is empty\n";
      return -1;
    }else{
      return arr[top];
    }
  }
  //isEmpty
  bool isEmpty()
  {
    return top==-1;
  }
  //isSize()
  int isSize()
  {
    return top+1  ;
  }
};
int main()
{
  Stack S(5);
  S.push(-1);
  int value = S.peek();
  if(S.flag == 0)
  cout<<value<<endl;

  return 0;
}