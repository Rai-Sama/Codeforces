#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF Round #719 (1520) ProgA - WA
void solve() {
	int n;
	vector<char> f;
	char c, prev;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>c;
		if(i == 0){
			prev = c;
		}
		else{
			if(c != prev){
				if(find(f.begin(), f.end(), c) != f.end()){
					cout<<"NO\n";
					return;
				}
				else{
					f.push_back(prev);
					prev = c;
				}
			}
		}
	}
	cout<<"YES";
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