#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int a;
    cin>>a;
    int n;
    cin>>n;
    int l[n];

    for(int i=0; i<n; i++)
        cin>>l[i];

    int st=0;
    int end=n-1;
    int sum=0;
    while(st-end<0){
        sum=l[st]+l[end];
        if(sum<a)
            st+=1;
        else if(sum>a)
            end-=1;
        else
            break;

        
    }
    if(st-end<0)
        cout<<st<<" "<<end;
    else
        cout<<"not found";

}