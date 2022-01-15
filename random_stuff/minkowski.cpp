#include<bits/stdc++.h>
using namespace std;

int main(){
   /* #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif*/

    int n,p;
    cin>>n>>p;
    double u,v;
    double sum1;
    sum1=0;
    
    for(int i=0; i<n ;i++){
        cin>>u>>v;
        double temp;
        temp=pow(abs(u-v),p);
        sum1+=temp;
        //cout<<i+1<<"times executed"<<endl;
    }

    double finalAns;
    finalAns=pow(sum1,pow(p,-1));

    cout<<fixed;
    cout.precision(2);
    cout<<finalAns;


    return 0;

}