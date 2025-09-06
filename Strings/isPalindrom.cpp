#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isAlphaNumeric(char c)
{
    return (c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z');
}

bool isPalindrome(string s)
{
    int start = 0, end = s.length() - 1;

    while (start < end)
    {
        // agar start invalid hai -> aage badhao
        if (!isAlphaNumeric(s[start])) {
            start++;
            continue;
        }

        // agar end invalid hai -> peeche hatao
        if (!isAlphaNumeric(s[end])) {
            end--;
            continue;
        }

        // dono compare karo
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        start++;
        end--;
    }
    return true;
}

int main()
{
    string s = "ac3?e3c$a";

    if (isPalindrome(s)) {
        cout << "palindrome";
    } else {
        cout << "not palindrome";
    }

    return 0;
}
