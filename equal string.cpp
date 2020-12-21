#include <bits/stdc++.h>
  using namespace std;
bool palinrec(string str,int s,int e)
{
  //if string contain one chachacter then it is true palindrome
  if(s>e)
  return false;
  if(s==e) return true;
  else if(str[s]!=str[e])
   return false;
   return palinrec(str,s+1,e-1);
}
// if string is empty , empty string is palindrome
bool palin(string str)
{
  int n=str.length();
  if(n==0||n==1) return true;
  return palinrec(str,0,n-1);
}
  int main()
  {
    int t;cin>>t;
    while(t--)
    {
      string str;
      cin>>str;
      if(palin(str))
       cout<<"Yes\n";
      else
      cout<<"No\n";
    }
    return 0;
  }