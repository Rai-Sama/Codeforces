#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

string min_str(string s1,string s2){ //len(s1) <= len(s2)
    string st1, st2;
    if(s1.size() > s2.size()){
    	st1 = s2;
  		st2 = s1;
    }
    else{
    	st1 = s1;
    	st2 = s2;
    }
    for(int i = 0; st1[i]; i++){
        if(st1[i] < st2[i])
            return st1;
        else if(st2[i] < st1[i])
            return st2;
    }
    return st1; // If same strings
}

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans;
    for(int i = 0; i < k; i++)
        ans += s[i%n];
    for(int i = 0; i < n; i++){
    	string temp;
    	for(int j = 0; j < k; j++)
        	temp += s[j % (i+1)];
        ans = min_str(ans, temp);
    }
    cout<<ans<<"\n";
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