#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CF Round #721 (1527) ProgB1 - Practice
void solve() {
	int n, c1 = 0, c0 = 0;
	cin>>n;
	char temp;
	for(int i = 0; i < n; i++){
		cin>>temp;
		if(temp == '1')
			c1++;
		else{
			c0++;
		}
	}
	if(c0 == 0){
		cout<<"Draw\n";
		return;
	}
	if(c0 == 1){
		cout<<"BOB\n";
		return;
	}
	if(c0 & 1){
		cout<<"ALICE\n"; //  1 can be added to the middle to force Bob to pay
	}
	else{
		cout<<"BOB\n";
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