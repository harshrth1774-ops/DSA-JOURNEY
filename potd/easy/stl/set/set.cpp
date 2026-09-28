#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    // set<int>set1;
    // set1.insert(1);
    // set1.insert(4);
    // set1.insert(5);
    // set1.insert(2);

    // for(auto it = set1.begin(); it != set1.end(); it++){
    //   cout<<*it <<" ";
    // }


    // set<int, greater<int> >set2;
    // set2.insert(1);
    // set2.insert(2);
    // set2.insert(3);
    // set2.insert(4);
    // set2.insert(5);

    // // for(auto it = set2.begin(); it != set2.end(); it++){
    // //   cout<<*it <<" ";
    // // }

    // for(auto it : set2)
    // cout<<it <<" ";



               /*deletion*/
//method -1
  //  set<int>set1;
  //  set1.insert(10);
  //  set1.insert(20);
  //  set1.insert(30);
  //  set1.insert(40);
  //  set1.insert(50);
  //  set1.insert(60);

  //  set1.erase(40);
   
  //  for(auto it : set1)
  //  cout<<it <<" ";


   //method-2 to delete using iterator

  //  set<int>set1;
  //  set1.insert(10);
  //  set1.insert(20);
  //  set1.insert(30);
  //  set1.insert(40);
  //  set1.insert(50);
  //  set1.insert(60);
  
  //  auto itr = set1.begin();
  //  advance(itr,3);
  //  set1.erase(itr);

  //  for(auto it : set1)
  //  cout<<it <<" ";

             /*search operation*/
      
    set<int>set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    set1.insert(5);
    set1.insert(6);
    set1.insert(7);

    if(set1.find(10) != set1.end()){
      cout<<"element is present" <<endl;
    }else{
      cout<<"element is not" <<endl;
    }
}