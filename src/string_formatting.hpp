#include <iostream>
#include <string>
using namespace std;

namespace strings
{
    string to_lower(string s)
    {
        for (char &c : s)
            c = tolower(c);
        return s;
    }
} // namespace strings
