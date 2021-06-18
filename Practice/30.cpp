#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int a[10];

// CF Practice
void solve() {
	int n;
	cin>>n;
	int dp = 0;
	int bills[5] = {1, 5, 10, 20, 100};
	int k = 4, cnt = 0;
	while(true){
		int temp = dp + bills[k];
		if(temp <= n){
			dp = temp;
			cnt++;
		}
		else{
			k--;
		}
		if(dp == n){
			cout<<cnt<<"\n";
			return;
		}
	}
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