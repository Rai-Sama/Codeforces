#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CF Contest Round #728 (1541) Problem A
void solve() {
	int n;
	cin>>n;
	if(n&1){
		cout<<2<<" "<<3<<" "<<1<<" ";
		for(int i = 4; i <= n; i++){
			if(i&1){
				cout<<i-1<<" ";
			}
			else{
				cout<<i+1<<" ";
			}
		}

		//cout<<"\n"<<2*n - 2;
	}
	else{
		for(int i = 1; i <= n; i++){
			if(i&1){
				cout<<i+1<<" ";
			}
			else{
				cout<<i-1<<" ";
			}
		}
		//cout<<"\n"<<n;
	}
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