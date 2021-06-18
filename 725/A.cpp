#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #725 (1538) Problem A
void solve() {
	int n;
	cin>>n;
	int a[n];
	cin>>a[0];
	int max1 = a[0], indm = 0, min1 = a[0], indm1 = 0;
	for(int i = 1; i < n; i++){
		cin>>a[i];
		if(a[i] > max1){
			max1 = a[i];
			indm = i;
		}
		if(a[i] < min1){
			min1 = a[i];
			indm1 = i;
		}
	}
	int p1 = max(indm, indm1) + 1;
	int p2 = n - min(indm, indm1);
	int p3 = min(indm, indm1) + 1 + n - max(indm, indm1);
	int res = min(p1, p2);
	cout<<min(res, p3)<<"\n";
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