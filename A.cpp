//Aditya Dube
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
    	ll n,k,c=0;
        cin>> n>>k;
        ll arr[n];
        ll m = INT_MIN ;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
            m = max(m,arr[i]); 
        }
        ll j = k-1;
        for(ll i=j; i<n; i++){
            if(arr[i] == m )
            c += (n-i);
        }
        cout<<c<<endl;
    }

    return 0;
        

}
