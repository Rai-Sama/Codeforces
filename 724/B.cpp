#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #724 (1536) Problem B
void solve() {
    set<string> s1;
    int n; 
    cin>>n;
    string s; 
    cin>>s;
    
    for(int i=0;i<n;i++) // substrings
    {
        string temp=""; 
        temp += s[i];
        s1.insert(temp);
    }
    
    
    for(int i = 0; i < n - 1; i++)
    { 
        string temp=""; 
        temp+=s[i]; 
        temp+=s[i+1];
        s1.insert(temp);
     }
     
     for(int i=0; i<n-2;i++)
     {
         string temp=""; 
         temp += s[i];
         temp += s[i+1];
         temp += s[i+2]; 
         s1.insert(temp);
     }
     
     for(char i = 'a'; i <= 'z'; i++)
     { // missing character
         string temp=""; 
         temp += i;
         if(s1.count(temp) == 0)
         {
             cout<<temp<<"\n"; 
             return; 
         }
     }
     
     for(char i='a'; i<='z' ; i++) // length 1
     {
         string temp = ""; 
         temp += i;
         for(char j = 'a'; j <= 'z' ; j++)
         {
             string temp1 = temp; 
             temp1 += j;
            if(s1.count(temp1) == 0)
            {
               cout<<temp1<<"\n";
               return; 
            }
         } 
     }

       for(char i = 'a'; i <= 'z'; i++) 
       {
           string temp=""; 
           temp += i;
           for(char j='a'; j<='z' ; j++)
           {
               string temp1=temp;
               temp1+=j;
               for(char k='a'; k<='z' ; k++)
               {
                   string temp2=temp1;
                   temp2+=k;
                   if(!s1.count(temp2)>0)
                {
                   cout<<temp2<<"\n"; 
                   return; 
                 }
                   
               }  
           }
       }
}
//for(int i = 0; i < n; i++)

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    
}