#include <bits/stdc++.h>
  using namespace std;
  int l,r,k;
  
  void reverse(string &str,long long int left,long long int right){
    while(left<right)
    swap(str[left++], str[right--]);
  }
  
void left(string str,int d)
{
  reverse(str, l-1, r-1-k);
      reverse(str, r-k, r-1);
      reverse(str, l-1, r-1);
}

string right(string str,int d)
{
    left(str,str.length()-d);
}

  int main()
  { string str1,str2;cin>>str1;
      
      // m for number of quiery 
      int m;cin>>m;
      while(m--)
      {
        cin>>l>>r>>k;
        str2=str1.substr(l-1,r-1);
        while(r--)
        { str2= right(str2,k);
        }
         str1=replace(l+1,r+1,str2);
       }
       cout<<str1<<endl;
    
    return 0;
    
  }