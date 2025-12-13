#include<iostream>
using namespace std;

class Queue
{
  int *arr;
  int size;
  int front,rear;

  public:
  Queue(int n)
  {
    arr = new int[n];
    size = n;
    front = rear = -1;
  }

  bool isEmpty()
  {
    return front == -1;
  }

  bool isFull()
  {
    return (rear + 1) % size == front;
  }

  void push(int x)
  {
    //empty
    if(isEmpty())
    {
      front = rear = 0;
      arr[0] = x;
    }
    //full
    else if(isFull())
    {
      cout<<"not possible";
      return;
    }
    //normal
    else
    {
      rear = (rear + 1) % size;
      arr[rear] = x;
    }
  }

  void pop()
  {
    if(isEmpty())
    {
      cout<<"not possible";
      return;
    }
    else
    {
      if(front == rear)
      {
        front = rear -1;
      } 
      else
      {
        front = (front + 1) % size; 
      }
    }
  }
};
int main()
{
  Queue q(5); 
  q.push(4);
  q.push(41);
  q.push(43);
  q.push(43);
  q.push(43);
  q.push(43);
  q.pop();
   q.push(4s);

}