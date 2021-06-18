#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CF Contest Round #715 (1509) ProgA
void solve() {
	int n, temp,k = 0, j = 0;
	cin>>n;
	int odd[n], even[n];
	for(int i = 0; i < n; i++){
		cin>>temp;
		if(temp&1){
			odd[k] = temp;
			k++;
		}
		else{
			even[j] = temp;
			j++;
		}
	}
	for(int i = 0; i < k; i++){
		cout<<odd[i]<<" ";
	}
	for(int i = 0; i < j; i++){
		cout<<even[i]<<" ";
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