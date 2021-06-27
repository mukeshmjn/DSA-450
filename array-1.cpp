#include<iostream>
using namespace std;
int main(){
    int n,s,e;
    cin>>n;
    s=0;
    e=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing initial array
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    while(s<e){
        int temp = arr[s];
        arr[s] = arr[e]; 
        arr[e] = temp;
        s++;e--;
    }
    cout<<endl;
//array after reversing
  for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}