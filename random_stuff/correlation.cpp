#include<bits/stdc++.h>
using namespace std;
int main(){
    /*#ifndef ONLINE_JUDGE

    freopen("/home/rahul/Code/C++/input.txt" , "r" , stdin);
    freopen("/home/rahul/Code/C++/output.txt" , "w" , stdout);

    #endif*/
    
    int n;
    cin>>n;
    int subject1[n];
    int subject2[n];

    for (int i = 0; i < n; i++)
    {
        cin>>subject1[i];   
    }

    for (int i = 0; i < n; i++) cin>>subject2[i];

    int sum_xi=0;
    int sum_yi=0;
    int sum_xi2=0;
    int sum_yi2=0;
    int sum_xi_yi=0;
    for (int i = 0; i < n; i++){
        sum_xi+=subject1[i];
        sum_yi+=subject2[i];

        sum_xi2+=subject1[i]*subject1[i];
        sum_yi2+=subject2[i]*subject2[i];

        sum_xi_yi+=subject1[i]*subject2[i];
    }

    

    float denominator;
    denominator=sqrt(n*sum_xi2-sum_xi*sum_xi)*sqrt(n*sum_yi2-sum_yi*sum_yi);
    if(denominator==0){
        cout<<-1;
        return 0;
    }

    float numerator=0;
    numerator=n*sum_xi_yi-sum_yi*sum_xi;

    cout<<fixed;
    cout.precision(2);

    float finalAns=numerator/denominator;
    cout<<finalAns;



    

}