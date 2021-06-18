#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

unsigned mod_pow(unsigned a, unsigned b, unsigned mod){
	unsigned result = 1;

	while (b > 0){
		if (b & 1)
			result = unsigned(uint64_t(result) * a % mod);
		a = unsigned(uint64_t(a) * a % mod);
		b >>= 1;
	}
	return result;
}


bool miller_rabin(unsigned n){
	if (n < 2)
		return false;
	for (unsigned p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29})
		if (n % p == 0)
			return n == p;
	int r = __builtin_ctz(n - 1);
	unsigned d = (n - 1) >> r;

	for (unsigned a : {2, 7, 61}){
		unsigned x = mod_pow(a % n, d, n);

		if (x <= 1 || x == n - 1)
			continue;
		for (int i = 0; i < r - 1 && x != n - 1; i++)
			x = unsigned(uint64_t(x) * x % n);

		if (x != n - 1)
			return false;	
	}
	return true;
}


void solve() {
    int n;
    cin>>n;
    if(n & 1){
    	cout<<"-1\n";
    	return;
    }
    for(int i = 1; i <= n; i++){
    	if(i & 1){
    		cout<<i+1<<" ";
    	}
    	else{
    		cout<<i - 1<<" ";
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