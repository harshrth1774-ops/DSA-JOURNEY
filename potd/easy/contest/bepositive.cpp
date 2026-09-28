#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int countzero = 0;
        int countneg = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                countzero++;
            else if (arr[i] == -1)
                countneg++;
        }

        int minsteps = countzero;  
        if (countneg % 2 != 0)     
            minsteps += 2;

        cout << minsteps << endl;
    }
    return 0;
}
