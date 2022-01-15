#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    #endif
    
    
    int a;
    cin>>a;
    for(int i=0; i<a; i++){
      //  for(int j=0; j<=i; j++){
            for(int k=0; k<=(a-1-i); k++){
                cout<<" ";
            }
            for(int l=0; l<=i; l++){
                cout<<(l+1)<<" ";

            } 

            cout<<endl; 
        
    }

    for(int i1=a-1; i1>=0; i1--){
      //  for(int j=0; j<=i; j++){
            for(int k1=(a-1-i1); k1>=0; k1--){
                cout<<" ";
            }
            for(int l=1; l<=i1+1; l++){
                cout<<(l)<<" ";

            } 

            cout<<endl; 
        
    }
}