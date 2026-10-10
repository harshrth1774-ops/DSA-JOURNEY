//Approach-1 (Brute Force - TLE)
//T.C : O((n + k1 + k2) * log n), k is huge
//S.C : O(n)
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        
        vector<int>diff;
        long long mini = INT_MAX;
        
        //sfind the diff
        for(int i = 0; i<nums1.size(); i++){

            diff.push_back(abs(nums1[i] - nums2[i]));
        }

        priority_queue<int>p;

        for(int i = 0; i<nums1.size(); i++){
            p.push(diff[i]);
        }
        int k = k1 + k2;
        
       // long long sum = 0;
        while(k > 0 && p.top() > 0){

            int curr = p.top();
            p.pop();

            curr--;
            p.push(curr);

            k--;
        }
        long long sum = 0;
        while(!p.empty()){

            long long curr = p.top();
            p.pop();

            sum += curr * curr;
        }
        return sum;
    }
};

//Approach-2 (Using Counting Sort)
//T.C : O(n + maxDiff), maxDiff <= 10^5
//S.C : O(n)

class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {

        vector<int>diff(1e5 + 1,0);
        for(int i = 0; i<nums2.size(); i++){

            int difference = abs(nums1[i] - nums2[i]);
            diff[difference]++;

        }

        int k = k1 + k2;

        for(int currdiff = 1e5; currdiff >= 1 && k > 0; currdiff--){

            if(diff[currdiff] == 0) continue;

            // int cnt = diff[currdiff];

            

                int countops = min(k, diff[currdiff]);

                diff[currdiff] -= countops;
                diff[currdiff - 1] += countops;

                k-= countops;
            
        }
        long long res = 0;
        for(int i = 0; i <= 1e5; i++){

            res += 1LL *  diff[i] * pow(i,2);
        }
        return res;
    }
};