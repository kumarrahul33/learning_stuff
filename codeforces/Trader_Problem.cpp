// this ques has not been solved
//study graph then attempt this
//https://codeforces.com/problemset/problem/1618/G


#include<bits/stdc++.h>
using namespace std;

/*int max_money(vector<int> monocrap, vector<int> trader, int k){
    sort(monocrap.begin(),monocrap.end());
    sort(trader.begin(),trader.end());

   int p1=0;
   int p2=0;
   int end_trader=trader.size()-1;
   
    while(true){
        if(trader[p2]<=monocrap[p1]){
            p2++;
        }

        else if(p2==end_trader && trader[p2]<=monocrap[p1] ){
            break;
        }
        else if(p2==end_trader && trader[p2]>monocrap[p1] ){
            //trade
            int temp=monocrap[p1];
            monocrap[p1]=trader[p2];
            trader[p2]=temp;
            //trade

            end_trader--;
            p1++;

        }
        
        else if(trader[p2]<monocrap[p1]+k){
            p2++;
        }

        else if(p2==0){
             //trade
            int temp=monocrap[p1];
            monocrap[p1]=trader[p2];
            trader[p2]=temp;
            //trade
            p1++;
            p2++;
        }

        else if(trader[p2-1]>monocrap[p1] && trader[p2]<monocrap[p1]+k ){
            //trade
            int temp=monocrap[p1];
            monocrap[p1]=trader[p2-1];
            trader[p2-1]=temp;
            //trade
            p1++;
            p2++;
        }
        else if(trader[p2-1]<monocrap[p1] && trader[p2]<monocrap[p1]+k ){
            p1++;

        }


        
       
    }

    return accumulate(monocrap.begin(),monocrap.end(),0);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\input.txt", "r", stdin);
    freopen("C:\\Users\\Asus\\Desktop\\Code\\C++\\output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, q;
    cin>>n>>m>>q;

    vector<int> monocrap;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        monocrap.push_back(a);
    }

    vector<int> trader;
    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        trader.push_back(a);
    }
    cout<<max_money(monocrap,trader,0);   


}
*/