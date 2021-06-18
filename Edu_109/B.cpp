#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF Edu Round #109 (1525) ProgB
void solve() {
	int n, flag = 0;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(a[i] != i + 1){
			flag = 1;
		}
	}
	if(flag == 0){
		cout<<"0\n";
		return;
	}
	if(a[n-1] == 1 && a[0] == n){
		cout<<"3\n";
		return;
	}
	if(a[n-1] == n && a[0] == 1){
		cout<<"1\n";
		return;
	}
	if(a[0] == 1){
		cout<<"1\n";
		return;
	}
	if(a[n - 1] == n){
		cout<<"1\n";
		return;
	}
	cout<<"2\n";
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