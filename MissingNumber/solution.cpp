#include <iostream>

int main() {
    long long n;
    std::cin>>n;

    long long sum = 0;

    for(int i = 0; i < n - 1; i++) {
        long long temp;
        std::cin>>temp;
        sum += temp;
    }

    std::cout<<(n * (n + 1) / 2) - sum<<std::endl;

    return 0;
}