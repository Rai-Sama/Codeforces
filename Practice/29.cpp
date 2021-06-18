#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll n, temp, prev, max = 1, cnt = 1;
    cin>>n;
    for(int i = 0; i < n; i ++){
    	cin>>temp;
    	if(i != 0){
    		if(temp >= prev){
    			cnt++;
    		}
    		if(cnt > max){
    			max = cnt;
    		}
    		if(temp < prev){
    			cnt = 1;
    		}
    	}
    	prev = temp;
    }
    cout<<max<<"\n";
}	
//for(int i = 0; i < n; i++)
//cout<<"\n";

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