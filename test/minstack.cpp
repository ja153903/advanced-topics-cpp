#include <bits/stdc++.h>

class MinStack {
private:
  std::vector<std::pair<int, int>> stack;
public:

  MinStack() {}

  void push(int el) {
    std::cout << "pushing " << el << std::endl;
    if (!stack.empty())
      stack.push_back(std::make_pair(el, std::min(get_min(), el)));
    else
      stack.push_back(std::make_pair(el, el));
  }

  int get_min() {
    if (!stack.empty())
      return stack.back().second;
  }

  void pop() {
    stack.pop_back();
  }

  int peek() {
    return stack.back().first;
  }
};

int main() {
  MinStack stk;

  stk.push(3);
  stk.push(1);
  stk.push(-4);
  stk.push(5);

  std::cout << stk.peek() << std::endl;
  std::cout << "Current min: " << stk.get_min() << std::endl;
}
