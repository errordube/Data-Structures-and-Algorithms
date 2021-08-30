/* Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in the union.
Input : arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6} 
Output : Union : {1, 2, 3, 4, 5, 6, 7} 
         Intersection : {3, 5}
*/
#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i] > arr2[j]){
            cout<<arr2[j++]<<" ";
        }
        else {
            cout<< arr2[j++]<<" ";
            i++;
        }
    }
    while(i<m)
        cout<<arr1[i++]<<" ";
    while(j<m)
        cout<<arr2[j++]<<" ";
}
void printIntersection(int arr1[], int arr2[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else{
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}



int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    printUnion(arr1, arr2, m, n);
    printIntersection(arr1, arr2, m, n);

    return 0;
}