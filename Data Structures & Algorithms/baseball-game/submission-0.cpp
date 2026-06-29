class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for (auto o : operations) {
            if (o == "C") {
                s.pop();

            } else if (o == "D") {
                if (!s.empty())
                    s.push(2 * s.top());

            } else if (o == "+") {
                int n1 = 0, n2 = 0;
                if (!s.empty()) {
                    n1 = s.top();
                    s.pop();
                }
                if (!s.empty()) {
                    n2 = s.top();
                }
                s.push(n1);
                s.push(n1 + n2);

            } else {
                s.push(stoi(o));
            }
        }
        int ans = 0;
        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }
        return ans;
    }

}
;