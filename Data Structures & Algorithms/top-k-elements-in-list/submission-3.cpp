class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        queue<int> q ;
        unordered_map<int, int> count;
        unordered_map<int, bool> visited ;
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
            if (visited[nums[i]]) continue ;
            if (q.size() < k) {
                q.push(nums[i]);
                visited[nums[i]] = true ;
            } else if (count[q.front()] < count[nums[i]]) {
                visited[q.front()] = false ;
                q.pop() ;
                q.push(nums[i]);
                visited[nums[i]] = true ;
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
