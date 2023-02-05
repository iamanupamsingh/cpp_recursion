                            // linear and binary search in rec. 

#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[],int size){
    cout<<endl<<"size of arr is "<<size<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

bool Linearsearch (int arr[], int size, int key){
    printarr(arr,size);
    //base case 
    if (size==0)
    return false;
    
    if (arr[0]==key){
        return true;
    }
    else{
        bool remaining_part=Linearsearch(arr+1,size-1,key);
        return remaining_part;
    }
}


bool BinarySearch(int arr[],int s,int e, int key){
    //base case 
    if(s>e)
        return false;
    int m=s+(e-s)/2;
    
    if(arr[m]==key)
        return true;
    if(key>arr[m])
        return BinarySearch(arr,m+1,e,key);
    else
        return BinarySearch(arr,s,m-1,key);
    
}

int main()
{
    // LINEAR SEARCH 
    
    /*int arr[5]={3,5,1,2,6};
    int size=5;
    int key=6;
    bool ans=Linearsearch(arr,size,key);
    
    if(ans){
        cout<<endl<<"element present";
    }
    else{
        cout<<endl<<"element absent";
    }
    return 0;*/
    
    // BINARY SEARCH 
    
    /*
    int arr[]={2,4,6,10,14,16};
    int size=sizeof(arr)/sizeof(int);
    
    int key=0;
    
    int ans=BinarySearch(arr,0,size-1,key);
    if(ans)
        cout<<endl<<"element present"<<endl;
    else
        cout<<endl<<"element absent"<<endl;*/
        
    
    return 0; 
}
