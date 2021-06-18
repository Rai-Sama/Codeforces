#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round 724 (1536) Problem A
void solve() {
	ll n;
    cin>>n;
    vector<ll> a;
    set<ll> b;
    queue<ll> dp;
    for(ll i=0; i < n; i++){
    	ll temp;
    	cin>>temp;
    	a.push_back(temp);
        b.insert(a[i]);
    }
    ll al = a.size();
    for(ll i = 1;i < n; i++){
        for(ll j = 0; j < i; j++){
            dp.push(abs(a[i] - a[j]));
        }
    }
    while(!dp.empty()){
        ll temp=dp.front();
        if(b.size() > 300){
    		break;
    	}
        dp.pop();
        if(b.count(temp) == 0){
	        for(ll i = 0; i < al; i++){
	            dp.push(abs(temp-a[i]));
	        }
	        a.push_back(temp);
	        b.insert(temp);
	    }
	}
    if(b.size() <= 300){
        cout<<"YES\n"<<b.size()<<"\n";
        for(auto it:b){
            cout<<it<<" ";
        }
    }
    else{
        cout<<"NO\n";
        return;
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