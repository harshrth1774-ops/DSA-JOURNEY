#include<iostream>
using namespace std;

class Queue{
  int *arr;
  int size;
  int front;
  int rear;

  public:
  Queue(int s){
    size = s;
    arr = new int[size];
    rear = -1;
    front = -1;
  }

  bool isEmpty(){
    if(rear == -1 && front == -1)
    return 1;
    else
    return 0;
  }
  bool isFull(){
    if(rear == size-1) return 1;
    else return 0;
  }

  void enqueue(int val){
    if(isFull()) cout <<"queue is full\n";

    else{
      if(front == -1) 
      front = 0;
      rear++;
      arr[rear] = val;
    }
  }
  void dequeue()
  {
    if(isEmpty()){
      cout<<"cant from dequeue operation";
    }else{
      if(front == rear){
        front = rear = -1;
      }
      front++;
    }
  }

  void showFront()
  {
    if(isEmpty()) cout<<"queue is empty";
    else{
      cout<<arr[front];
    }
  }

  void display()
  {
    if(isEmpty()){
      cout<<"queue is empty";
    }else{
      for(int i=front; i<=rear; i++){
        cout<<arr[i] <<" ";
      }
      cout<<endl;
    }
  }
};
int  main()
{
  Queue q(5);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(130);

  q.showFront();

  q.display();
  
}