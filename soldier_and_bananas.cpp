#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,h,w,ans=0;
    cin>>c>>h>>w;
    int i=1;
    while(w--){
        ans += c * i;
        i++;
    }
    if(ans>h)
        cout<<ans-h;
    else
        cout<<0;
    return 0;
}