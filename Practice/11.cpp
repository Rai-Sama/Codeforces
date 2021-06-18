#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	string s, s1, s2, s3;
	cin>>s1>>s2>>s3;
	s = s1 + s2;
	if(s.length() != s3.length()){
		cout<<"NO\n";
		return;
	}

	sort(s.begin(), s.end());
	sort(s3.begin(), s3.end());
	if(s == s3){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
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