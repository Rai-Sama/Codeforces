#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #725 (1538) Problem F
void solve() {
	ll l,r;
    cin>>l>>r;
    ll cnt1=0, cnt2 = 0;
    int temp = l;
    while(temp){
   		cnt1 += temp;
   		temp/=10;
    }
    temp = r;
    while(temp){
   		cnt2 += temp;
   		temp/=10;
    }
    cout<<cnt2 - cnt1;
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