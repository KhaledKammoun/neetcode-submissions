class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int result = 0;
        while (left < right) {
            result = max(result, min(heights[left], heights[right]) * (right - left));

            if (heights[left + 1] > heights[right - 1]) left++;
            else if (right > left) right--;
        }

        return result ;
    }
};
