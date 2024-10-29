#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str)
{
    int count = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '=')
        {
            count++;
        }
    }
    return count;
}

char* Change(char* str)
{
    size_t len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }

    char* tmp = new char[len * 2 + 1]; 
    char* t = tmp;
    size_t i = 0;

    while (i < len)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '=')
        {
            
            *t++ = '*';
            *t++ = '*';
            i++;
        }
        else
        {
            *t++ = str[i++];
        }
    }
    *t = '\0'; 

    for (size_t j = 0; j < len * 2; j++) 
    {
        str[j] = tmp[j];
    }
    str[len * 2] = '\0'; 

    return tmp; 
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    int occurrences = Count(str);
    cout << "Total occurrences of '+', '-', '=': " << occurrences << endl;

    Change(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
