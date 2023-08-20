#include <iostream>

int main() {
    long long n;
    std::cin>>n;
    while(n > 1) {
        std::cout<<n<<" ";
        if(n & 1) {
            n *= 3;
            n += 1;
        }
        else {
            n >>= 1;
        }
    }

    std::cout<<1<<std::endl;
    return 0;
}