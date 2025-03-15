#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans=0;

    for(int i=1; i<1000; i++) {
        if(i%3==0 || i%5==0) {
            ans+=i;
        }
    }
    cout<<ans;
}

// ans = 233168