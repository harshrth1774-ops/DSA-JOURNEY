#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int ra, ca;
    cin >> ra >> ca;

    vector<vector<int>> A(ra, vector<int>(ca));

    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < ca; j++) {
            cin >> A[i][j];
        }
    }

    int rb, cb;
    cin >> rb >> cb;

    vector<vector<int>> B(rb, vector<int>(cb));

    for (int i = 0; i < rb; i++) {
        for (int j = 0; j < cb; j++) {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> result(ra, vector<int>(cb, 0));

    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            for (int k = 0; k < ca; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}