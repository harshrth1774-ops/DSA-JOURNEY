https://www.naukri.com/code360/problems/next-smaller-element_1112581?leftPanelTabValue=PROBLEM

//code:-
#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if(!st.empty())
        while (!st.empty() && arr[i] < arr[st.top()]) {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return ans;
}


