#include <string>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

void process(string input) 
{
    map<char, uint> result;

    for (auto ch : input)
        result[ch]++;

    for (auto el : result)
        cout << el.first << ": " << el.second << endl;
}

int main(int argc, char** argv)
{
    cout << argv[1] << endl;
    process(argv[1]);
}