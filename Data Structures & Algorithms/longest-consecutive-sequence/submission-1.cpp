#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_map<long long, int> cons;
        long long min_el = 1e9;
        long long max_el = -1e9;
        
        for (int i = 0; i < nums.size(); i++) {
           cons[nums[i]] = 1;
           min_el = min(min_el, (long long)nums[i]); 
           max_el = max(max_el, (long long)nums[i]);
        }

        int max_seq = 0;
        int sub_seq = 0;
        
        for (int i = min_el; i < max_el + 1; i++) { 
            if (cons.contains(i)) {
                sub_seq++;
            } else {
                max_seq = max(max_seq, sub_seq);
                sub_seq = 0;
            }
        }

        return max(max_seq, sub_seq); 
    }
};