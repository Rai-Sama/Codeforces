#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, x = 0;
    cin>>n;
    string s;
    for(int i = 0; i < n; i++){
    	cin>>s;
    	for(int j = 0; s[j]; j++){
    		if(s[j] == '+'){
    			j++;
    			x++;
    		}
    		if(s[j] == '-'){
    			j++;
    			x--;
    		}
    	}
    }
    cout<<x;
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