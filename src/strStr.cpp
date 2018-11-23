#include <string>
#include <iostream>

using namespace std;

int strStr(string hay, string needle)
{
    size_t j = 0;
    size_t start = -1;
    for (size_t i = 0; i < hay.size(); i++) 
    {
        if (hay[i] == needle[j]) 
        {
            if (start == -1)
                start = i;
            j++;
            if (j == needle.size() - 1)
                return start;
        }
        else 
        {
            if (start != -1)
                i--; 

            j = 0;
            start = -1;
        }
    }
    return start;
}

int main() 
{
    string hay = "ooobafbarbazoba";
    string needle = "oba";
    int index = strStr(hay, needle);

    cout << index << endl;
}