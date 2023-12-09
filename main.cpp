#include "ParenthesesChecker.h" // include header file
// va;idate if input is balanced
bool ParenthesesChecker::isBalanced(const string& input) {
Stack<char> stack; //stack to store opening parentheses
for (char c : input) {
if (c == '(' || c == '[' || c == '{') {
stack.push(c); // push parenthese onto stack
} else if (c == ')' || c == ']' || c == '}') {
if (stack.empty()) {
return false;
}
char top = stack.top(); // top element from the stack
// see if the current closing parenthesis = the corresponding opening parenthesis
if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
stack.pop(); // if matched remove the corresponding opening parenthesis from the
stack
} else {
return false; // return false otherwise
}
}
}
return stack.empty(); // check if any unmatched opening parentheses are left in stack
}
