#include<iostream>
using namespace std;

void reverse(string& str, int i, int j ) {

    cout << "call recieved for " << str << endl;

    //base case
    if(i>j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);

}

bool checkPalin(string str, int i, int j){
    //base case
    if(i>j){
        return true;
    }
    
    if(str[i]!=str[j]){
        return false;
    }
    else
        return true;
    checkPalin(str,i+1,j-1);
}

int power (int a, int b){
    //base case
    if(b==0)
        return 1;
    if(b==1)
        return a;
    // revursive call 
    int ans=power(a,b/2);
    if(b%2==0){
        ans=ans*ans;
    }
    else
        ans=a*ans*ans;
    return ans;    
}


int main() {

    /*string name = "abcde";
    cout << endl;
    reverse(name, 0 , name.length()-1 );
    cout << endl;
    cout << name << endl;*/

    /*string str;
    cout<<"enter the string; "<<endl;
    cin>>str;
    
    bool isPalindrome=checkPalin(str,0,str.length()-1); 
    if(isPalindrome)
        cout<<"string is palindrome."<<endl;
    else
        cout<<"string is not palindrom."<<endl;
    
    return 0;*/
    
    
    
    int a,b;
    cin>>a;
    cin>>b;
    int ans=power(a,b);
    
    cout<<a<<" to the power of "<<b<<" is "<<ans;
    
}
