// // class Solution {
// // public:
   
// //    void permutation(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans,vector<bool>& visited){

// //     if(temp.size() == visited.size()){
// //         ans.push_back(temp);
// //         return;
// //     }

// //     for(int i = 0; i<visited.size(); i++){
// //          if(visited[i] == 0){
            
// //             temp.push_back(nums[i]);
// //             visited[i] = 1;

// //             permutation(nums, temp, ans, visited);

// //             temp.pop_back();
// //             visited[i] = 0;
// //         }
    
// //         }
       
// //     }
   
// //     vector<vector<int>> permute(vector<int>& nums) {
// //         int n = nums.size();
// //         vector<vector<int>>ans;
// //         vector<int>temp;
// //         vector<bool>visited(n,0);

// //         permutation(nums,temp,ans,visited);
// //         return ans;

// //     }
// // };

// //---------------------------------------------------------------->approach two without using temp and visited array
// class Solution {
// public:
//      void per(vector<int>& nums,vector<vector<int>>& ans, int pos, int n){

//         if(pos == n){
//             ans.push_back(nums);
//             return;
//         }

//         for(int i = pos; i<n; i++){

//             swap(nums[i],nums[pos]);

//             per(nums,ans,pos+1,n);
//             //changes undo krdo
//             swap(nums[i],nums[pos]);
//         }
//      }
//     vector<vector<int>> permute(vector<int>& nums) {
//         int n = nums.size();
//         int pos = 0;
//         vector<vector<int>>ans;
//         per(nums,ans,pos,n);
//         return ans;
//     }waysy
// };