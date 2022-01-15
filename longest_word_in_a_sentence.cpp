#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    
    cin>>n;
    cin.ignore();
    char arr1[n+1];
    cin.getline(arr1,n);
    cin.ignore();
    int count=0;
    int maxw=0;
    int st=0;
    int end=0;

    for(int i=0; i<n+1; i++){
        count+=1;
        if(arr1[i]==' ' || arr1[i]=='\0'){
            maxw=max(maxw,count);
            //cout<<count<<"*"<<st<<" "<<end<<"*";
            if(maxw==count){
                end=i-1;
                st=i-count;
            }
            count=0;
        }
    }
    for(int i=st; i<=end; i++){
        cout<<arr1[i];
    }
}