#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int k, l, m, n, d, cnt = 0;
	cin>>k>>l>>m>>n>>d;
	for(int i = 1; i <= d; i++){
		if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
			cnt++;
		}
	}
	cout<<cnt<<"\n";

}
//for(int i = 0; i < n; i++)

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