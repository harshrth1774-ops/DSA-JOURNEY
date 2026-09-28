//approach 1--------------------------------------------------------------------->
class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        queue<int>q;
        for(int i=0; i<arr.size(); i++)
        q.push(i);
        int time = 0;
        while(arr[k]!=0)
        {
            arr[q.front()]--;

            if(arr[q.front()]) q.push(q.front());
            q.pop();
            time++;
        }
        return time;
    }
 };

 //approach 2------------------------------------------------------------------->
queue<pair<int,int>>q;

for(int i=0; i<tickets.size(); i++)
{
  q.push({i,tickets[i]});
}
int time = 0;
while(!q.empty())
{
  int i = q.front().first;
  int v = q.front().second;

  q.pop();
  v--;
  time++

  if(v > 0) q.push({i,v});
  if(v == 0 && i == k) return time;
}