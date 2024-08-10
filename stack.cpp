#include <iostream>
#include <cstring>
#include <stack>
//Consider the program below
using namespace std;
int main()
{
   
    char input[20];
    char character;
    cin >> input;
    //• Fill in the blank at LINE-1 to declare a stack variable st
    stack<char> st; // LINE-1
    for (int i = 0; i < strlen(input); i++)
    //Fill in the blank at LINE-2 to push values into the stack
        st.push(input[i]); // LINE-2
    for (int i = 0; i < strlen(input); i++)
    {
        //Fill in the blank at LINE-3 with the appropriate statement
        character = st.top(); // LINE-3
        cout << character;
        st.pop();
        character=st.top();
        cout << character;
    }
    return 0;
}