N = int(input())

# Please write your code here.

dp = [0] * 45

def fibo(n):
    if dp[n] != 0:
        return dp[n]
    if n <= 2:
        dp[n] = 1
    else:
        dp[n] = fibo(n-1) + fibo(n-2)

    return dp[n]

print(fibo(N))