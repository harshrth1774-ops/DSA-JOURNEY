#include<iostream>
using namespace std;
class Node{
  public:
  int rowno, colno, element;
  Node* next ;
};
int main()
{
  int m,n;
  cin>>m >>n;
  int matrix[m][n];
  for(int i=0; i<m; i++){
    for(int j = 0; j<n; j++){
      cin>>matrix[i][j];
    }
  }
  Node* head = NULL;
  Node* tail = NULL;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(matrix[i][j]!=0){
        Node* temp = new Node;
        temp->rowno = i;
        temp->colno = j;
        temp->element = matrix[i][j];
        temp->next = NULL;

        if(head == NULL) head = tail = temp;
        else{
          tail->next = temp;
          tail = temp;
        }
      }
    }
  }
  Node* print = head;
  while(print){
    cout<<print->rowno <<" " <<print->colno<<" "<<print->element<<" "<<endl;
    print = print->next;
  }

}