#include<bits/stdc++.h>
using namespace std;

int fun1(int* temp){
    *temp=210050128;
    return 0;
    
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    int a;
    int* ptr=&a;
    int* ptr2;

    cin>>a;
    cout<<ptr;

    ptr2=ptr;
    cout<<endl<<ptr2;

    *ptr=466465;
    cout<<endl<<a;
    fun1(ptr);

    cout<<endl<<a;


return 0;
}