/*Let us now consider another version of the coin problem where our task is to
calculate the total number of ways to produce a sum x using the coins. For
example, if coins = {1,3,4} and x = 5, there are a total of 6 ways:*/

//using dp
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin>>n>>x;
    set<int> coin;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        coin.insert(temp);
    }
    /*sample input
    
    3 5
    1 3 4 
    
    */

    int no_of_ways[x+1];
    no_of_ways[0]=1;
    for(int i=1; i<=x; i++){
        int total_ways=0;

        for(auto value:coin){
            if(i-value>=0)
            total_ways+=no_of_ways[i-value];

            else continue;
        }

        no_of_ways[i]=total_ways;


    }

    cout<<no_of_ways[x];


}