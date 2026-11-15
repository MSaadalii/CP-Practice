#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int big=0,small=0;
    for (char a:s){
        if( (int) a >= 97 )
            small++;
        else
            big++;
    }

    if (big>small){
        for (int i=0;i<s.size();i++){
            if (s[i]>=97)
                s[i] = toupper(s[i]);
        }
    }
    else{
        for (int i=0;i<s.size();i++){
            if (s[i]<97)
                s[i] = tolower(s[i]);
        }
    }

    cout<<s;

}