#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int  n;
  cin>>n;

  string s;
  cin>>s;

  vector<int>freq(3,0);

  int count = 0;
  if(n <6){
    count = count + (6-n);
  }
  for(int i = 0; i<n; i++){
    if(islower(s[i])){
      freq[0]++;
    }
    else if(isupper(s[i])){
      freq[1]++;
    }
    else if(!isalnum(s[i])){
      freq[2]++;
    }
  }

  for(int i = 0; i<freq.size(); i++)
  {
    if(freq[i] == 0) freq[i]++;
    else if(freq[i] =)
  }
}