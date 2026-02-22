class Solution {
public:
    int solve(vector<string>& arr) {
        stack<int> s;

        for (string op : arr) {

            if (op == "+") {
                int top1 = s.top();
                s.pop();
                int top2 = s.top();
                s.push(top1);
                s.push(top1 + top2);
            } else if (op == "D") {
                s.push(2 * s.top());
            } else if (op == "C") {
                s.pop();
            } else {
                s.push(stoi(op));
            }
        }
        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        return sum;
    }

    int calPoints(vector<string>& operations) { return solve(operations); }
};