#include <bits/stdc++.h>
  using namespace std;
int palindrome(string str) 
{
    int count=0,diff,n=str.length();
    for (int i = 0; i < (n/2); i++) 
    {
          diff=str[i]-str[n-1-i];
          if(diff<0) 
           {diff*=(-1); count+=diff; }
           
          else if(diff>0) count+=diff;
         
         else continue;
          
    }
    return count;
}
  int main()
  {
    int t;cin>>t;
    while(t--)
    {
        string str;cin>>str;
   cout<<palindrome(str)<<endl;     
        
    }
    
    return 0;
  }