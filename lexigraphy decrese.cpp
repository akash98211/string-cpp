#include <bits/stdc++.h>
#include<string>
  using namespace std;
 const int max_char=26;

void decrelexi(string& str)
{
   int freq[max_char]={0};
   
   for (int i = 0; i < str.length(); i++)
   {
       freq[str[i]-'a']++;
   }
   
   for (int i = max_char-1; i >=0; i--) {
       for (int j = 0; j < freq[i]; j++) {
           cout<< (char)('a'+i);
           
       }
      
   }
   
    
}
  int main()
  {
    int t;cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        decrelexi(str);
        cout<<endl;
    }
    
    return 0;
  }