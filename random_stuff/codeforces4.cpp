#include<bits/stdc++.h>
using namespace std;

void func(int n,int a,int b){
    cout<<"im in";
    int arr[n+1];
    int ans[n];
    for(int i=0; i<n+1; i++) arr[i]=1;
    

    int count=0;
    int ptr=1;
    int i=0;

   ptr=b+1;
    while(count<n/2){
        cout<<"i'm stuck"<<endl;
        
        if(ptr==n){
            ptr=a;
        }
        if(arr[ptr]==1){
            ans[i]=ptr;
            arr[i]=0;
            ptr++;
            count++;
            i++;
        }
        else if(ans[ptr]==0){
            ptr++;
        }
        
    }

    count=0;
    ptr=1;

    while(count<n/2){
        
        cout<<"i'm stuck"<<endl;
        if(arr[ptr]==1){
            ans[i]=ptr;
            arr[i]=0;
            ptr++;
            count++;
            i++;
        }
        else if(ans[ptr]==0){
            ptr++;
        }
        
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";




}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //int t;
    //cin>>t;

    int n,a,b;
    cin>>n>>a>>b;
    func(n,a,b);
    /*for(int i=0; i<t; i++){
        cin>>n>>a>>b;
        if(a<=(n/2 +1)&& b>=n/2)
            func(n,a,b);
        else cout<<-1;
        cout<<endl;
    }*/

}