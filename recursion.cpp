#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int fact(int n){
    // base case
    if (n==0)
        return 1;
    /*int prod=n*fact(n-1);
    return prod;*/                
    return n*fact(n-1);               
}

int pow2(int n){
    // base case 
    if(n==0)
     return 1;
    // recursive relation 
    int res=2;
    res=res*pow2(n-1);
    return res;
    
    // or
    // return 2*pow2(n-1);

}

void countn(int n){
    //base case
    if(n==0){
     return ;
    }
    //proc
    cout<<n<<endl;
    // rec relation
    countn(n-1);
    
}

int main()
{
    int n;
    cin>>n;
    // factorial 
    //cout<<fact(n)<<endl;
    
    // power of 2
    //cout<<pow2(n)<<endl;
    
    //countn
    //countn(n);
    
    return 0;
}
