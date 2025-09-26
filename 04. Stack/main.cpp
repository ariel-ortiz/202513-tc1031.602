#include <iostream>
#include "stack.h"

bool is_palindrome(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c : input) {
        s.push(c);
    }

    for (char c : input) {
        if (c != s.pop()) {
            return false;
        }
    }

    return true;
}

bool is_balanced(const std::string& input)
{
    Stack<char> s(input.size());

    for (char c : input) {
        switch (c) {
            case '(':
            case '[':
            case '{':
                s.push(c);
                break;
            case ')':
                if (s.is_empty() or s.pop() != '(') {
                    return false;
                }
                break;
            case ']':
                if (s.is_empty() or s.pop() != '[') {
                    return false;
                }
                break;
            case '}':
                if (s.is_empty() or s.pop() != '{') {
                    return false;
                }
                break;
        }
    }
    return true;
}

int main()
{
    Stack<int> s(5);

    std::cout << "Capacity = " << s.capacity() << "\n";
    std::cout << "Size = " << s.size() << "\n";

    s.push(4);
    s.push(8);
    s.push(15);
    s.push(16);
    s.push(23);
    s.pop();
    s.push(42);

    std::cout << "Capacity = " << s.capacity() << "\n";
    std::cout << "Size = " << s.size() << "\n";
    std::cout << "Peek = " << s.peek() << "\n";

    std::cout << is_palindrome("anitalavalatina") << "\n";
    std::cout << is_palindrome("anita") << "\n";
    std::cout << is_balanced("([]{})()") << "\n";
    std::cout << is_balanced("([]{}))()") << "\n";

    return 0;
}
