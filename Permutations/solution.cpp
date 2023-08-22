#include <iostream>

int main() {
    int n;
    std::cin>>n;

    if(n == 1) {
        std::cout<<1;
    }
    else if(n == 2 || n == 3) {
        std::cout<<"NO SOLUTION";
    }
    else {
        // std::cout<<1<<" ";
        for(int i = 2; i <= n; i += 2) {
            std::cout<<i<<" ";
        }
        for(int i = 1; i <= n; i += 2) {
            std::cout<<i<<" ";
        }
    }

    return 0;

}