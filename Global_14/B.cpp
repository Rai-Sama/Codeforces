#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF Contest Global Round # 14 (1515) ProgB
void solve() {
    ll n;
    cin>>n;
    if(n == 0 || (n & 1)){
    	cout<<"NO\n";
    	return;
    }
    if((!(n%2) && ((ll)(sqrt((ll)(n/2))) * (ll)(sqrt( (ll)(n/2))) == (ll)(n/2))) || (!(n%4) && ((ll)(sqrt((ll)(n/4)))) * (ll)(sqrt((ll)(n/4))) == (ll)(n/4)))	
    	cout<<"YES";
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
    cin>>t;
    while(t--)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    
}