#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, temp;
    cin>>n;
    multiset<int> a;
    for(int i = 0 ; i < n; i++){
    	cin>>temp;
    	a.insert(temp);
    }
    int tot = accumulate(a.begin(), a.end(), 0);
    int my = 0, cnt = 0;
    auto it = a.rbegin();
    auto it2 = a.rbegin();
    
    while(it != a.rend()){
    	my += *it;
    	cnt++;
    	tot -= *it;
    	it++;
    	if(my > tot){
    		cout<<cnt<<"\n";
    		return;
    	}
    }

}	
//for(int i = 0; i < n; i++)
//cout<<"\n";

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    
}