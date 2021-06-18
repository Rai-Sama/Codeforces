#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CF round #725 (1538) Problem C
ll findPairs(ll ar[], ll n, ll l, ll r)
{
    ll high = n - 1;
    ll low = n - 1;
    ll res = 0, k = 0;
    while (k < high)
    {
        low = max(k, low);
        while (low > k && ar[k] + ar[low] >= l)
            low--;
        while (high > low && ar[k] + ar[high] > r)
            high--;
        res += (high - low);
        k++;
    }
    return res;
}

void solve() {
    ll n, l, r;
        cin>>n>>l>>r;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a, a + n);
        ll res = findPairs(a, n, l, r);
        cout<<res<<"\n";
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