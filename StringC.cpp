#include <iostream>
#include <string>
using namespace std;



string StringChallenge(string str)
{

    for (int i = 0; i < str.length(); i++)
    {

        // Remplacez chaque lettre de la chaîne par la lettre qui la suit dans l'alphabet
        // (c'est-à-dire que c devient d, z devient a).
        if ((str[i] > 'a') && (str[i] < 'z'))
        {
            str[i]++;
            if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
            {
                str[i] = str[i] - 'a' + 'A';
                // cout << putchar(toupper(str[i]))<<endl;
            }
        }
    }

    return str;
}

int main(int argc, char const *argv[])
{
    string str = {"fun times!"};

    cout << StringChallenge(str) << endl;

    /* code */
    return 0;
}