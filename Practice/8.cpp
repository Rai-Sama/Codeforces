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
    
    if(n < 4){
    	cout<<"NO\n";
    	return;
    }
    while(n){
    	if(n%10 == 4 || n%10 == 7){
    		cnt++;
    	}
    	n /= 10;
    	if(cnt > 7)
    		break;
    }
    if(cnt == 4 || cnt == 7){
    	cout<<"YES";
    }
    else
    	cout<<"NO";

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