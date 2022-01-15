#include<iostream>
using namespace std;
int main(){
  /*  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    int n;
    cin>>n;
    char arr1[n+1];
    cin>>arr1;

    //cout<<arr1;
    int i=0;
   while(arr1[i] != '\0'){
       cout<<arr1[i]<<endl;
       i+=1;
   }

}