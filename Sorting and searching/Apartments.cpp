// https://cses.fi/problemset/task/1084/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define rrep(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define endl '\n';
typedef vector<ll> VI;
typedef unsigned long long ull;
typedef pair<ll, ll> PII;
typedef double db;
mt19937 mrand(random_device{}());
const ll mod = 1e9 + 7;
int rnd(int x) { return mrand() % x; }
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; };
ll lcm(int a, int b) { return a * b / gcd(a, b); }
#define code_run_ho ios_base::sync_with_stdio(false);
#define bsdk cin.tie(NULL);
#define f(i, a, n, c) for (int i = a; i < n; i += c)
#define vin(x, qwe)               \
    ;                             \
    for (int i = 0; i < qwe; i++) \
    {                             \
        ll u;                     \
        cin >> u;                 \
        x.push_back(u);           \
    }
#define vsort(v) sort(v.begin(), v.end());
#define vrsort(v) sort(v.begin(), v.end(), greater<ll>());
#define vmax(v) *max_element(all(v))
#define vmin(v) *min_element(all(v))
#define vsum(v) accumulate(all(v), 0ll)
#define vprint(v)                              \
    ;                                          \
    f(i, 0, sz(v), 1) { cout << v[i] << ' '; } \
    cout << endl;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    VI per;
    vin(per, n);
    VI app;
    vin(app, m);
    vsort(app);
    ll ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < m && app[j] < per[i] - k)
        {
            j++;
        }
        if (j < m && app[j] <= per[i] + k)
        {
            ans++;
            j++;
        }
    }

    cout << ans << endl;
}

int main()
{

    int tc = 1;
    // cin>>tc;
    // code_run_ho bsdk

    while (tc--)
    {
        solve();
    }
    return 0;
}
