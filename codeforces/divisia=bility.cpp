#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, X;
    cin >> A >> B >> X;

    long long L = min(A, B);
    long long R = max(A, B);

    long long first = ((L + X - 1) / X) * X;
    long long last = (R / X) * X;

    if (first > last) {
        cout << 0 << endl;
        return 0;
    }

    long long count = (last - first) / X + 1;

    long long ans = count * (first + last) / 2;

    cout << ans << endl;

    return 0;
}