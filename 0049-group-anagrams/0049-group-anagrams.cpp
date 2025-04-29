class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(auto& s : strs){
            vector<int> count(26, 0);

            for(auto& c : s){
                count[c - 'a']++;
            }

            string key = to_string(count[0]);
            for(int i = 0; i < 26; ++i){
                key += '#' + to_string(count[i]);
            }
            res[key].push_back(s);
        }

        vector<vector<string>> ans; 
        for(auto& pair : res){
            ans.push_back(pair.second);
        }

        return ans;
    }
};

// Time complexity: O(m * n)
// - m = number of strings
// - n = average length of each string
// For each string, we scan its characters (O(n)) and build a key of length 26 (constant).
// So total = O(m * n).

// Space complexity: O(m * n)
// - For storing the counts (temporary O(26) ~ O(1))
// - Output list takes O(m * n) space to store all strings.
// - Hash map keys take O(m * 26) ~ O(m) space.


// Approach 2: Sorting

// unordered_map<string, vector<string>> res;
// for(auto& s : strs){
//     string sortedS = s;
//     sort(sortedS.begin(), sortedS.end());
//     res[sortedS].push_back(s);
// }
// vector<vector<string>> ans;
// for(auto& pair : res){
//     ans.push_back(pair.second);
// }
// return ans;

// Time complexity: O(m * n log n)
// - m = number of strings
// - n = average length of each string
// For each string:
// - Sorting takes O(n log n)
// - Inserting into hashmap takes O(1) average
// Total: O(m * n log n)

// Space complexity: O(m * n)
// - To store all strings inside hash map and final answer list.

