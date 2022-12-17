#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, S;
    cin >> n >> S;
    // int a[n+1];
    vector<int>a(n+1);
    for( int i=1;i<=n; i++){
        cin >> a[i];
    }
    vector<bool>dp(n+1,false);
    dp[0] = true;
    for( int i=1;i<=n; i++){
        for( int j=S;j>=a[i];j--){
            if(dp[j-a[i]]==true){
                dp[j]=true;
            }
        }
    }
    cout << dp[S] << endl;
}