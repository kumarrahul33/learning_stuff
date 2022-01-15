#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    #endif
    
    int a,b;
    cin>>a>>b;

    for(int i=1; i<=a; i++){
        if (i==1 || i==a){
            for(int k=1; k<=b; k++){
                cout<<'*';
            }
        }
        else{
            for(int j=1; j<=b; j++){
                if (j==1 || j==b){
                    cout<<'*';
                }
                else{
                    cout<<" ";
                    
                }

                }
        }
        cout<<endl;
    }
}