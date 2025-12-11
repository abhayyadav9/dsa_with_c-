#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string str = "abccbca";
    int n = str.size();
    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < n ; i++)
    {
        //odd string
        int l = i, r = i;

        while (l >= 0 && r < n  && str[l] == str[r])
        {

            if (r-l + 1 > maxLen)
            {
                maxLen = r-l + 1;
                start = l;
            }
            l--;
            r++;
        }


        //fro even
        l=i; i=i+1;

        while(l>=0  &&r <n  &&  str[l] == str[r]){
            if(r-l+1 > maxLen){
                maxLen = r-l+1;
                start=l;
            }
            l--;
            r++;


        }
    }

    cout << str.substr(start,maxLen);

    return 0;
}