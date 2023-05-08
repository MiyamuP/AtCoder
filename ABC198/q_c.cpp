#include <iostream>
#include <cmath>

int main() {
    int r, x, y;

    std::cin>>r;
    std::cin>>x;
    std::cin>>y;

    double dis = sqrt(x*x+y*y);

    //std::cout<<dis<<std::endl;

    int num=dis/r;

    std::cout<<num<<std::endl;
    if(num==0){
        num=2;
    }else if(r*num != dis) {
        num = num+1;
    }
    std::cout<<num<<std::endl;
}