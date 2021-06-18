#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF Round #719 (1520) ProgB - WA
void solve() {
	int n, count = 8, m = 0;
	cin>>n;
	int j = 1;
	if(n <= 10){
		if(n == 10){
			cout<<9<<"\n";
			return;
		}
		cout<<n<<"\n";
		return;
	}
	while(m <= n){
		for(int i = 1; i <= 9; i++){
			m  = i*(pow(10, j)) + i;
			if(m > n)
			{
				cout<<count<<"\n";
				return;
			}
			count += 1;
		}
		j += 1;
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