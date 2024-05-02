#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, m;
vl S;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;
  S = vl(n + m);
  for (auto i = 0; i < n; ++i) {
    cin >> S[i];
  }

  for (auto i = 0; i < n; ++i) {
    for (auto j = 0; j < n + m; ++j) {
      ll x;
      cin >> x;

      S[i] -= x;
      S[j] += x;
    }
  }

  for (const auto& x : S) {
    cout << x << ' ';
  }

  return 0;
}