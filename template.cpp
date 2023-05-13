#include<bits/stdc++.h> 
using namespace std;

#define ll long long 
#define M 1000000007
#define fo(i, l, r) for(ll i=l;l<r?i<r:i>r;l<r?i++:i--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
typedef vector<pii>     vpii;
typedef vector<pll>     vpll;

void prime_factors(int n, unordered_set<int> &st) {
    while (n % 2 == 0) {
        st.insert(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            st.insert(i);
            n = n/i;
        }
    }
    if (n > 2) st.insert(n);
}

int main() {
    int t;cin >> t;
    while(t--) {
    }

    return 0;
}
