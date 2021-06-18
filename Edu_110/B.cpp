#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

// CF Educational round #110 (1535) Problem B
void solve() {
    int n, cnt = 0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int b[n];
    int k = 0;
    for(int i = 0; i < n; i++){
        if(!(a[i]&1)){
            b[k] = a[i];
            k++;
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i]&1){
            b[k] = a[i];
            k++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(gcd(b[i], 2*b[j]) > 1){
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
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