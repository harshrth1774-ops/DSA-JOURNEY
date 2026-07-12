/*
Time Complexity: O(n log n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

     int n = arr.size();
     vector<int>temp = arr;
     sort(temp.begin(),temp.end());
    temp.erase(unique(temp.begin(),temp.end()), temp.end());

     int rank = 1;
     unordered_map<int,int>mp;
     for(int i = 0; i<temp.size(); i++){
        mp[temp[i]] = rank;
        rank++;
     }   

     vector<int>ans;
     for(int i = 0; i<n; i++){
        ans.push_back(mp[arr[i]]);
     }
     return ans;

    }
};