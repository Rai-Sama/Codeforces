#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


void solve() {
    int n, k, temp, cnt = 0;
    cin>>n>>k;
    int a[n];
    for(int i  = 0; i < n; i++)
    	cin>>a[i];
    temp = a[k-1];
    int i = 0;
   	while(a[i] >= temp && a[i] > 0 && i < n){
    		cnt++;
    		i++;
    }
    cout<<cnt;;
    cout<<"\n";
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