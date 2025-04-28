class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(int i = 0; i < strs[0].size(); i++){
            for(const auto& str : strs){
                if(i == str.length() || str[i] != strs[0][i]){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

// if(strs.size() == 0){
//     return "";
// }
// if(strs.size() == 1){
//     return strs[0];
// }

// Approach 1: Horizontal

// string commonPrefix = strs[0];
// for(int i = 1; i < strs.size(); i++){
//     int j = 0;
//     while(j < min(commonPrefix.size(), strs[i].size())){
//         if(commonPrefix[j] != strs[i][j]){
//             break;
//         }
//         j++;
//     }
//     commonPrefix = strs[i].substr(0, j);
// }
// return commonPrefix;


// Approach 2: Vertical

// string prefix = "";
// for(int i = 0; i < strs[0].length(); i++){
//     char prefixChar = strs[0][i];
//     for(int j = 0; j < strs.size(); j++){
//         if(prefixChar != strs[j][i]){
//             return prefix;
//         }
//     }
//     prefix += prefixChar;
// }
// return prefix;




// Approach 3: Sorting

// sort(strs.begin(), strs.end());
// string first = strs.front();
// string last = strs.back();
// int len = min(first.length(), last.length());
// int i = 0;
// while (i < len && first[i] == last[i]) {
//     i++;
// }
// return first.substr(0, i);

// sort(strs.begin(), strs.end());
// for(int i = 0; i < min(strs[0].size(), strs.back().size()); i++){
//     if(strs[0][i] != strs.back()[i]){
//         return strs[0].substr(0, i);
//     }
// }
// return substr[0];