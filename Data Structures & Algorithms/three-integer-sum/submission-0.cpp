class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Sort nums
        sort(nums.begin(), nums.end());
        vector<vector<int>> result ;

        unordered_map<string, bool> visited;
        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int total = nums[i] + nums[left] + nums[right];

                if (total == 0) {
                    vector<int> sorted_sub_nums({nums[i], nums[left], nums[right]});
                    sort(sorted_sub_nums.begin(), sorted_sub_nums.end());
                    string key =  to_string(sorted_sub_nums[0]) + "::" + to_string(sorted_sub_nums[1]) + "::" + to_string(sorted_sub_nums[2]);
                    if (!visited[key]) {
                        result.push_back({sorted_sub_nums[0], sorted_sub_nums[1], sorted_sub_nums[2]});
                        visited[key] = true;
                    }

                }

                if (total < 0) left++;

                else right--;
            }
        }

        return result ;
    }
};
