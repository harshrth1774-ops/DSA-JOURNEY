//leet-4056 && 4057

// tc = O(n^2)
class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        int cnt =  0;

        for(int i = 0; i<n; i++){

            for(int j = i+1; j<n; j++){

                
                int b = intervals[i][1];
                int c = intervals[j][0];

                if(c <= b) cnt++;
            }
        }
        return cnt;
    }
};

//tc = nlogn
class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        long long res = 0;

        for(int i = 0; i<n; i++){

            int left = i+1;
            int right = n-1;
            int j = -1;

            while(left <= right){

                int mid = (left + right) / 2;
                

                if(intervals[i][1] >= intervals[mid][0]){
                    j = mid;
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
            if(j != -1) res += (j-i);
        }
        return res;
    }
};
