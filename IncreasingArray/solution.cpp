#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int prev = 0;
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        int input;
        std::cin>>input;
        if(input > prev) {
            prev = input;
        }
        else {
            ans += prev - input;
            // prev += 1;
        }
    }

    std::cout<<ans<<std::endl;
}