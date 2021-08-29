/* Given an array arr[] and an integer K where K is smaller than size of array, 
the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[k-1]<<endl;

    }
    return 0;
}