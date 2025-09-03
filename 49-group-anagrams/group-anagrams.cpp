class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(auto &idx : strs){
            string temp = idx;
            sort(idx.begin(),idx.end());
            mp[idx].push_back(temp);
        }

        vector<vector<string>> result;

        for(auto &idx : mp){
            result.push_back(idx.second);
        }
        return result;
    }
};