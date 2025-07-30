class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int count = 0;
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum = sum + arr[i];
            if (sum == k) {
                count++;
            }
            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }
            mp[sum]++;
        }

        return count;
    }
};