#include <bits/stdc++.h>
using namespace std;


void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    (x*10<=y)?cout<<x*10*z<<endl:cout<<y*z<<endl;
}

int main() {
	int t;
    cin>>t;
    while(t--){
        solve();
    }
    }