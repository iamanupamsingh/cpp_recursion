#include<bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n){
    //base case 
    if(n==0 || n== 1)
        return ;
    
    // solving 1 case.. 1st largest number at last  
    for(int i=0; i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1 );
}

int main(){
    
    int arr[5]={2,5,1,6,9};
    sortArray(arr,5);
    int n=5;  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
