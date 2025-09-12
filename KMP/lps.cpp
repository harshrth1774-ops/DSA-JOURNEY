#include<iostream>
#include<vector>
using namespace std;

int lps(vector<int> &str,vector<int>lps)
{
  //vector<int>lps(str.size(),0);    //vector lps jisme values store hongi
  int pre=0,suf=1; 
  while(suf<str.size())
  {
    if(str[pre] == str[suf])      
    {  
      lps[suf]=pre+1;              //match milte hi maine lps[suf] mai pre ke          
      pre++,suf++;                 //index ko +1 krke daal diya.
    }else{                        //jaha mereko match ni mila

      if(pre==0)                  //and pre zero par khada hai toh mai suffix ko aage 
      {                           // badne ko bolunga
        lps[suf]=0;
      }else{                      //agar pre zero par ni khada hai toh mai dekunga ki pre
        pre=lps[pre-1];           //se pehel baale index ko and konsa number hai usme then 
      }                           //usko uss index par bhj dunga
    }
  }
  return lps[str.size()-1];
}

