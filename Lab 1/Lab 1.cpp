#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{

    /* Type code here. */
    /* Overall flow of the program:
    Get some input for the title
    Get some input for column header #1
    Get some input for column header #2

    Until the user types "-1":
    Get input for a string
    Validate input
    If valid...
       Split
       Validate second half of input
       If also valid...
          Store separate pieces

    Print out data in table format

    Print out data in chart format
    */
    string title;
	string col1;
	string col2;
	string input;
	string first;
	string second;
	vector<string> firstVector;
	vector<string> secondVector;

    
    
	cout << "Enter a title: " << endl;
	getline(cin, title);
	cout << "You entered: " << title << endl;
	cout << "Enter the column 1 header: " << endl;
	getline(cin, col1);
	cout << "You entered: " << col1 << endl;
	cout << "Enter the column 2 header: ";
	getline(cin, col2);
	cout << "You entered: " << col2 << endl;
    
    while (input != "-1") {
		cout << "Enter a data point (-1 to stop input): " << endl;
		getline(cin, input);
        
		
        
        
        
    }
    
    
    

    return 0;
}