#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){

    int Num=1;
    int i=1;
    int finalNum;


    while(i<=n){

        int temp=0;
        finalNum=Num;
        int num_len=0;
     	while(true){
            int x=pow(10,num_len);
            if((Num/x)<10){
            num_len++;
            break;
            }
            num_len++;
            
	    }
        while(Num!=0){
            int term=pow(Num%10,num_len);
            temp+=term;
            Num=Num/10;
           }

        if(finalNum==temp) i++;
        Num=finalNum+1;

        }

    return finalNum;

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    cout<<armstrong(n);
}