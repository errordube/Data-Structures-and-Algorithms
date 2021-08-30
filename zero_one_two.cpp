/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
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
    int low = 0;
    int high =  n-1;
    int mid = 0;
    while(mid<=high){
        switch(a[mid]){
            case 0:
            swap(a[low++],a[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(a[mid],a[high--]);
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;

}