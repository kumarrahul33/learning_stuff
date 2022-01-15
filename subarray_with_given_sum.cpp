#include<bits/stdc++.h>
using namespace std;
int main(){
    
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);

    #endif
    
    // obtaining the list
    int n;
    cin >> n;

    int a;
    cin >> a;

    int l1[n];

    for(int i=0; i<=n-1; i++){
        cin>>l1[i];
    }
    int sum=0;
    int found=0;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            sum+=l1[j];
            if(sum>a){
                continue;
            }
            else if(sum==a){
                cout<<i<<" "<<j<<endl;
                //found=1;
                break;
                
            }
        }
        sum=0;
        if(found==1){
            break;
        }

    }


}