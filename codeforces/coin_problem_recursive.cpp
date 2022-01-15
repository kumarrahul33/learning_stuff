#include<bits/stdc++.h>
using namespace std;

int coins_req(set<int> coin, int curr_sum){
    if(coin.count(curr_sum)==1){
        //cout<<finalAns+1<<" i was here"<<"\n";
        return 1;
    }
    else if(curr_sum<0) return INT_MAX;
    
    int finalAns=INT_MAX;
    for(auto x:coin){
        finalAns=min(finalAns, abs(coins_req(coin,curr_sum-x)+1));
    }
    return finalAns;
    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int sumreq;
    cin>>sumreq;
    int n;
    cin>>n;

    set<int> coin;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        coin.insert(temp);
    }
    //cout<<INT_MAX<<"value of int max"<<"\n";
    cout<<coins_req(coin,10);

    return 0;

}