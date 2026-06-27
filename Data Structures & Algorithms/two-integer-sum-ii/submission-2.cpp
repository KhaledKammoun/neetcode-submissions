class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int total = numbers[right] + numbers[left] ;

            if (total == target) return {left + 1, right + 1};

            left += (total < target);
            right -= (total > target);
        }

        return {};
    }
};
