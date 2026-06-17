class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> min_index;
        for (int i = 0; i < nums.size(); i++) {
            if (min_index.find(nums[i]) == min_index.end()) {
                min_index[nums[i]] = i ;
            }

            int result = target - nums[i] ;
            if (min_index.find(result) != min_index.end() && min_index[result] != i) {
                return vector<int>({min(i, min_index[result]), max(i, min_index[result])}) ;
            }
        }


        return vector<int>({0, 1});

    }
};
