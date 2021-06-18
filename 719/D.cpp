#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF Round #719 (1520) ProgD - TLE
void solve() {
	int n, count = 0;
	cin>>n;
	int a[n+1];
	for(int i = 1; i <= n; i++){
		cin>>a[i];
		for(int j = 1; j < i; j++){
			if(i - j == a[i] - a[j])
				count++;
		}	
	}

	cout<<count;
	cout<<"\n";
}
//for(int i = 0; i < n; i++)
//cin>>


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