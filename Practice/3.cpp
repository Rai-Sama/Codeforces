#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, m;
    cin>>n>>m;
    if(n == 1 && m == 1){
    	cout<<"0\n";
    	return;
    }
    if(n%2 == 0){
    	cout<<(n/2) * m;
    }
    else{
    	if(m % 2 == 0){
    		cout<<(m/2) * n;
    	}
    	else{
    		if(n >= m){
    			cout<<((n-1)/2) * m + (m-1)/2;
    		}
    		else{
    			cout<<((m-1)/2) * n + (n-1)/2;
    		}
    	}
    }
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