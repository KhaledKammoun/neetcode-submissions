#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int max_seq = 0;

        for (int num : num_set) {
            if (!num_set.contains(num - 1)) {
                int current_num = num;
                int current_seq = 1;

                while (num_set.contains(current_num + 1)) {
                    current_num += 1;
                    current_seq += 1;
                }

                max_seq = max(max_seq, current_seq);
            }
        }

        return max_seq;
    }
};