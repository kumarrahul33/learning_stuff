#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //input
    int n;
    cin>>n;

    int l[n];

    for(int i=0; i<n; i++){
        cin>>l[i];
    }

    //main body of the insertion sort

    for(int j=1; j<n; j++){
        /*for(int k=0; k<j; k++ ){
            int key=l[j];
            if (l[k]>=key){
                int temp=key;
                for(int m=j; m>k; m--){
                    l[m]=l[m-1];

                }
                l[k]=key;*/
                /*for(int t=0; t<n; t++){
                cout<<l[t]<<" ";
                }
                cout<<endl;*/
                int key=l[j];
                int k=j-1;
                while(l[k]>key && k>=0){
                    l[k+1]=l[k];
                    k--;
                }
                l[k+1]=key;

                

            }
        
     
    for(int t=0; t<n; t++){
        cout<<l[t]<<" ";
    }  
}

