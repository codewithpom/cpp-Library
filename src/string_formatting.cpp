#include <iostream>
#include <string>


namespace strings
{
    int lower(char string[], int size)
    {
        char *return_string = (char *)malloc(size * sizeof(char *));
        memcpy(return_string, string, size * sizeof(char *));
        int element;

        for (int i = 0; i < size; i++)
        {
            string[i] = tolower(string[i]);
            
        }
        
        return 0;
    }


} // namespace strings

int main()
{
    printf("%c", strings::UPPER_CASE_LETTERS[0]);
}