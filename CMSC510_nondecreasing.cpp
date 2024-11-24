#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int> > findSubsequences(vector<int>& nums){
        int n = nums.size();
        vector<vector<vector<int> > > dp(n);  // DP vector to store subsequences ending at each index (a list of subsequences)
        vector<vector<int> > result;  // To store all the final valid subsequences

        for (int i = 0; i < n; i++) {
            dp[i].push_back({nums[i]});// Start with a subsequence containing only nums[i], and then push that sequence {nums[i]} into dp[i]
            
            // Explore all previous subsequences to extend with nums[i]
            for (int j = 0; j < i; j++) {
                if (nums[i] >= nums[j]) {  // Non-decreasing condition
                    for (auto& seq : dp[j]) { //iterate through all subsequences stored in dp[j]
                        vector<int> newSeq = seq;
                        newSeq.push_back(nums[i]);  // Extend subsequence with nums[i]
                        dp[i].push_back(newSeq); // store the newly extended subsequence newSeq in dp[i]
                    }
                }
            }

            // Add valid subsequences to the result (array with at least two elements)
            for (auto& seq : dp[i]) {
                if (seq.size() >= 2) {
                    result.push_back(seq); //if the condition is true, add it to the result vector
                }
            }
        }

        //Remove duplicates using a set
        set<vector<int> > uniqueResult(result.begin(), result.end());
        result.assign(uniqueResult.begin(), uniqueResult.end());

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(7);

    vector<vector<int>> subsequences = sol.findSubsequences(nums);

    // Output all non-decreasing subsequences
    for (auto& seq : subsequences) {
        for (int num : seq) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
