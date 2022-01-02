#include <iostream>

char* Replace(char* src, const char from, const char to)
{
    char* beg = src;
    for (char* p = src; (*p = *src); p++, src++)
        if (*p == from)
            *p = to;
    return beg;
}

int main()
{
    char str[]="Hello my dear world!";

    std::cout << Replace(str, ' ', '!');
}