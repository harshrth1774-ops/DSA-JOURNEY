class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {

        int n = s.size();

        unordered_map<char, vector<int>> mp;

        // store frequency, first index, last index
        for(int i = 0; i < n; i++){

            char ch = s[i];

            if(mp.find(ch) == mp.end()){
                mp[ch] = {1, i, i};
            }
            else{
                mp[ch][0]++;
                mp[ch][2] = i;
            }
        }

        // store valid substrings as {start, end}
        vector<pair<int,int>> candidates;

        for(auto &it : mp){

            char ch = it.first;

            int start = it.second[1];
            int end = it.second[2];

            bool valid = true;

            for(int i = start; i <= end; i++){

                char current = s[i];

                // current character appeared before start
                if(mp[current][1] < start){
                    valid = false;
                    break;
                }

                // current character has another occurrence later
                end = max(end, mp[current][2]);
            }

            if(valid){
                candidates.push_back({start, end});
            }
        }

        // sort by ending index
        sort(candidates.begin(), candidates.end(),
             [](pair<int,int> a, pair<int,int> b){
                 return a.second < b.second;
             });

        vector<string> ans;

        int lastEnd = -1;

        for(auto &p : candidates){

            int start = p.first;
            int end = p.second;

            // no overlap
            if(start > lastEnd){

                ans.push_back(s.substr(start, end - start + 1));

                lastEnd = end;
            }
        }

        return ans;
    }
};