#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #727 (1539) Problem A
void solve() {
	ll n, x, t, sum;
	cin>>n>>x>>t;
	if(x > t || n == 1){
		cout<<"0\n";
		return;
	}
	ll temp = min(t/x, n-1);
	sum = max(0ll,temp*(temp-1)/2)+temp*(n-temp);
    cout<<sum;
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