#include<iostream>
#include<vector>
using namespace std;
int deleteColumns(vector<string>s)
{
  int n=s.size();  //vector ka size hai ye
  int k=s[0].length(); //vector mai jo string store hai uski length hai
  int count=0;

  //mai i ko word ki length par and j ko vector mai iterate krunga
  //jisme mai baad baale word ke peheele letter ko pehele word ke first leeters se compare krunga

  for(int i=0; i<k; i++)
  {
    for(int j=1; j<n; j++)
    {
      if(s[j][i]<s[j-1][i])
      {
        count++;
        break;
      }
    }
  }
  return count;
}
int main()
{
  vector<string>s={"cba","daf","ghi"};
  cout<<deleteColumns(s);
}