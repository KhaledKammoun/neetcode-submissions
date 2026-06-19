class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        auto comp = [&](int a, int b) { return count[a] > count[b]; };
        priority_queue<int, vector<int>, decltype(comp)> pq(comp);

        for (int num: nums) {
            count[num]++;
        }

        for (auto& pair : count) {
            int num = pair.first;

            if (pq.size() < k) {
                pq.push(num);
            } else if (count[pq.top()] < count[num]) {
                pq.pop() ;
                pq.push(num);
            }
        }

        vector<int> result ; 
        while (!pq.empty()) {
            result.push_back(pq.top()) ;
            pq.pop();
        }

        return result ;
    }
};
