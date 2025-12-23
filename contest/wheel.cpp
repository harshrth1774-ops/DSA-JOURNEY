  #include<iostream>
  #include<vector>
  using namespace std;
  int main()
  {
    int t;
    cin>>t;

    while(t--)
    {
      int n; cin>>n;
      vector<string>arr(n);
      for(int i = 0; i<n; i++)
      cin>>arr[i];

      string s = "";  //jisme mai add krunga

      if(n == 1)
      {
        cout<<arr[0] <<endl;
        continue;
      }
      
      string s = arr[0];
      for(int i = 1;i<n; i++)
      {
        string left = arr[i] + s;
        string right = s + arr[i];

        s = min(left,right);
      }

      cout<<s <<endl;
    }
  }