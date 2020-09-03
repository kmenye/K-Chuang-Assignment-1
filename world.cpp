#include <iostream>
using namespace std;

int main()
{
    string output1;
    string output2;
    int input;

    output1 = "hello world";
    output2 = "dlrow olleh";

    cout << "Which string would you like to see? (Press 1 or 2)";
    cin >> input;

    while (input < 1 || input > 2)
    {
        cout << "Invalid input, please enter 1 or 2. ";2
        cin >> input;
    }

    if (input == 1)
    {
        cout << output1;
    }

    else
    {
        cout << output2;
    }
    
    return 0;
    
}
