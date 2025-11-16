#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "aabaabababaabaabaabdfjabaitgjbaa";
    string ptrn = "baaabaa";
    unordered_map<char, int> mp;
    int windowSize = ptrn.size();
    int n = s.size();

   for(char c:ptrn){
    mp[c]++;
   }
    cout << windowSize << endl;

    cout << mp['b'] << endl;

    int start = 0, end = 0;
    int ans = 0;
    int count = mp.size();
    cout << count << endl;

    while (end < n)
    {

        if (mp.find(s[end]) != mp.end())
        {
            mp[s[end]]--;
            if (mp[s[end]] == 0)
            {
                count--;
            }
        }
        if (end - start + 1 < windowSize)
        {
            end++;
        }
        else if (end - start + 1 == windowSize)
        {

            if (count == 0)
            {
                ans++;
            }

            if (mp.find(s[start]) != mp.end())
            {

                if(mp[s[start]] ==1){
                    count ++;
                }
                mp[s[start]]++;

            }

            start++;
            end++;
        }
    }

    cout << "this is number of Occurance " << ans;

    return 0;
}