int tribonacci(int n) {
    vector<int> dp(4); // Fixed-size vector for constant space usage
   if(n == 0) return 0;
   if(n == 1 || n == 2) return 1;
   dp[0] = 0; dp[1] = 1; dp[2] = 1;
   for(int i = 3; i <= n; i++){
        dp[3] = dp[0] + dp[1] + dp[2]; // Compute the next Tribonacci number
        dp[0] = dp[1]; // Shift the window: dp[0] takes the value of dp[1]
        dp[1] = dp[2]; // dp[1] takes the value of dp[2]
        dp[2] = dp[3]; // dp[2] is updated to the newly computed value
   } 
   return dp[3];
}