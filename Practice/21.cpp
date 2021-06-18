#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, m, x;
    for(int i = 0; i < 5; i++){
    	for(int j = 0; j < 5; j++){
    		cin>>x;
    		if(x == 1){
    			n = i;
    			m = j;
    		}
    	}
    }
    cout<<abs(2-n) + abs(2-m);
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