#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
    string digit;
    cin>>digit;
    try {
        ChekIsValueInt(digit);
    }
    catch (string line) {
        cout << line << endl;
    }
    catch (...) {
        cout << "Err" << endl;
    }
    Stack <int> stack(5);

    try {
       /* stack.Pop();*/
        for (size_t i = 0; i < 10; i++)
     {
         stack.Push(i);
         cout << "Top [" << i << "] : " << stack.Top() << endl;
     }
        cout << "Top : " << stack.Top() << endl;
        if (stack.empty())
        {
            cout << "Stack is empty!" << endl;
        }
        else {
            cout << "Stack is not empty!" << endl;
        }
    }
    catch (string line) {
        cout << line << endl;
    }
    catch (...) {
        cout << "Err!" << endl;
    }
    
    return 0;
}


