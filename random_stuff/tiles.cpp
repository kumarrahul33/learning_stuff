#include<iostream>
#include<cmath>
int min_tiles(int w, int h){
    if(w==0 || h==0) return 0;
    int w2=0; 
    int h2=0;
    
    while(std::round(pow(2,w2))<=w) w2++;
    while(std::round(pow(2,h2))<=h) h2++;
    w2--; h2--;
    int sqTile=std::min(std::round(pow(2,w2)),std::round(pow(2,h2)));

    if(w==h && h==std::round(pow(2,h2))) return 1;


    else return 1+min_tiles(w-sqTile,sqTile)+min_tiles(w,h-sqTile);
    
}
// int main(){
//     int w,h;
//     std::cin >> w >> h;
//     std::cout << min_tiles(w,h);
//    // for(int i=0; i<10; i++) std::cout << std::round(pow(2,i)) << std::endl;
// }