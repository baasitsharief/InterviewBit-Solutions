static unordered_map<char, int> romandata = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
int Solution::romanToInt(string s) {
    int res = 0;
    int prevNum = 0;
    for(int i = s.size()-1; i>=0; i--){
        int n = romandata[s[i]];
        res += (prevNum<=n)?n:-n;
        prevNum = n;
        }
    return res;
}
