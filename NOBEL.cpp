#include <bits/stdc++.h>
  using namespace std;
  
void nobel(string& str)
{  
    int flag=0;
   for (int i = 0; i < str.length(); i++)
   {   
     if(str[i]=='n')
      {
          if(str[i+1]=='a' && str[i+1]=='e' && str[i+1]=='i' && str[i+1]=='o' && str[i+1]=='u' || str[i+1]==' ' || str[i]=='\0')
          {cout<<"YES\n";
           flag=1;
           break;
          }
          
      }
      else if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
         if(str[i+1]!='a' && str[i+1]!='e' && str[i+1]!='i' && str[i+1]!='o' && str[i+1]!='u')
            {cout<<"NO"<<endl;
            flag=1;
            break;
              
            }
        }
        
        // else 
        //  cout<<"NO\n";
        
    //   else if(str[i]=='n')
    //   {
    //       if(str[i+1]>='a' || str[i+1]<='z' || str[i+1]==' ' || str[i]=='\0')
    //       cout<<"YES\n";
          
    //   }
   }
   if(flag==0)
   cout<<"YES"<<endl;
   
    
}
  int main()
  {
    int t;cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        nobel(str);
    }
    
    return 0;
  }