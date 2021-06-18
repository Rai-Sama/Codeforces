#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF Educational round #110 (1535) Problem A
void solve() {
	int a[4];
	int max = -1, max2 = -1, ind, ind2;
	for(int i = 0; i < 4; i++){
		cin>>a[i];
		if(a[i] > max){
			max = a[i];
			ind = i;
		}
	}
	for(int i = 0; i < 4; i++){
		if(i != ind){
			if(a[i] > max2){
				max2 = a[i];
				ind2 = i;
			}
		}
	}
	if((ind == 0 && ind2 == 1) || (ind == 1 && ind2 == 0) || (ind == 2 && ind2 == 3) || (ind == 3 && ind2 == 2)){
		cout<<"NO\n";
	}
	else{	
		cout<<"YES\n";
	}
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