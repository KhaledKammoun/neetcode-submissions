class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> mult_from_start = {1};
        vector<int> mult_from_the_end = {1};

        for (int i = 0; i < nums.size(); i++) {
            mult_from_start.push_back(mult_from_start[i] * nums[i]);
         mult_from_the_end.push_back(mult_from_the_end[i] * nums[nums.size() - i - 1]); 
        }

        std::reverse(mult_from_the_end.begin(), mult_from_the_end.end());
        vector<int> result ;
        for (int i = 0 ; i < nums.size(); i++) {
            result.push_back(mult_from_start[i] * mult_from_the_end[i + 1]);
        }

        return result ;
    }
};
