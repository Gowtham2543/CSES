#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> ans;

    for(int i = 0; i < n; i++) {
        int temp;
        cin>>temp;

        auto it = upper_bound(ans.begin(), ans.end(), temp);

        // cout<<"vbjbv"<<endl;

        if(it == ans.end()) {
            ans.push_back(temp);
        }
        else {
            *it = temp;
        }
    }

    cout<<ans.size()<<endl;
    return 0;
}
