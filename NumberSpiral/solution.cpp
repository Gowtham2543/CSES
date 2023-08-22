#include <iostream>

int main() {
    int t;
    std::cin>>t;

    while(t--) {
        int y, x;
        std::cin>>y>>x;

        long long maxRC = std::max(y, x);

        if(maxRC % 2 == 0) {
            maxRC *= maxRC;
        }




    }
}