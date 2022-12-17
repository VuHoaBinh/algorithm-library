#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,S;
    cin >> n >> S;
    //int a[n+1], b[n+1];
    vector<int>a(n+1);
    vector<int>b(n+1);
    for( int i=1; i<=n; i++ ) cin >> a[i];
    for( int i=1; i<=n; i++ ) cin >> b[i];
    int dp[n+1][S+1];
    memset(dp,0,sizeof(dp));
    for( int i=1;i<=n;i++ ){
        for( int j=1;j<=S;j++ ){
            dp[i][j] = dp[i-1][j];
            if(j>=a[i]){
                dp[i][j] = max(dp[i][j] , dp[i-1][j-a[i]] + b[i]);
            }
        }
    }
    cout << dp[n][S] << endl;
}