#include<bits/stdc++.h>
using namespace std;
int main(){
   #ifndef ONLINE_JUDGE

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    #endif
  
  
   int a;
   cin>>a;
//for finding the length    
   int len1=0;
   
   while((pow(10,len1))<a){
       len1+=1;
      // cout<<len1<<" "<<(10^len1)<<" "<<pow(10,len1)<<endl;
       
   }
  // cout<<len1<<endl;

//the main body   
   
    
   int i=0;

    
    int sum=0;


    while ( i<len1 ){
        //cout<<a<<" ";
        //cout<<a/10<<" ";
        sum += a/pow(10,(len1-i-1));
        int x = pow(10,(len1-i-1));
        a = a % x;
        //cout<<a/pow(10,(len1-i-1))<<" ";
        //cout<<pow(10,(len1-i-1))<<" "<<(a/pow(10,(len1-i-1)));
        //cout<<a/10<<" ";
        //cout<<i<<" ";
        //cout<<a<<" ";
        //cout<<sum<<endl;
        i++;
    }
    cout<<endl<<sum;
    
   /* cout<<a/10<<endl;
    cout<<(a/10)*pow(10,1)<<endl;
    cout<<a-((a/10)*pow(10,1));*/
}
