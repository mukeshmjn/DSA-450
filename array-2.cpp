#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minEl = INT_MAX;
    int maxEl = INT_MIN;
    //logic
    for(int i=0;i<n;i++){
        maxEl = max(maxEl,arr[i]);
        minEl = min(minEl,arr[i]);
    }
    cout<<"Max element = "<<maxEl<<endl;
    cout<<"Min element = "<<minEl;
    return 0;
}