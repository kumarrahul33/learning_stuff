#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    #endif
  
    int a;
    cin>>a;
    
    int sum=0;

    do {
        sum = sum + a%10;
        a=a/10;

    }
    while(a!=0);
    cout<<sum;

    

}