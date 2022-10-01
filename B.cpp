//Aditya Dube
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll w[n];
        map<ll,ll>mp;
        ll ans =0;
        for(ll i=0; i<n; i++){
            cin>>w[i];
            mp[w[i] - i - 1]++;
            if(mp[w[i]-i-1] ==1){
                ans++;
            }
        }
        if(mp[w[0] - 1] == n){
            cout << n <<endl;
        }
        else{
            cout<< 1 <<endl;
        }
    }

    return 0;
}