class Solution {
 public:
  vector<int> coins;
  int memo[10010];

  int solve(int n) {
    if (n == 0) return 0;
    if (memo[n] != -1) return memo[n];
    int ans = 1e9;
    for (int coin : coins) {
      if (n >= coin) {
        ans = min(ans, solve(n - coin) + 1);
      }
    }
    return memo[n] = ans;
  }
  int coinChange(vector<int>& coins_, int amount) {
    coins = coins_;
    fill(memo, memo + amount + 1, -1);
    int ans = solve(amount);
    if (ans == 1e9) return -1;
    return ans;
  }
};
