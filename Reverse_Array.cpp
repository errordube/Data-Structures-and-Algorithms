/*Reverse The Array
Input: [1,2,3,4,5]
Output: [5,4,3,2,1]
*/ 
/*
Approach: Traversing the array from the last  
*/
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=n-1; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';

    }
    return 0;

}