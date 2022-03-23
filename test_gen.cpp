#include <iostream>
#include <iomanip>
#include <ostream>
#include <istream>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <array>
#include <algorithm>
#include <functional>
#include <cmath>
#include <time.h>
#include <random>
#include <chrono>
#include <cassert> 
#include <cstring>
#include <limits>

using namespace std;

#define pb push_back
#define ppb pop_back
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define ld long double

typedef long long ll;

istream& operator>> (istream& in, pii& b) {
    in >> b.first >> b.second;
    return in;
}

ostream& operator<< (ostream& out, const pii& b) {
    out << "{" << b.first << ", " << b.second << "}";
    return out;
}

template<typename T> ostream& operator<< (ostream& out, const vector<T>& a) {
    for (auto k : a) out << k << " ";
    return out;
}

template <typename T1, typename T2> inline bool chkmin(T1 &x, const T2 &y) {if (x > y) {x = y; return 1;} return 0;}
template <typename T1, typename T2> inline bool chkmax(T1 &x, const T2 &y) {if (x < y) {x = y; return 1;} return 0;}

#ifdef LOCAL
    #define dbg(x) cout << #x << " : " << (x) << endl;
    // const long long mod = 2600000069;
    // const long long p = 10;
#else
    #define dbg(x) 57
    // const long long mod = 2600000069;  
    // const long long p = 179;
#endif

const ld PI = 4 * atan(1);

#define time clock() / (double) CLOCKS_PER_SEC

// #pragma GCC optimize("Ofast,no-stack-protector")
// #pragma GCC target("sse,sse2,sse3,sse3,sse4")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC optimize("fast-math")
// #pragma GCC target("avx2")

mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());

int gen(int l, int r) {
    return rnd() % (r - l + 1) + l;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q = 100000;
    cout << q << "\n";
    vector<char> have = {'+', '-', 'b', 'f', 'c'};
    for (int i = 0; i < q - 1; i++) {
        int ind = gen(0, 4);
        cout << have[ind] << " ";
        cout << gen(1, 100000);
        if (ind == 4) {
            cout << " " << gen(1, 100000);
        }
        cout << "\n";
    }
    cout << '?' << "\n";
}
/*

*/
