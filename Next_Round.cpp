#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin >> n >> k;
    vector<int> score(n);
    for(int i=0;i<n;i++){
        cin>> score[i];
    }
    int k_score = score[k-1];
    for(int i=0; i<n ;i++){
        if(score[i]>0 && score[i]>=k_score)
        count++;
        else
        break;
    }
    cout << count<< endl;
}