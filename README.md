# DSAPractice

# December 2023

# 12/20/2023
1. Design HashSet (https://leetcode.com/problems/design-hashset/description/)
Time complexity: O(N/b) = N is all possible values that can be added; b is number of buckets (prime numbers, here its 769)
Space complexity: O(n+b) = n is number of unique values that can be added; b number of buckets

2. Min Stack (https://leetcode.com/problems/min-stack/description/)
Time complexity: O(1)
Space complexity: O(n)

# 12/22/2023 
1. Search in Rotated Sorted Array (https://leetcode.com/problems/search-in-rotated-sorted-array/)
Time complexity: O(log N)
Space complexity: O(1)

2. Search in a Sorted Array of Unknown Size (https://leetcode.com/problems/search-in-a-sorted-array-of-unknown-size/)
Time complexity: 
Space complexity: 

3. Search a 2D Matrix (https://leetcode.com/problems/search-a-2d-matrix/)
Time complexity: O(log m + log n)
Space complexity: O(1)

# 12/23/2023
1. Find Minimum in Rotated Sorted Array (https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
Time complexity: O(log N)
Space complexity: O(1)

2. Find First and Last Position of Element in Sorted Array (https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
Time complexity: O(log N)
Space complexity: O(1)

3. Find Peak Element (https://leetcode.com/problems/find-peak-element/)
Time complexity: O(log N)
Space complexity: O(1)

# 12/25/2023
1. Isomorphic Strings (https://leetcode.com/problems/isomorphic-strings/description/)
Time complexity: O(N)
Space complexity: O(1)

2. Group Anagrams (https://leetcode.com/problems/group-anagrams/description/)
Time complexity: O(m * nlogn) m = length of string of vectors; k = max length of string; sorting takes O(nlogn)
Space complexity: O(m*n)

3. Word Pattern (https://leetcode.com/problems/word-pattern/description/)
Time complexity: O(m+n) m = length of sentence; n = length of pattern
Space complexity: O(W) where W represents the number of unique words in s. Even though we have two hash maps, the character to word hash map has space complexity of O(1) since there can at most be 26 keys.