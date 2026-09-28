#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int firstone = -1;
        int lastone = 0;
        int count = 0; //kitne zero aate ja rhe hai
        int maxzero = 0;
        for(int i = 0; i<n; i++){
            if(s[i] =='1'){
                if(firstone == -1){
                    firstone = i;
                }
                    lastone = i;
                    count = 0;
                }else{
                count++;
            }
            maxzero = max(maxzero,count);
        }
        //here is the game of circular string the main thoing
        //logic kya hai ki mai length(n) se secondone minus kr dunga that means mereko end ke number of zeroes mil jayenge and then add firstone which will add my starting zeroes in it
        maxzero = max(maxzero,n-lastone+firstone-1);
        cout<<maxzero<<endl;
    }
}