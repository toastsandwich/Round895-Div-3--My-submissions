using namespace std;
// using namespace boost::multiprecision;
// using namespace boost::algorithm;

// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/algorithm/string.hpp>
#include <bits/stdc++.h>
#define      int         long long int
//#define    bigInt      cpp_int
#define      endl        "\n"
#define      fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define      all(x)      x.begin(),x.end()
#define      NO          cout << "NO" << '\n'
#define      YES         cout << "YES" << '\n'
#define      CASE(i)     cout << "TESTCASE #" << i << endl
template<typename T>
void debug(T x) {
    cerr << "debug :" << x << endl;
}

void solve() {
    int n;
    cin >> n;
    int mini = 300;
    for(int i = 0; i < n; i++) {
        int trap_number, trap_activation_time;
        cin >> trap_number >> trap_activation_time;
        // rooms.insert({trap_number, trap_activation_time});
        trap_activation_time = trap_activation_time - 1;
        int x = floor(trap_activation_time / 2);
        int reach = trap_number + x;
        // debug(reach);
        mini = min(reach, mini);
    }
    cout << mini << endl;
}

int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    // int p = 1;
    while(t--) {
        // CASE(p++);
        solve();
    }
}
