#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CF round #727 (1539) Problem C
void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    ll arr[n];
    vector<ll> v;

    for(ll i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr, arr + n);
    
    for(ll i = 1; i < n; i++){
        ll temp = arr[i] - (arr[i-1] + 1);
        if(arr[i] - arr[i-1] > x){
            v.push_back(temp/x);
        }
    }
    sort(v.rbegin(), v.rend());
    
    ll temp = v.size();
    while(temp){
        if(v[temp - 1] > k){
            break;
        }
        k -= v[temp - 1];
        v.pop_back();
        temp--;
    }
    cout<<temp + 1;
    cout<<"\n";
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