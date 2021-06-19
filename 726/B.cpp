#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #726 (1537) Problem B
void solve() {
    int n, m, i, j;
    cin>>n>>m>>i>>j;
    int x1, y1, x2, y2;
    if(i >= n/2 && j >= m/2){
        x1 = 1;
        y1 = m;
        x2 = n; 
        y2 = 1;
    }
    
    else if(i <= n/2 && j <= m/2){
        x1 = 1;
        y1 = m;
        x2 = n;
        y2 = 1;
    }
    else{
        x1 = 1;
        y1 = 1;
        x2 = n;
        y2 = m;
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
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