#include <iostream>
#include <vector>

using namespace std;

#define MOD 1000'000'000

int main() {
  int N; cin >> N;

  vector<vector<vector<int>>> dp(
    N + 1, 
    vector<vector<int>>(
      10, 
      vector<int>(1 << 10, 0)
    )
  );

  for (int i{1}; i <= 9; ++i) {
    dp[1][i][1 << i] = 1;
  }

  for (int len{2}; len <= N; ++len) {
    for (int digit{0}; digit <= 9; ++digit) {
      for (int m{0}; m < (1 << 10); ++m) {

        int new_mask{m | (1 << digit)};

        if (digit > 0) {
          dp[len][digit][new_mask] += dp[len - 1][digit - 1][m];
          dp[len][digit][new_mask] %= MOD;
        }

        if (digit < 9) {
          dp[len][digit][new_mask] += dp[len - 1][digit + 1][m];
          dp[len][digit][new_mask] %= MOD;
        }
      }
    }
  }

  int result{0};
  const int FULL_MASK{(1 << 10) - 1};

  // 마지막 자리에 0 ~ 9까지 사용하여, 0 ~ 9가 모두 사용된 경우를 
  // 취합하여 더해준다
  for (int digit{0}; digit <= 9; ++digit) {
    result += dp[N][digit][FULL_MASK];
    result %= MOD;
  }

  cout << result << '\n';
}
