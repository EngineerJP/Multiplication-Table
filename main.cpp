//  prints a multiplication table

#include <iostream>
#include <iomanip>
using namespace std;

const int NUMCOLUMNS = 10;      // Number of columns in the table
const int COLWIDTH = 5;         // Number of spaces in the columns
const int NUMDIGITS = 2;        // Number of digits in a number

void printLine(char myChar) 
{
    int i, j;       //loop counters
    for(i=0; i<=NUMCOLUMNS; i++) {
        for(j = 0; j<COLWIDTH; j++) {
        cout << myChar;
    }
    cout << "+";
}
    cout << endl;
}

// Driver Code -- Main program
int main()
{
    int row, col;
    cout << "Multiplication Table" << endl << endl;
    printLine('-');
    cout << setw(5) << '*' << "|";
    for(col=1; col<=NUMCOLUMNS; col++) {
        cout << setw(5) << col << "|";
    }
    cout << endl;
    printLine('=');
    
    //print the Data Rows
    
    for(row=1; row<=NUMCOLUMNS; row++) {
        cout << setw(5) << row << "|";
        for(col=1; col<=NUMCOLUMNS; col++) {
            cout << setw(5) << (row*col) << "|";
        }
        cout << endl;
        if(row==10)
            printLine('=');
            else
            printLine('-');
}
    return 0;
}