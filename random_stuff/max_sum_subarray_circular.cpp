#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int l[n];

    for(int i=0; i<n; i++)
        cin>>l[i];
    
    int sum[n];
    int sum1=0;
    int max1=0;
    
    for(int i=0; i<n; i++){
        sum1+=l[i];
        if(sum1<0)
            sum1=0;
        sum[i]=sum1;
        max1=max(sum[i],max1);

    }
    int max2=0;

    for(int i=0; i<n; i++){
        if(sum[i]==0 && (sum[i-1]+l[i])<0){
            max2=sum[i-1];
            max2=max2+sum[n-1];
            break;
        }
    }

    int finalans=0;
    finalans=max(max1,max2);
    cout<<finalans;


}