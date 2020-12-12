#include <bits/stdc++.h>
#include<string>
  using namespace std;
  
  int main()
  {
    int t=1;//cin>>t;
    while(t--)
    {
        string str="amanaaamanc",str1="aman";
        cin>>str>>str1;
         int len=str.length(),sum=0;
         int i;
         while(len>=4)
         {    
             i=str.find(str1);
             sum=len-(i+3);
             str.shift();
             len=str.length();
         }
         
    }
    return 0;
  }