class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        queue<int> q ;
        unordered_map<int, int> count;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;

            if (q.size() < k) {
                q.push(nums[i]);
            } else if (nums[i] != q.back()) {
                if (count[q.front()] < count[nums[i]]) {
                    q.pop() ;
                    q.push(nums[i]);
                }
            }
        }

        vector<int> result ; 
        for (int i = 0; i < k; i++) {
            result.push_back(q.front()) ;
            q.pop();
        }

        return result ;
    }
};
