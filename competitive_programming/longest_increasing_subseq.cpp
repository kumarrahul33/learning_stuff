/* find the longest increasing subsequence in an array
of n elements. This is a maximum-length sequence of array elements that goes
from left to right, and each element in the sequence is larger than the previous
element. For example, in the array */

#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/rahul/Code/C++/input.txt", "r", stdin);
    freopen("/home/rahul/Code/C++/output.txt", "w", stdout);
    #endif


    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    /****************************************************************************************/
    vector<pair<int,int>> sub_seq;
    int finalAns=INT_MIN;
    for(int i=0; i<n; i++){
        sub_seq.push_back(make_pair(arr[i],1));
        vector<pair<int,int>>:: iterator it;

        

        for(it=sub_seq.begin(); it!=sub_seq.end(); it++){
           

            if(arr[i]>it->first){
               // cout<<it->first<<" "<<it->second<<"\n";

                //map<int,int>:: iterator it=sub_seq.find(head.first);
                it->second=it->second+1;
                it->first=arr[i];
                finalAns=max(finalAns,it->second);
            } 

         /*  vector<pair<int,int>>:: iterator del_sim=it;
           del_sim++;
            while(it->first==del_sim->first && del_sim!=sub_seq.end()){
            
            
               if(del_sim->second>it->second) {
                   it++;
                   del_sim--;
                   sub_seq.erase(del_sim);
                   del_sim++;
                   }
               else sub_seq.erase(del_sim);
            
              del_sim++;
            }*/
        }

       for(auto head:sub_seq) cout<<head.first<<" "<<head.second<<"\n";
        cout<<"----------------------------------------------------------------"<<"\n";
            
    }

   // for(auto head:sub_seq) cout<<head.first<<" "<<head.second<<"\n";

    cout<<finalAns;
    /****************************************************************************************/
    /*sample input
    8
    6 2 5 1 7 4 8 3
    */



}