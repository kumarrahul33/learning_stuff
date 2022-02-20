#include<iostream>
int count_ways(int n){
    if(n==0) return 1;
    else if(n<0) return 0;

    int sum1=0;
    for(int i=1; i<7; i++){
        sum1+= count_ways(n-i);
    }
    return sum1;
}
/*int main(){
    int n;
    std::cin >> n;
    std::cout << count_ways(n);

}*/