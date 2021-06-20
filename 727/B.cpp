#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #727 (1539) Problem B
void solve() {
    ll n,q, res = 0;
    cin>>n>>q;
    string s;
    cin>>s;
    map<int,int> pos[n+1]; // Array of maps
    map<int, int> cnt[n+1];

    // Storing position of each character
    for(int i = n; i > 0; i--){
        for(auto it : pos[i])
            pos[i-1][it.first] = it.second;
        pos[i-1][s[i-1]-'a'] = i;
    }
    // Storing count of each character
    for(int i = 0; i < n; i++){
        for(auto it : cnt[i]){
            cnt[i+1][it.first] = it.second;
        }
        cnt[i+1][s[i]-'a']++;
    }

    while(q--){ // Questions
        ll l, r;
        res = 0;
        cin>>l>>r;
        map<int, int> m;
        for(auto it : cnt[r]){ // Using prefix sum
            m[it.first] = it.second - cnt[l-1][it.first];
        }        
        for(auto it : m){
            res += (it.second)*(it.first + 1); // No. of occurences in new string
        }
        cout<<res<<"\n";
    }
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