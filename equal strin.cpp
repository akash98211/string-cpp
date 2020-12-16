#include <bits/stdc++.h>
  using namespace std;

  
  int main()
  {
   int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string str[n];
        for (int i = 0; i < n; i++) 
            cin>>str[i];
            
        
        for (int i = 0; i < n; i++) 
            cout<<str[i]<<" ";
        
    }
    return 0;
  }