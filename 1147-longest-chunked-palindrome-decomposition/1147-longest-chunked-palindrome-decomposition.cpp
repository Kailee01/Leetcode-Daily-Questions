class Solution {
public:
    int longestDecomposition(string text) {
          int res = 0;
        int l = 0, r = text.length() - 1;
        stack<int> s;
        queue<int> q;
        while (l < r) {
            s.push(text[l++]);
            q.push(text[r--]);
            while (!s.empty() && s.top() == q.front()) {
                q.pop();
                s.pop();
            }
            if (s.empty())
                res += l <= r ? 2 : 1;
        }
        return res + 1;
    }
};