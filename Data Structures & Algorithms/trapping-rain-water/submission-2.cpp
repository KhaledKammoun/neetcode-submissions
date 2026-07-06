class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = 0;
        int result = 0 ;

        while (left < height.size() && height[left] == 0) left++;

        right = left ;

        if (right == height.size()) return 0 ;

        while (left < height.size()) {
            int current_space = 0 ;
            while (right < height.size() && height[left] >= height[right]){
                if (left != right && height[left] <= height[right]) break ;
                current_space += height[left] - height[right] ;
                right++;
            }

            if (right < height.size() && height[right] >= height[left]) result += current_space ;
            

            if (left == right) right++;

            if (right == height.size()) {left++ ;right = left ;}
            else left = right ;
        }

        return result ;
    }
};
