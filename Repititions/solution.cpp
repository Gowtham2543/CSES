#include <iostream>
// #include <string.h>
// #include <strings.h>

int main() {
    std::string s;
    std::cin>>s;

    char currChar = s[0];
    int currLen = 1;
    int n = s.size();

    int ans = 1;

    for(int i = 1; i < n; i++) {
        if(s[i] == currChar) {
            // std::cout<<s[i]<<std::endl;
            currLen++;
            ans = std::max(ans, currLen);
        }
        else {
            currChar = s[i];
            currLen = 1;
        }
    }

    std::cout<<ans<<std::endl;

    return 0;
}