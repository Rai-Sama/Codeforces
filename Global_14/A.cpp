#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF Contest Global Round # 14 (1515) ProgA
void solve() {
	int n, x, c = -1, sum = 0;
	bool flag = false;
	cin>>n>>x;
	int a[n], dp[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		sum += a[i];
		if(sum == x)
			c = i;
	}
		if(c == n-1){
		cout<<"NO\n";
	}
	else{
		
		cout<<"YES\n";
		for(int i = 0; i < n; i++){
			 if(i == c){
				cout<<a[i+1]<<" ";
				cout<<a[i]<<" ";
				i++;
			 }
			 else
			 	cout<<a[i]<<" ";
		}
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