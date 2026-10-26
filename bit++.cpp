#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[1] == '+'){
            count++;
        } else {
            count--;
        }
    }
    cout << count << endl;
}