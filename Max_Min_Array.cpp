/* Print Minimum and Maximum element in an array 
Input: [1,3,2,5,9]
Minimum : 1; Maximum: 9
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,min=0,max=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        if(n==1){
            min=arr[0];
            max=arr[0];
        }
        if(arr[0] > arr[1]){
            max = arr[0];
            min = arr[1]; 
        }
        else{
            max = arr[1];
            min = arr[0]; 
        }
        for(int i=2; i<n; i++) {
            if(arr[i] > max){
                max = arr[i];  
            } else if(arr[i] < min){
                min = arr[i];
            }
        }
        cout<<"Minimum Element: "<<min<<endl;
        cout<<"Maximum Element: "<<max<<endl;

    }
    return 0;
}