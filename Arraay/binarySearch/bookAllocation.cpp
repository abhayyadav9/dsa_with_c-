

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> bookPage, int n, int m, int maxAllocationPage)
{


    int student = 1, page = 0;

    for (int i = 0; i < n; i++)
    {

        if( bookPage[i] > maxAllocationPage) return  false;
        if (page + bookPage[i] <= maxAllocationPage)
        {
            page = page + bookPage[i];
        }
        else
        {
            student++;
            page = bookPage[i];
        }
    }

    return student > m ? false:true;
}

int AllocationOfBooks(vector<int> bookPage, int n, int m)
{

    
    if(n<m){
        return -1;
    }
    // the range of our answe ris between the minmum 0  and the maximum the sum of pages

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + bookPage[i];
    }

    int start = 0;
    int answer = -1;
    int end = sum;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isValid(bookPage, n, m, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return answer;
}

int main()
{
    vector<int> bookPage = {2, 4, 3, 5,5,8,6,2}; // 4 books having diffrent pages we have to allocat to the student in contineous manner
    int n = bookPage.size();             // number of books
    int m = 2;                           // number of student we have to allocate to them
    // we have to find the least number of page after allocating to the stdent among the lagest pages

    cout<<AllocationOfBooks(bookPage, n, m);
    return 0;
}