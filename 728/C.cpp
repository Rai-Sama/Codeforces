#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CF Contest Round #728 (1541) Problem C
void solve() {
	ll n;
    cin>>n;
    ll a[n], cost = 0;
    for(ll i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a + n);
 	ll temp = 0;
    for(ll i = 0; i < n-2; i++){
        temp += a[i];
        cost = cost - (a[i+2]*(i + 1)) + temp;
    }
    cout<<cost;
	cout<<"\n";
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