# DSA

My C++ solutions to Data Structures & Algorithms problems from LeetCode (LC) and GeeksforGeeks (GFG), grouped by technique.

## Contents

### Two Pointers — [`2 pointers/`](2%20pointers/)

| Problem | Source | File |
| --- | --- | --- |
| Two Sum | LC 1 | [twoSumPos.cpp](2%20pointers/twoSumPos.cpp) |
| 3Sum | LC 15 | [threeSum.cpp](2%20pointers/threeSum.cpp) |
| 3Sum Closest | LC 16 | [threeSumClosest.cpp](2%20pointers/threeSumClosest.cpp) |
| Remove Duplicates from Sorted Array | LC 26 | [removeDuplicates.cpp](2%20pointers/removeDuplicates.cpp) |
| Two Sum II – Input Array Is Sorted | LC 167 | [twoSum.cpp](2%20pointers/twoSum.cpp) |
| Squares of a Sorted Array | LC 977 | [sortedSquares.cpp](2%20pointers/sortedSquares.cpp) |
| Count Triplets with Smaller Sum | GFG | [countTripletsWithSmallerSum.cpp](2%20pointers/countTripletsWithSmallerSum.cpp) |
| Segregate 0s and 1s (Dutch National Flag) | — | [dutchNationalFlag.cpp](2%20pointers/dutchNationalFlag.cpp) |

#### Sliding Window — [`2 pointers/Sliding Window/`](2%20pointers/Sliding%20Window/)

| Problem | Source | File |
| --- | --- | --- |
| Minimum Size Subarray Sum | LC 209 | [minSubArrayLen.cpp](2%20pointers/Sliding%20Window/minSubArrayLen.cpp) |
| Fruit Into Baskets *(in progress)* | LC 904 | [totalFruit.cpp](2%20pointers/Sliding%20Window/totalFruit.cpp) |
| Max Sum Subarray of Size K | GFG | [maxSubarraySum.cpp](2%20pointers/Sliding%20Window/maxSubarraySum.cpp) |
| Longest Substring with K Uniques | GFG | [longestKSubstr.cpp](2%20pointers/Sliding%20Window/longestKSubstr.cpp) |

### Hashmap — [`Hashmap/`](Hashmap/)

| Problem | Source | File |
| --- | --- | --- |
| Ransom Note | LC 383 | [ranSom.cpp](Hashmap/ranSom.cpp) |
| First Unique Character in a String | LC 387 | [firstUniqueNumber.cpp](Hashmap/firstUniqueNumber.cpp) |
| Longest Palindrome | LC 409 | [longestPalindrom.cpp](Hashmap/longestPalindrom.cpp) |
| Maximum Number of Balloons | LC 1189 | [maxNumberofBallons.cpp](Hashmap/maxNumberofBallons.cpp) |

### Linked List / Fast & Slow Pointers — [`LinkList/`](LinkList/)

| Problem | Source | File |
| --- | --- | --- |
| Linked List Cycle | LC 141 | [hasCycle.cpp](LinkList/hasCycle.cpp) |
| Linked List Cycle II | LC 142 | [detectCycle.cpp](LinkList/detectCycle.cpp) |
| Happy Number | LC 202 | [isHappy.cpp](LinkList/isHappy.cpp) |
| Middle of the Linked List | LC 876 | [middleNode.cpp](LinkList/middleNode.cpp) |

### Accenture Prep — [`Accenture Prep/`](Accenture%20Prep/)

| Problem | File |
| --- | --- |
| Chocolate distribution | [chocklateProblem.cpp](Accenture%20Prep/chocklateProblem.cpp) |

## Running a solution

Each `.cpp` file is self-contained with its own `main()` and sample input.

```bash
clang++ -std=c++17 "2 pointers/threeSum.cpp" -o threeSum
./threeSum
```

`g++` works the same way. In VS Code, open a file and run the default build task (**⇧⌘B**).

## Security

See [SECURITY.md](SECURITY.md) for how to report a security issue.
