/* Move all negative numbers to beginning and positive to end with constant extra space.
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(a[i] < 0){
            if(i != j){
                swap(a[i],a[j]);
                j++;
            }
        }
    }
    for(int i=0 ;i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}