#include <iostream>
using namespace std;  

int input(void)
{
    int num[3], result = 1; 
    for (int i = 0; i < 3; i++)
    {
        cout << "Type in an integer: "; 
        cin >> num[i];
        result *= num[i]; 
    }
    cout << "multiply result is " << result << endl; 
    return 0; 
}