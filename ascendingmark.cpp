#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    int ID; 
    int counter, i, j; 
    float average, mark, total_mark = 0.0; 
    int abv_id[7];
    float abv_mark[7]; 
    // to calculate average mark for the class; 
    i = 0; 
    for (counter = 0; counter < 7; counter++)
    {
        cout << "Enter the student ID: ";
        cin >> ID; 
        abv_id[i] = ID; 
        cout << "Enter the mark for ID " << ID << ": ";
        cin >> mark;
        abv_mark[i] = mark; 
        total_mark = total_mark + mark; 
        i ++; 
    }
    average = total_mark / 7.0; 
    cout << "The average test mark for the class is " << fixed << setprecision(1) << average << endl;  
    // deleting elements from corresponding arrays if mark below average mark; 
    int num = 7; 
    for (i = 0; i < num;) 
    {   
        if (abv_mark[i] < average)
        {
            for (j = i; j < num-1; j ++)
            {
                abv_mark[j] = abv_mark[j+1]; 
                abv_id[j] = abv_id[j+1]; 
            }
            num--;
        } 
        else
        {
            i++ ; 
        }
    }
    // create a new two-dimensional array for sorting ID or mark; 
    float abv[7][2], temp[1][2]; 
    for (i = 0; i < num; i ++)
    {
        abv[i][0] = abv_id[i];  // abv[num][0] = ID; 
        abv[i][1] = abv_mark[i]; // abv[num][1] = mark; 
    }
    // bubble sort 
    for (i = 0; i < num; i ++)
    {
        for (j = 0; j < num-1; j++)
        {
            if (abv[j][0] > abv[j+1][0])
            {
                temp[0][0] = abv[j+1][0]; 
                temp[0][1] = abv[j+1][1]; 
                abv[j+1][0] = abv[j][0];
                abv[j+1][1] = abv[j][1]; 
                abv[j][0] = temp[0][0];
                abv[j][1] = temp[0][1]; 
            }
        }
    }
    cout << "Those who achieved higher than average mark: \n";
    cout.width(3); 
    cout << "ID";
    cout << "      " << "Mark" << endl; 
    for (i = 0; i < num; i++)
    {
        cout << int(abv[i][0]);
        cout.width(7);
        cout << fixed << setprecision(1) << abv[i][1] << endl; 
    }
}