/* brute force - Time Complexity: O(n³)
Space Complexity: O(n)*/
class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> mp1;
        for (int i = 0; i < t.size(); i++) {
            mp1[t[i]]++;
        }

        string res = "";
        int mini = INT_MAX;

        for (int i = 0; i < s.size(); i++) {

            string ans = "";

            for (int j = i; j < s.size(); j++) {

                ans += s[j];

                if (ans.size() >= t.size()) {

                    unordered_map<char, int> mp2;

                    for (int k = 0; k < ans.size(); k++) {
                        mp2[ans[k]]++;
                    }

                    bool same = true;

                    for (auto it : mp1) {
                        if (mp2[it.first] < it.second) {
                            same = false;
                            break;
                        }
                    }

                    if (same) {
                        if (ans.size() < mini) {
                            mini = ans.size();
                            res = ans;
                        }
                    }
                }
            }
        }

        return res;
    }
}; 