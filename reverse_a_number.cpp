#include<iostream>
#include<cmath>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);

    #endif

    int a;
    cin>>a;

    int i=1;
    for(; pow(10,i)<a; i++){

    }
   // cout<<i;
   //the main body of the code
    int final=0;
    int temp=0;
   for(int k=1; k<=i; k++){
       temp= (a%10)*pow(10,i-k);
       final= final + temp;
       a=a/10;

   }
        cout<<final;




}