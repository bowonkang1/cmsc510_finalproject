# cmsc510_finalproject
## Description of the Problem

The problem I chose is non-decreasing subsequences, which is in backtracking section. Non decreasing subsequence problem is to find all subsequences where each previous element is less than or equal to the next element, and each subsequence must have at least two elements. For example, given the array [4,6,7,7], the non-decreasing subsequences would be [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]].

A real-world application of this problem can be used in psychological assessments, where tracking the progression of symptoms over time is crucial. Non-decreasing subsequences in this context might represent symptoms that either remain constant or worsen. For instance, if a patient reports anxiety scores like [4, 5, 6, 7], it indicates a progressive increase in anxiety levels. Conversely, a sequence like [7, 6, 6, 5] suggests stability or improvement.

## Approach to the problem
Initially, my approach to solving this problem was backtracking. I simulated the backtracking process, exploring all possibilities by adding elements one by one and backtracking when necessary. However, I quickly realized this method was inefficient. So, I switched to a dynamic programming solution, inspired by the Longest Increasing Subsequence (LIS) problem. Rather than tracking the length of the subsequence, storing the actual subsequence was the main point with minor condition changes. Also, I initially didn't realize that duplication is also needed to be considered, so removing duplication was the final step that can led to the correct output. 

## Sources Used
- https://www.quora.com/How-do-you-remove-duplicate-elements-in-C
- https://www.geeksforgeeks.org/vector-of-vectors-in-c-stl-with-examples/
- https://icare.hse.ru/data/2018/10/24/1142422445/Rust.pdf
- https://www.interviewbit.com/blog/longest-increasing-subsequence/
- https://algo.monster/liteproblems/491
- https://stackoverflow.com/questions/66168661/can-we-make-a-vector-of-vectors
- https://www.geeksforgeeks.org/how-to-initialize-3d-vector-in-cpp-stl/
- https://poe.com/

## Solution Process Notes
[Download PDF](https://drive.google.com/uc?export=download&id=1a6NXMNGgD5v_kd-VCYRAvjj_MU6ShBKV)

