#include <iostream>
#include <string>

using namespace std;

bool isFrequencySame(int frq[], int windowFrq[])
{

    for (int i = 0; i < 26; i++)
    {
        if (frq[i] != windowFrq[i])
        {
            return false;
        }
    }
    return true;
}

bool searchWindow(string s1, string s2)
{
    int frq[26] = {0};
    int windowSize = (int)s1.length();
    int n = (int)s2.length();
    if (windowSize == 0) return true;
    if (windowSize > n) return false;

    // build frequency of pattern s1 (iterate only over s1, not fixed 26)
    for (char c : s1)
        frq[c - 'a']++;

    // slide over s2 for every window start
    for (int start = 0; start + windowSize <= n; start++)
    {
        int windowFrq[26] = {0};
        // build this window's frequency
        for (int k = 0; k < windowSize; k++)
        {
            char c = s2[start + k];
            windowFrq[c - 'a']++;
        }
        if (isFrequencySame(frq, windowFrq))
        {
            return true; // found an anagram
        }
    }
    return false; // no match
}

int main()
{
    string s1 = "ab";
    string s2 = "eidfhaiwob";
    if (searchWindow(s1, s2))
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}
