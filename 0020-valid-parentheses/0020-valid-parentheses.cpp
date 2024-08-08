#include <stack>
#include <string>

class Solution {
 public:
  bool isValid(std::string s) {
    std::stack<char> stack;

    for (const char c : s)
      if (c == '(')
        stack.push(')');
      else if (c == '{')
        stack.push('}');
      else if (c == '[')
        stack.push(']');
      else if (stack.empty() || pop(stack) != c)
        return false;

    return stack.empty();
  }

  int pop(std::stack<char>& stack) {
    const int c = stack.top();
    stack.pop();
    return c;
  }
};
