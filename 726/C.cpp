#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CF round #726 (1537) Problem C
void solve() {
    int n;
    cin>>n;
    vector<ll> h(n);
    vector<ll> dp;
    for(int i = 0; i < n; i++){
        cin>>h[i];
    }
    sort(h.begin(), h.end());
    
    ll min1 = h[1]-h[0];
    int ind = -1;
    //Index of minimum pair
    for(int i = 1; i <= n-2; i++){
        if(h[i+1] - h[i] < min1){
            min1 = h[i+1] - h[i];
            ind = i;
        }
    }
    if(ind < 0){ //First two elements or last two elements = min. pair
        min1 = min(h[1] - h[0], h[n-1] - h[n-2]);
        if(min1 == h[1] - h[0]){
            for(int i = 0; i < n; i++){
                if(i == 1)
                    continue;
                dp.push_back(h[i]);
            }
            dp.push_back(h[1]);
        }
        else{ // last two elements = min. pair
            dp.push_back(h[n-2]);
            for(int i = 0; i < n-2; i++){
                    dp.push_back(h[i]);
            }
            dp.push_back(h[n-1]);
        }
    }
    else{
        for(int i = ind; i < n; i++){
            if(i == ind + 1)
                continue;
            dp.push_back(h[i]);
        }
        // Elements before min. pair in order
        for(int i = 0; i < ind; i++){
            dp.push_back(h[i]);
        }
        //Second element of the pair
        dp.push_back(h[ind+1]);
    }

    for(int i = 0;i < n; i++){
        cout<<dp[i]<<" ";
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