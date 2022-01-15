#include<bits/stdc++.h>
using namespace std;
class job{
    public:
    string skill_req;
    int years_req;
    char limit;

    void print_info(){
        cout<<skill_req<<endl;
        cout<<years_req<<endl;
        cout<<limit;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif
    char n;
    int m;
    cin>>m>>n;

    job a;
    a.limit=n;
    a.years_req=m;


    a.skill_req="smartness";

    a.print_info();

}
