#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr(5, vector<int>(5));
    int a,b,i,j;
    for (a=0;a<5;a++){
        for (b=0;b<5;b++){
            cin>>arr[a][b];
            if(arr[a][b] == 1){
                i = a;
                j = b;
                break;
            }
        }
    }

    cout<< abs(2-i) + abs(2-j)<<endl;

    return 0;
}
    