#include<iostream>
#include<cmath>
using namespace std;
int fac(int n){
    int ans1=1;
    for(int i=2; i<=n; i++){
        ans1=ans1*i;
    }
    return ans1;

}

int ncr(int n1,int n2){
    int ans2;
    ans2=fac(n1)/(fac(n2)*fac(n1-n2));
    return ans2;
}

int main(){
    #ifndef ONLILNE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    #endif


    int a,b;
    cin>>a>>b;
    cout<<ncr(a,b);


}