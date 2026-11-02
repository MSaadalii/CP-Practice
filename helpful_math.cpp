#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.size()==1){
        cout<<s[0];
        return 0;
    }
    map <int,int> arr;
    for(int i=0;i<s.size();i++){
        if(s[i] != '+') arr[s[i] - '0']++;
    }
    bool first = true;
    for(int i= 1;i<=3;i++){
        while((arr[i]--)>0){
            if(!first) cout << "+";
            cout<<i;
            first = false;
            }
    }
    return 0;
}