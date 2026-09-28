#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s = "aabcdaabc";
    vector<string> prefix(s.size()-1);
    vector<string> suffix(s.size()-1);

    string psum = "";
    for(int i = 0; i < s.size() - 1; i++) {
        psum += s[i];
        prefix[i] = psum;
    }

    string ssum = "";
    for(int j = s.size() - 1; j >= 1; j--) {
        ssum = s[j] + ssum; 
        suffix[j] = ssum;
    }

    int length = 0;
    for(int i = 0; i < prefix.size(); i++) {
        if(prefix[i] == suffix[s.size() - prefix[i].size()]) { 
            length = prefix[i].size();
        }
    }

    cout << length;
}
