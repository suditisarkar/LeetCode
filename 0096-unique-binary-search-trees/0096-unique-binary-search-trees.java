class Solution {
  public int numTrees(int n) {
    // dp[i] := the number of unique BST's that store values 1..i
    int[] p = new int[n + 1];
    p[0] = 1;
    p[1] = 1;

    for (int i = 2; i <= n; ++i)
      for (int j = 0; j < i; ++j)
        p[i] += p[j] * p[i - j - 1];

    return p[n];
  }
}