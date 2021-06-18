#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    string s;
    cin>>s;
    multiset<int> ms;
    for(int i = 0; s[i]; i++){
    	if(s[i] == '1'){
    		ms.insert(1);
    	}
    	if(s[i] == '2'){
    		ms.insert(2);
    	}
    	if(s[i] == '3'){
    		ms.insert(3);
    	}
    }
    auto it = ms.begin();
    while(it != ms.end()){
    	cout<<*it;
    	it++;
    	if(it != ms.end()){
    		cout<<"+";
    	}
    }
    cout<<"\n";
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