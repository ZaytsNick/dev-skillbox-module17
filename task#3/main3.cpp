#include <iostream>
bool substr(const char *str, const char *substr)
{
    int i(0);
    while (*(str + i) != '\0')
    {
        int j(0);
        while (*(substr+j)!='\0')
        {
            if(*(str+i+j)!=*(substr+j))
            break;
            if(*(substr+j+1)=='\0')
            return true;
            ++j;
        }
        
        ++i;
    }
    return false;
}
int main()
{
    const char *a = "Hello world";
    const char *b = "wor";
    const char *c = "banana";
    std::cout << substr(a, b) << " " << substr(a, c);
    // true false
}