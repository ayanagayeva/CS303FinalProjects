Purpose
The Parentheses Checker program is designed to evaluate whether a given string
containing different types of parentheses (round, square, and curly brackets) is
balanced or not. Additionally, it provides functionalities to count unmatched
parentheses, check for consecutive balanced parentheses, and reverse the input string
to assess balance.

Included Data Structures
Stack
The code implements a generic stack (Stack<T>) using a vector to handle storing and
manipulating elements. This stack is used in the ParenthesesChecker class to manage
parentheses.

Functionalities
1. Check Balanced Parentheses
● Determines whether the input string contains balanced parentheses.
2. Count Unmatched Parentheses
● Calculates the number of unmatched parentheses within the input string.
3. Check Consecutive Balanced Parentheses
● Identifies the longest sequence of consecutive balanced parentheses within the
input.
4. Reverse Input String for Balance Check
● Reverses the input string and evaluates if the reversed string contains balanced
parentheses.
Files
● main.cpp: Contains the main program that interacts with the user and utilizes the
ParenthesesChecker class.
● ParenthesesChecker.h: Declaration of the ParenthesesChecker class.
● ParenthesesChecker.cpp: Implementation of the ParenthesesChecker class
methods.
● Stack.h: Implementation of the stack data structure used in
ParenthesesChecker.
