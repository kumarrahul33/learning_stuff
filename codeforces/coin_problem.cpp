
//requires the knowledge of dynamic programming


#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,sum;
    cin>>sum;
    cin>>n;
    set<int> coins;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        coins.insert(temp);
    }
    

    int value[sum]; //this stores the value of min coins req for sum=n
    value[0]=0;

    for(int i=1; i<=sum; i++){
        value[i]=INT_MAX;
        for(auto c:coins){
            if(i-c<0) continue;
            value[i]=min(value[i],value[i-c]+1);
        }
    }

    for(int i=0; i<=sum; i++){
        cout<<i<<" "<<value[i]<<"\n";
    }

  
}