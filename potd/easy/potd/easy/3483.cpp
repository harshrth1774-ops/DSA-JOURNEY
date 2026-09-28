class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int n = digits.size();
        int cnt = 0;
        set<int>st;

        for(int i = 0; i < n; i++) {

            // First digit cannot be 0
            if(digits[i] == 0) continue;

            for(int j = 0; j < n; j++) {

                for(int k = 0; k < n; k++) {

                    if(j == k || i == j || i == k)
                        continue;

                    int num = 100 * digits[i] + 10 * digits[j] + digits[k];

                    if(num % 2 == 0)
                        st.insert(num);
                }
            }
        }

        return st.size();
    }
};


/* optimised approach */