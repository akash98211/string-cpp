#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x;
        int i=5,count=0;
        while(i--)
        {
            cin>>y;
            if(x[0]==y[0] || x[1]==y[1])
                count++;
        }
        
        if(count!=0)
        cout<<"YES\n";
        
        else
        cout<<"NO\n";
    }
    
    return 0;
  }