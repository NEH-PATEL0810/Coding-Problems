class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> map;

        for (string& path : paths) {
            stringstream ss(path);

            string dir;
            ss >> dir;

            string file;
            while (ss >> file) {
                int open = file.find('(');
                int close = file.find(')');

                string filename = file.substr(0, open);
                string content = file.substr(open + 1, close - open - 1);

                string fullPath = dir + "/" + filename;
                map[content].push_back(fullPath);
            }
        }
        vector<vector<string>> ans;

        for (auto& it : map) {
            if (it.second.size() > 1) {
                ans.push_back(it.second);
            }
        }

        return ans;
    }
};