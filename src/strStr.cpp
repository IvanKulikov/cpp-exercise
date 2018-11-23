#include <string>

using namespace std;

int main() 
{
    string hay = "foobarbaz";
    string needle = "oba";

    size_t j = 0;
    size_t start = -1;
    for (size_t i = 0; i < hay.size(); i++) 
    {
        if (hay[i] == needle[j]) 
        {
            if (start == -1)
                start = i;
            j++;
            if (j == needle.size())
                return start;
        }
        else 
        {
            j = 0;
            start = -1;
        }
    }
    return start;
}