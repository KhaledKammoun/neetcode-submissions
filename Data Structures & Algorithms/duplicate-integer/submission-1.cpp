class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<long long, bool> visited;
        for (int i = 0;i < nums.size(); i++) {
            if (visited[nums[i]]) {
                return true ;
            }

            visited[nums[i]] = true ;
        }

        return false ;
    }

    
};