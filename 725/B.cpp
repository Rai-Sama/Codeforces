#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CF round #725 (1538) Problem B
void solve() {
    int n;
    cin>>n;
    int a[n], sum = 0, max = -1, flag = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
        if(max < a[i]){
            max = a[i];
        }
        if(i > 0){
            if(a[i] != a[i-1]){
                flag = 1;
            }
        }
    }
    if(n == 1 || flag == 0){
        cout<<"0\n";
        return;
    }
    int k = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > sum/n){
            k++;
        }
    }
    if(sum % n == 0){
        cout<<k;
    }
    else{
        cout<<-1;
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