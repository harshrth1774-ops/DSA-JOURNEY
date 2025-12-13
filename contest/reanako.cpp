#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t; // take input for t

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
        }

        for(int i = 0; i < n; i++){
            // write your logic here
            cout << a[i] << " " << b[i] << endl;
        }
    }
}
