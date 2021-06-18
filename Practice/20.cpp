#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int count;
    string s;
    cin>>s;
    map<char, int> m;
    for(int i = 0; s[i]; i++){
    	m[s[i]]++;
    	if(m[s[i]] == 1){
    		count++;
    	}
    }
    if(count & 1){
    	cout<<"IGNORE HIM!\n";
    }
    else{
    	cout<<"CHAT WITH HER!\n";
    }
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