class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int result = 0;
        while (left < right) {
            result = max(result, min(heights[left], heights[right]) * (right - left));

            int result_left = min(heights[left + 1], heights[right]) * (right - (left + 1));
            int result_right = min(heights[left], heights[right - 1]) * ((right - 1) - left);

            // if (result_left > result_right && heights[left] < heights[left + 1]) left++;
            if (heights[left] < heights[right]) left++;
            else  right--;
        }

        return result ;
    }
};
