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

int main()
{
    string sentence = "Hello World";
    char *lower_sentence = strings::to_lower(sentence);
    printf("%c", lower_sentence);
}