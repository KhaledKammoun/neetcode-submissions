class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> min_index;
        for (int i = 0; i < nums.size(); i++) {

            int result = target - nums[i] ;
            if (min_index.contains(result)) {
                return {min_index[result], i} ;
            }

            min_index[nums[i]] = i ;
        }

        return {0, 1};

    }
};
