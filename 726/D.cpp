#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #726 (1537) Problem D
void solve() {
	ll n;
    cin>>n;
    if(n & 1){
        cout<<"Bob\n";
        return;
    }
    int turn = 0;
    while(n%2==0){
        n/=2;
        turn++;
    }
    if(n > 1){
        cout<<"Alice\n";
        return;
    }
    if(turn % 2){
    	cout<<"Bob\n";
    	return;
    }
    else{
        	cout<<"Alice\n";
        	return;
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