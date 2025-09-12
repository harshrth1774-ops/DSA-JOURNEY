#include<iostream>
#include<vector>
using namespace std;

//brute force time com: O(m*n)

int firstOccurence(string txt, string pattern)
{
  string txt="abacdabad";
  string pattern="abad";
  int n=txt.size();
  int m=pattern.size();

  for(int i=0; i<n-m; i++)   //mai loop n-m tak chalunga kyuki pattern pattern < txt
  {
    int first=i,second=0;    //pehele ye socha tha ki dono ko plus plus karunga but usme 
    while(second<m)          //mereko length ni mil payegi jaha se maine start kiya tha so
    {                        //mai first ke ander i ko store kr leta hu jisse ki yaad rahe
                             
      if(txt[first]==pattern[second])  //match hua toh dono aage chalenge
      {
        first++,second++;
      }
      else                            //mis-match hote hai break kr dunga
      break;
      }
      if(second==m)                  //jab second apne ladt mai pahuch gya hoga agr then
      return first-second;           //iska mtlab ki meri poori string match ho gyi hai

      return -1;
    }
  }

  //optimse way : KMP algorithm TC:O(n + m)
  // explaination: iss aproach mai mujhe first ko peeche bhjene ki jarurt ni 
  int optimiseWay(string txt, string pattern)
  {
    //1.find lps of pattern   
    vector<int>lps(pattern.size(),0);

    int first=0,second=0;
    int n=txt.size();
    int m=pattern.size();

    while(first < n && second < m)                
    {
      if(txt[first] == pattern[second])
      {
        first++,second++;
      }else{

        if(second==0)
        {
          first++;
        }else{
          second=lps[second-1];
        }
      }
    }
    if(second==m)
    return first-second;
    return -1;
  } 

