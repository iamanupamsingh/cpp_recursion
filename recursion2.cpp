#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    //base case
    if (n==0)
     return 0; 
    if (n==1)
     return 1;
    // rec rel 
    int ans=fib(n-1)+fib(n-2);
    return ans;    
}

int main()
{
    int n;
    cin>>n;
    
    //nth fibonacci no. 
    cout<<fib(n);
    
}