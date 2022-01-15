#include<bits/stdc++.h>
#include<climits>
using namespace std;


int hcf(int a, int b ){
    if(b==0)
        return a;
    if(a%b==0)
        return b;
    else
        return hcf(b,a%b);
}

void fun1(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<=min)
            min=arr[i];
    }
   
    int i=0;
    int j=0;
    int finalans=0;
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-min;
    }

    while(j<n){
        
        if(finalans==INT_MAX){
            cout<<-1<<endl;
            return;

        }
        
        finalans=hcf(finalans,arr[j]);
        
        j++;

        

    }
    cout<<finalans<<endl;
} 


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    int m;
    
    

    for(int i=0;i<n;i++){
        cin>>m;
        int arr[m];
        for(int j=0; j<m; j++)
            cin>>arr[j];
        fun1(arr,m);
    }
        

    



}