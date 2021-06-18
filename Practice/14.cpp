#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int n, max, min, amazing = 0;
	cin>>n;
	int a[n];
	cin>>a[0];
	max = min = a[0];
	for(int i = 1; i < n; i++){
		cin>>a[i];
		if(a[i] > max){
			amazing++;
			max = a[i];
		}
		if(a[i] < min){
			amazing++;
			min = a[i];
		}
	}
	cout<<amazing<<"\n";
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