// name= GURSIMAR SINGH
// rollno= 2010990251


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;   //taking input
    int arr[n];    //initilise
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);    // sorting an array
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){    //conditions
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
