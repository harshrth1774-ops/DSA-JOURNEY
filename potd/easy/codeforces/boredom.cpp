#include <bits/stdc++.h>
using namespace std;

int t[100001];

long long solve(vector<int>& arr, int i) {

    if (i < 0) {
        return 0;
    }

    if (t[i] != -1) {
        return t[i];
    }

    long long take = i * arr[i] + solve(arr, i - 2);

    long long skip = solve(arr, i - 1);

    return t[i] = max(take, skip);
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];

        if (nums[i] > maxVal) {
            maxVal = nums[i];
        }
    }

    vector<int> arr(maxVal + 1, 0);

    for (int i = 0; i < n; i++) {
        arr[nums[i]]++;
    }

    memset(t, -1, sizeof(t));

    cout << solve(arr, maxVal);

    return 0;
}