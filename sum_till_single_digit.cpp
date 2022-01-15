#include<iostream>
using namespace std;
 int sumofdig(int n){
    int sum=0;
    do{
        sum=sum+(n%10);
        n=n/10;
    }
    while(n>0);
    return sum;
    }
int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int a;
    cin>>a;

    //the main body of the code
    int x=a;
    while(x>10){
        x= sumofdig(x);
        cout<<x<<endl;
    }
    
   



}