#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int vis[MAX_N];

// CF Contest Round #728 (1541) Problem B
void solve() {
    int n, cnt = 0;
    cin>>n;
    int a[n+1], pos[2*n+1] = {0};

    for(int i = 0; i < n; i++){
        cin>>a[i];
        pos[a[i]] = i+1;
    }

    for(int i = 0; i <= 2*n; i++){
        if(pos[i] == 0)
        	pos[i] = INF;

    }

    for(int i = 3; i < 2*n; i++){
        for(int j = 1; j <= sqrt(i); j++){
            if(i % j == 0){
            	if(i != j*j){
                	if(pos[j] + pos[i/j] == i){
                    	cnt++;
                	}
                }
            }
        }
    }
    cout<<cnt;
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