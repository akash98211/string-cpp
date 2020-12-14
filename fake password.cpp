#include <bits/stdc++.h>
  using namespace std;
void left(string &str,int d)
{
    reverse(str.begin(),str.begin()+d);
    reverse(str.begin()+d,str.end());
    reverse(str.begin(),str.end());
}

void right(string &str,int d)
{
    left(str,str.length()-d);
}

  int main()
  { 
      int t;cin>>t;
      while(t--)
      {
    string str1,str2;cin>>str1>> str2;
    string str3=str2;
    left(str2,2);
    right(str3,2);
    if (str1== str2 || str1==str3)
    cout<<"YES\n";
    if else(str1.length()==1) cout<<"YES\n";
    else
    cout<<"NO\n";}
    
    return 0;
    
  }