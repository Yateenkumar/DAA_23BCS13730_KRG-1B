#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int,int> mp;
        for(int x : arr) mp[x]++;

        vector<vector<int>> ans;
        for(auto &p : mp) {
            ans.push_back({p.first, p.second});
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    vector<vector<int>> result = sol.countFreq(arr);
    for (const auto& pair : result) {
        cout << "Element: " << pair[0] << ", Frequency: " << pair[1] << endl;
    }
    return 0;
}
