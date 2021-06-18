#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    string s, s1;
    cin>>s;
    int in = 0;
    while(s[in] == 'W' && s[in+1] == 'U' && s[in+2] == 'B'){
    	in += 3;
    }
    for(int i = in; s[i]; i++){
    	if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
    		i += 2;
    		s1 += ' ';
    	}
    	else{
    		s1 += s[i];
    	}
    }
    cout<<s1<<"\n";
}	
//for(int i = 0; i < n; i++)
//cout<<"\n";

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    //cin>>t;
    while(t--)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    
}