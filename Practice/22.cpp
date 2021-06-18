#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
    ll n, cnt = 0;
    cin>>n;
    string s, s1;
    cin>>s;
        for(int i = 0; i < n-1; i++){
    	if(s[i] == s[i+1]){
    		continue;
    	}
    	else{
    		s1 += s[i];
    	}
    }
    s1 += s[n-1];
    cout<<(n - s1.length());
    cout<<"\n";
}
//for(int i = 0; i < n; i++)
//cout<<"\n";

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    
}