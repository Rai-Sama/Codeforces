#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CF Round #721 (1527) ProgA - Practice
void solve() {
	int n;
	cin>>n;
	if(n == 1){
		cout<<0<<"\n";
		return;
	}
	int i = 1;
	int curr = 1 << i;
	int res = curr;
	while(curr <= n){
		res = curr;
		curr = 1 << i;
		i++;
	}
	cout<<res - 1<<"\n";
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