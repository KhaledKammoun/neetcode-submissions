class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> min_index;
        for (int i = 0; i < nums.size(); i++) {
            if (min_index.find(nums[i]) == min_index.end()) {
                min_index[nums[i]] = i ;
            }

            if (min_index.find(target - nums[i]) != min_index.end() && min_index[target - nums[i]] != i) {
                return vector<int>({min(i, min_index[target - nums[i]]), max(i, min_index[target - nums[i]])}) ;
            }
        }


        return vector<int>({0, 1});

    }
};
