#include<iostream>
using namespace std;

class Dequeue{
  int *arr;
  int size,front,rear;

  Dequeue(int n)
  {
    size = n;
    front = rear = -1;
    arr = new int[n];
  }

  //empty
  bool isEmpty()
    return front == -1;
  
    bool isFull()
    return (rear + 1) % size;
  //pushfront
  void push_front(int x)
  {
    //arr empty
    if(isEmpty()){
      front = rear = 0;
      arr[0] = x;
      return;
    }

    else if(isFull()){
      return;
    }

    else{
      front = (front - 1 + size) % size;
      arr[front] = x;
      return;
    }
    
  }
  //pushback
  void push_back(int x)
  {
    //empty
    if(isEmpty()){
      front = rear = 0;
      arr[0] = x;
      return;
    }
    //full
    else if(isFull()) return;
    else{
      rear = (rear + 1 + size) % size;
      arr[rear] = x;
      return;
    }
  }
  //popfront
  void pop_front()
  {
    //empty
    if(isEmpty()) return;
    //full
    else{
      //agar 1  hi element hai toh
      if(front == rear){
        front =  rear = -1;
        //agar ek se jyada element hai then
      }else{
        front = (front + 1) % size;
      }
    }
  }
  //popback
  void pop_back()
  {
    //empth
    if(isEmpty()) return;
    //full
    else{
      if(front == rear)
      front =  rear = -1;
    }else{
      rear = (rear - 1 + size) % size;
    }
  }
};
int main()
{
  Dequeue d(5);
  d.push_back(10);
  d.push_back(91);
  d.push_back(9);
  d.push_back(8);
  d.pop_back(8);
  d.pop_front(8);
}