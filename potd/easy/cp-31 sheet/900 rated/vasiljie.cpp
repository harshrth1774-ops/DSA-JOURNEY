#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n, k, x;
        cin >> n >> k >> x;

        long long minisum = (k * (k + 1)) / 2;
        long long maxisum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

        if(x >= minisum && x <= maxisum){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}