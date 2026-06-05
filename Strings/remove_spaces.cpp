#include <iostream>
using namespace std;

int main()
{
    string str = "my name is swapnila";

    int j = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str.resize(j);

    cout << str;

    return 0;
}