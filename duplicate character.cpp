#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
 {
    int t;cin>>t;
    while(t--)
    { // taking input string
      string str;cin>>str;
      // intialize varible count  max as 26 and flag varible to indicated duplication
      int count1=1,flag=0;
     //creating frequency array for counting character
     int freq[26];
     for(int i=0;i<26;i++)
     freq[i]=0;
     for (int i = 0; i < str.length(); i++)
         freq[str[i]-97]++;
     //checking duplicated character more than one and print it
     for (int i = 0; i < 26; i++)
     {
         if(freq[i]>1)
         {cout<<char(i+'a')<<"="<<freq[i]<<" ";
          flag=1;
         }
     }
     if(flag==0)
     cout<<"-1"<<endl;
    cout<<endl;
    }
    return 0;
  }