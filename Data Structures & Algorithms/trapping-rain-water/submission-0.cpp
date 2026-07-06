class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = 0;
        int result = 0 ;
        while (left < height.size()) {
            int current_space = 0 ;
            while (height[left] >= height[right] && right + 1 < height.size()){
                right++;
                current_space += (height[left] - height[right]) ;
            }


            result += current_space ;


            if (left == right) right++;
         
            left = right ;
        }

        return result ;
    }
};
