class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int a = 0, b = nums[0] ;

        while (true) {
            if (a == nums[b]) {
                return a ;
            }

            a = b ;
            b = nums[a] ;
        }

    }
};
