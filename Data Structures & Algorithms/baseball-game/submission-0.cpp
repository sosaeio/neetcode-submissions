class Solution {
public:
    int calPoints(vector<string>& operations) {
        int total = 0;
        stack<int> opStack;
        for(auto &ch : operations){
            if(ch == "+"){
                int top = opStack.top(); // 2
                opStack.pop();
                int newTop = top + opStack.top(); // 2 + 1
                opStack.push(top);
                opStack.push(newTop);
            }else if(ch == "C"){
                opStack.pop();
            }else if(ch == "D"){
                int newScore = opStack.top() * 2;
                opStack.push(newScore);
            }else{
                opStack.push(stoi(ch));
            }
        }

        while(!opStack.empty()){
            int val = opStack.top();
            total += val;
            opStack.pop();
        }
        return total;
    }
};