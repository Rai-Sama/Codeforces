#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll n, k, mid;
    cin>>n>>k;
    if(n&1){
    	if(k <= n/2 + 1){
    		cout<<1 + (k - 1) * 2<<"\n";
    		return;
    	}
    	cout<<2 + ((k - (n/2 + 1)) - 1) * 2<<"\n";
    }
    else{
    	if(k <= n/2){
    		cout<<1 + (k - 1) * 2<<"\n";
    		return;
    	}
    	cout<<2 + ((k - n/2) - 1) * 2<<"\n";
    }
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