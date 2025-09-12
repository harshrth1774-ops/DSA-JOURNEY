#include<iostream>
using namespace std;
int main()
{
  string s="aabbccc";

  int i=0, idx=0;  // i string mai iterate karega and idx value ko assign krega

  while(i<s.size())
  {
    char current_char=s[i];         //character store kara leta hu
    int count=0;

    //ab mai check krunga same charcter kitni baar aaya hai
    while(i<s.size() && s[i]==current_char)
    {
      count++;
      i++;
    }

    //mai pehele current current ko daal deta hu count ko baad mai assign karunga
    s[idx]=current_char;
    idx++;

    //jab mereko mil jayega tab mai values assign karunga lekin problem ye aayegi ki count int type ka hai and usko string mai kaise daalunga and ye bhi ho skta hai ki count maan le 10 hua toh 1 ko alag and 0 ko alag store karana pdega
    if(count>1)
    {
      string str=to_string(count);
      for(char &ch : str)
      {
        s[idx]=ch;
        idx++;
      }
    }
 

  }
  //jaha mere idx stand hoga stand vahi mera ans ho jayega
  cout<<idx; 
  
}