#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7; 
const ll INF = 1e9;

// CF Round #720 (1521) ProgA
void solve() {
   	ll n, temp, sum = 0;
    cin>>n;
    temp = n/2050;
    if(n % 2050 == 0){

      while(temp != 0){
        sum = sum + temp % 10;
        temp = temp/ 10;
      }
    }
    else{
      cout<<"-1\n";
      return;
    }
    cout<<sum<<"\n";
}	

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