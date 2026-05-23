/*

brute force: tc = o(n^2) 
             sc = o(n)
*/
class Solution {
public:
    bool check(vector<int>& arr) {
        
        int n = arr.size();

        for(int pos = 0; pos < n; pos++){

            vector<int>temp(n);

            for(int i = 0; i<n; i++){

                temp[(i + pos) % n] = arr[i];
            }

            bool sorted = true;
            for(int j = 1; j<n; j++){

                if(temp[j] < temp[j-1]){
                    sorted = false;
                   break;
                }
            }
            if(sorted == true){
                return true;
            }
        
        }
        return false;

    }
};

/*
optimal solution 
    
tc = O(n);
sc= s(1);

*/
