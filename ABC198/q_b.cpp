#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]){
    string n;
    cin >> n;

    int n_s = n.length()-1;

    while(n.at(n_s) == '0' && n_s != 0){
        n_s = n_s-1;
    }

    int n_min=0;
    int n_max=n_s;
    bool r_f=true;

    while(n_min < n_max) {
        if (n.at(n_min) != n.at(n_max)) {
            r_f=false;
        }
        n_min = n_min+1;
        n_max = n_max-1;
    }

    if(r_f){
        std::cout<<"Yes"<<endl;
    } else{
        std::cout<<"No"<<endl;
    }


}