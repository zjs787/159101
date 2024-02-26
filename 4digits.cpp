#include <iostream>
using namespace std; 

int digit, w1, w2, w3, w4, r1, r2, r3; 

int main(void)
{
    do 
    { 
        cout << "Type in a 4-digit interger: "; 
        cin >> digit; 
    }
    while (digit < 1000 || digit > 9999); 

    w1 = digit / 1000; 
    r1 = digit % 1000; 
    w2 = r1 / 100; 
    r2 = r1 % 100; 
    w3 = r2 / 10; 
    r3 = r2 % 10; 
    w4 = r3; 
    cout << w1 << endl << w2 << endl << w3 << endl << r3; 
    
}