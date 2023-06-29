#include <bits/stdc++.h>
using namespace std;

void print_multiset(multiset<int>& ms) {
    for (auto val: ms) {
        cout << val << ", ";
    }
    cout << endl;
}

int main() {
    multiset<int> st{};
    st.insert(2);
    st.insert(3);
    st.insert(2);

    print_multiset(st);
    return 0;
}