#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        long long xK, yK, xQ, yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;
 
        // All possible knight moves
        vector<pair<long long, long long>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };
 
        set<pair<long long, long long>> fromKing;
        set<pair<long long, long long>> fromQueen;
 
        // Positions from which knight attacks KING
        for (auto &m : moves) {
            fromKing.insert({xK + m.first, yK + m.second});
        }
 
        // Positions from which knight attacks QUEEN
        for (auto &m : moves) {
            fromQueen.insert({xQ + m.first, yQ + m.second});
        }
 
        // Count intersection
        int count = 0;
        for (auto &pos : fromKing) {
            if (fromQueen.count(pos)) {
                count++;
            }
        }
 
        cout << count << '\n';
    }
 
    return 0;
}
