#include <iostream>
using namespace std;

class my_string
{

private:
    char str[30];

public:
    void length(string str);
    void to_lower(string str);
    void to_upper(string str);
};

void my_string::to_lower(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        cout << "\n The string in lower case: " << str;
    }
}

void my_string::to_upper(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    cout << "\n The string in upper case: " << str;
}

int main()
{
    my_string str;
    string str1;
    cout << "Enter the string ";
    getline(cin, str1);
    str.to_lower(str1);
    1 str.to_upper(str1);
    return 0;
}