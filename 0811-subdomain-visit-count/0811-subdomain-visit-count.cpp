class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> map;

        for (string& s : cpdomains) {
            int space = s.find(' ');

            int count = stoi(s.substr(0, space));
            string domain = s.substr(space + 1);

            map[domain] += count;

            for (int i = 0; i < domain.size(); ++i) {
                if (domain[i] == '.') {
                    map[domain.substr(i + 1)] += count;
                }
            }
        }
        vector<string> ans;

        for (auto& it : map) {
            ans.push_back(to_string(it.second) + " " + it.first);
        }

        return ans;
    }
};