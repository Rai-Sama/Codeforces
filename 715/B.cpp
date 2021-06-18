#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CF Contest Round #715 (1509) ProgB
void solve() {
	int n, t_c = 0, m_c = 0;
		cin>>n;
		string s;
		cin>>s;
		int t = 2 * n/3, m = n/3; // total no. of T's and M's reqd
		for(int i = 0; i < n; i++){
			if(s[i] == 'T') 
				t_c++;
			else{
				m_c++;
				if(t_c < m_c || t - t_c < (m - m_c + 1)){ 
				// No. of T's should be > No. of M's for every subseq
					cout<<"NO\n";	
					return;
				}
			}	
		}
		if(t_c != t) 
			cout<<"NO\n";
		else 
			cout<<"YES\n";
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