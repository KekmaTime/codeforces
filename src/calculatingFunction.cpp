#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define trav(x, v) for (auto &x : v)

void fast_io() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main() {
  fast_io();
  ll n;
  cin >> n;

  ll sum = 0;
  // f(n) = -1 + 2 - 3 + ... + (-1)^n * n
  if (n % 2 == 0) {
    sum = n / 2;
  } else {
    sum = -1 * (n / 2 + 1);
  }
  cout << sum << endl;
  return 0;
}