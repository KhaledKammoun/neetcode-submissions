class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int result = 0 ;

        while(left < height.size() && height[left] == 0) left++;

       int right = left ;
       while (left < height.size()) {
            while (height[left] > height[right]) right++;

            int  total = 0;
            for (int i = left ; i < right; i++) total += max(min(height[left], height[right]) - height[i], 0);

            result += total ;
            left++;
       }

        return result ;
    }
};
