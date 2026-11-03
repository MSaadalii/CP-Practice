#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    if(a==b){
        cout<<1;
        return 0;
    }
    while(1){
        a = a*3; 
        b = b*2; 
        count++;
        if (a>b){
            cout<<count;
            return 0;
        }
    }
    return 0;
}