#include <string>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

void process(string input) 
{
    map<char, uint> result;

    for (size_t i = 0; i < input.size(); i++)
    {
        result[input[i]]++;
    }

    for_each(result.begin(), result.end(), [](auto el) 
    {
        cout << el.first << ": " << el.second << endl;
    });
}

int main(int argc, char** argv)
{
    string in = "lksmdf;ojsaoofiomefoifomsa;odfm;oasidmc;oasdkmc;oiqej;ofkm;asokmdf";
    process(in);
}