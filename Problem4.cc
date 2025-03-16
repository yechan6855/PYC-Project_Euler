#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int n) {
    string ans=to_string(n);
    string a1=ans.substr(0,ans.size()/2);
    string a2=ans.substr(ans.size()/2,ans.size());
    reverse(a2.begin(),a2.end());

    if(a1==a2) {
        return true;
    }else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=900; i<1000; i++) {
        for(int j=900; j<1000; j++) {
            if(is_palindrome(i*j)) {
                cout<<i<<" "<<j<<"\n";
                break;
            }
        }
    }
}