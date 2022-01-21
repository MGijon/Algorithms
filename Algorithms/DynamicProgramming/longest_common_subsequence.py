"""
Longest Common Subsequence (LCS)Problem Statement:
    Given two sequences, find the length of longest subsequence present in both of them. 
    A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.
    For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”.

    OBS: if we use force brute we have O(2^n) in space for a string of length since we have 2^n - 1 
    possible combinationsi (empty string not valid).
    -> Time Complexity will be O(n * 2^n) ( because O(n) is required to check two candidate strings ).
"""

def longest_common_subsequence_naive(X: [str], Y: [str], m: int, n: int) -> int:
    """O(2^n) time complexity!"""
    if m * n == 0:
        return 0    
    elif X[m - 1] == Y[n - 1]:
        return 1 + longest_common_subsequence_naive(X, Y, m-1, n-1)
    else:
        return max(longest_common_subsequence_naive(X, Y, m, n-1), longest_common_subsequence_naive(X, Y, m-1, n))

def longest_common_subsequence(X: [str], Y: [str]) -> int:
    """O(n*m) time complexity! Much better!"""
    m, n = len(X), len(Y)
    previous: [int] = [0] * (n+1)
    current: [int] = [0] * (m+1)
    for i in range(1, m+1):
        for j in range(1, n+1):
            if X[i - 1] == Y[j - 1]:
                current[j] = 1 + previous[j - 1]
            else:
                if current[j - 1] > previous[j]:
                    current[j] = current[j - 1]
                else:
                    current[j] = previous[j]
        current, previous = previous, current
    return previous[n]

if __name__ == "__main__":
    X: [str] = "abcdefghi"
    Y: [str] = "abuyopla"
    print(f"Lengh of longest common subsequence is {longest_common_subsequence_naive(X, Y, len(X), len(Y))}")
    print(f"Lengh of longest common subsequence is {longest_common_subsequence(X, Y)}")

