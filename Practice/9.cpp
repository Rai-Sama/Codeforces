#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    string s1, s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(),s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(),s2.begin(), ::toupper);
    if(s1 > s2){
    	cout<<1;
    }
    else{
    	if(s2 > s1){
    		cout<<-1;
    	}
    	else{
    		cout<<0;
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