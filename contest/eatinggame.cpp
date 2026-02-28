#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        
        int maxi = v[0];
        for(int i = 1; i < n; i++){
            if(v[i] > maxi)
                maxi = v[i];
        }

        
        int count = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == maxi)
                count++;
        }

        cout << count << endl;
    }
}