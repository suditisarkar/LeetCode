class Solution {
public:
    int n;
    string path, digit;
    vector<string> ans, store = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void backtrack(int cur)
    {
        if(path.size() == n)
        {
            ans.push_back(path);
            return;
        }
        string s = store[digit[cur] - '0'];
        for(char ch:s)
        {
            path.push_back(ch);
            backtrack(cur+1);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        if(digits.empty()) return ans;
        digit = digits;
        n = digit.size();
        backtrack(0);
        return ans;
    }
};