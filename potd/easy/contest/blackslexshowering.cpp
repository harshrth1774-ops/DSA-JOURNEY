#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t; cin>>t;

  while(t--)
  {
    int n; cin>>n;
    vector<int>arr(n);
    for(int  i = 0; i<n; i++)
    cin>>arr[i];

    //step 1 calculate the overall sum without remeoving any elelemnt
    int sum = 0;
    for(int i = 1; i<n; i++){
      sum =  abs(sum + arr[i] - arr[i-1]);
    }
  
    //step 2 handle edge cases first elelemt and last element
    // agar mai start vaale elek=ment ko hta du and ek vaar end vaale element ko hta du then mai dekh lunga ki konsa max hai usko le lunga

    //MISTAKE:- mere mann mai ye aaya tha ki mai max kyu le rha hu then mai samjh vaad mai ki acha max mai isliye le rha hu kyuki max mera sabse jyada contrbution de rha hai

    //real life example:- supoose mere pass 100 rupee hai and mai ek hi coupon lga skta hu then final payment minimum kaise hogi jab sabse bade amount ka coupon mai apply krunga na

    int maxx = 0;
    maxx = max(maxx,(abs(arr[0]) - arr[1]));
    maxx = max(maxx, (abs(arr[n-1] - arr[n-2])));

    //step 3 middle elements ko ek ek krke remove krna hai means from idx 1 to idx n-2
    for(int i = 1; i<=n-2; i++){
     int curr = abs(arr[i] - arr[i-1]) + abs(arr[i]-arr[i+1]);
     int newc = abs(arr[i-1] - arr[i+1]);
     int d = curr - newc;
     maxx = max(maxx,d);
    }
    cout<<sum - maxx <<endl;
  }
}