
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        unordered_map<char,int>mp1;
        for(char &ch : pat){
            mp1[ch]++;
        }
        
        int i = 0, j = 0;
        int n = txt.size();
        unordered_map<char,int>mp;
        int k = pat.size();
        int cnt = 0;
        
        while(j < n){
            
            mp[txt[j]]++;
            
            if(j - i + 1 == k){
                
                if(mp == mp1){
                    cnt++;
                }
                mp[txt[i]]--;
                if(mp[txt[i]] == 0){
                    mp.erase(txt[i]);
                }
                i++;
            }
            
            
            
            j++;
        }
        return cnt;
        
        
    }
};