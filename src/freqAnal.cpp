#include <string>
#include <algorithm>
#include <map>

using namespace std;

void process(string input) 
{
    map<char, uint> result;

    for (size_t i = 0; i < input.size(); i++)
    {
        map<char, uint>::iterator foo = result.find(result.begin(), result.end(), input[i]);
        if (foo != NULL)
        {
            ++foo;
        }
        else 
        {
            
        }
    }
}