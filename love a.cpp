#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;cin>>t;
    while(t--)
    {
        string str;cin>>str;
        int no_a=0,len=str.length();
        
        for (int i = 0; i < len; i++) {
            if(str[i]=='a')
            no_a++;
        }
        
        while(len>=no_a)
        {    
            if(no_a>(len/2))
              {cout<<len<<endl;
              break;}
            len--;
        }
       
    }
    
    return 0;
  }s