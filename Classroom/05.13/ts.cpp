#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int, int> m;
            for(int i = 0; i < nums.size(); i++) {
                int complemento = target - nums[i];
                if(m.find(complemento) != m.end()) {
                    return {m[complemento], i};
                }
                m[nums[i]] = i;
            }
            return {};
        }
    };