#include <iostream>
#include <Windows.h>
#include <string>
#include <map>

using namespace std;

string get_user_input()
{
    string input;
    cin >> input;
    return input;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string ukrainian_word, english_word;
    map<string, string> dictionary;

    dictionary["Привіт"] = "Hello";
    dictionary["Кіт"] = "Cat";
    dictionary["Собака"] = "Dog";
    dictionary["Сонце"] = "Sun";
    dictionary["Погода"] = "Weather";

    cout << "This simple translator has these words to translate:\n";
    for (auto& element : dictionary)
    {
        cout << element.first << ' ';
    }

    cout << "\nEnter Exit in ukrainian for exit.\n";

    while (true)
    {
        cout << "Enter the Ukrainian word with a capital letter: ";
        ukrainian_word = get_user_input();

        if (ukrainian_word == "Вихід" || ukrainian_word == "вихід")
        {
            cout << "Exit";
            break;
        }

        if (dictionary.count(ukrainian_word) == 1) {
            english_word = dictionary[ukrainian_word];
            cout << "Translation into English: " << english_word << endl;
        }
        else {
            cout << "The word was not found in the dictionary\n";
        }

        cout << endl;
    }    

    return 0;
}