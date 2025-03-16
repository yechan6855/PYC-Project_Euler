#include <bits/stdc++.h>
using namespace std;

long long dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    dp[0]=1;
    dp[1]=2;

    long long ans=2;

    for(int i=2; i<1000001; i++) {
        dp[i]=dp[i-1]+dp[i-2];
        if(dp[i]<=4000000) {
            if(dp[i]%2==0) {
                ans+=dp[i];
            }
        }else {
            break;
        }
    }
    cout<<ans;
}