class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string>st;

        for(string &s : wordList)
        st.insert(s);

        //dont not exit
        if(st.find(endWord) == st.end()) return 0;

        queue<string>q;
        q.push(beginWord);
        st.erase(beginWord);
        int level = 0;

        while(!q.empty()){

             int size = q.size();
            // string word = q.front();
            // q.pop();
            level++;

            while(size--){

                 string word = q.front();
                 q.pop();

                for(int i = 0; i<word.size(); i++){

                    string temp = word;

                    for(char ch = 'a'; ch <= 'z'; ch++){

                        temp[i] = ch;

                         if(st.find(temp) == st.end()) continue;

                        if(temp == endWord) return level+1;

                        if(st.find(temp) != st.end()){
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};