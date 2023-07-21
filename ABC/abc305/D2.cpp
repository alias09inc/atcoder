#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned N;
    cin >> N;
    vector<unsigned> A(N), fA(A);
    for(auto&& a:A) cin >> a;

    for(unsigned i=1; i<N; i++) {
        if(i%2 == 0) {
            fA[i] = fA[i-1] + A[i] - A[i-1];
        } else {
            fA[i] = fA[i-1];
        }
    }

    unsigned Q;
    cin >> Q;

    // f(x) := x 分までに何分寝たか
    auto f{[&A, &fA](auto x) -> unsigned {
        const auto j = upper_bound(begin(A) + 1, end(A), x) - begin(A) - 1;
        //複雑そうな割り算は睡眠してたかどうかの処理で、寝ていれば1となり、起きていたら0となる簡単な乗算
        return fA[j] + (fA[j + 1] - fA[j]) / (A[j + 1] - A[j]) * (x - A[j]);
    }};
    for (unsigned i = 0; i < Q; ++i) {
        unsigned l, r;
        cin >> l >> r;
        cout << f(r) - f(l) << endl;
    }
    return 0;

}