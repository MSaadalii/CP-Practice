#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count=0;
    cin>>s;
    map <char,int> unique;
    for(char &c:s){
        unique[c]++;
}
    for(auto it:unique)
        count++;

    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}