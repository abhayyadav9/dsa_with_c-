#include <iostream>
#include <string>

using namespace std;

int main()
{
    string chars = "aabbbcccd"; // input string
    int n = (int)chars.length();
    int write = 0;               // next position to write compressed output

    int i = 0;                   // read pointer
    while (i < n)
    {
        char ch = chars[i];      // current run character
        int count = 0;
        // count length of this run
        while (i < n && chars[i] == ch)
        {
            ++count;
            ++i;
        }
        // write the character
        chars[write++] = ch;
        // write the count digits only if > 1
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char d : cnt)
                chars[write++] = d;
        }
    }
    // shrink string to the compressed length
    chars.resize(write);
    cout << chars << endl; // output compressed form
    return 0;
}