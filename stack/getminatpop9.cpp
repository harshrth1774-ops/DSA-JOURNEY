
stack<int> _push(int arr[], int n) {
  //maine stack ke ander arr ke elements ko push karaya pehele
    stack<int>st;     
    for(int i=0; i<n; i++)
    {
        st.push(arr[i]);
    }
    return st;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
  //yaha par maine stack ke elements ko array mai daala hai
    vector<int>arr;
    while(!s.empty()){
        arr.push_back(s.top());
        s.pop();
    }
    //then maine array ko reverse kiya hai
    reverse(arr.begin(),arr.end());
    while(!arr.empty()){
        int minVal = *min_element(arr.begin(), arr.end());
        cout<<minVal <<" ";
        arr.pop_back();
    }
    
}
//tc- o(n^2)
//optimise approach
stack<int> _push(int arr[], int n){
  stack<int>st;
  for(int i=0; i<n; i++){
    if(i==0)
    st.push(arr[i]);
    else
    st.push(min(arr[i],st.top()));
  }
  return st;
}
void _getMinAtPop(stack<int>s){
  while(!s.empty()){
    cout<<s. top() <<" ";
    s.pop();
  }
}
//tc-O(n)