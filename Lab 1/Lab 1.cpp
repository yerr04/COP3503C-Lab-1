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
      int i = 0;
            
		  cout << "Enter a data point (-1 to stop input): " << endl;
		  getline(cin, input);
      
      // checks if the input is valid using try/catch blocks
      // if the entry has no comma
      try {
        if (input.find(",") == -1) {
          throw 1;
        }
      }
      catch (int e) {
        cout << "Error: No comma in string." << endl;
        continue;
      }

      // if the entry has more than one comma
      try {
        if (input.find(",") != input.rfind(",")) {
          throw 2;
        }
      }
      catch (int e) {
        cout << "Error: Too many commas in input." << endl;
        continue;
      }

      // if entry after the comma is not an integer using stoi
      try {
        if (input.find(",") != -1) {
          stoi(input.substr(input.find(",") + 1, input.length()));
        }
      }
      catch (invalid_argument e) {
        cout << "Error: Comma not followed by an integer." << endl;
        continue;
      }

      // default case
      int commaIndex = input.find(",");
      first = input.substr(0, commaIndex);
      second = input.substr(commaIndex + 1, input.length());

      // prints out the data points
      cout << "Data string: " << first << endl;
      cout << "Data integer: " << second << endl;

      // appends the first and second strings to the vectors
      firstVector.push_back(first);
      secondVector.push_back(second);

      if (input == "-1") {
        break;
      }
      

        
		
        
        
        
    }
    
    
    

    return 0;
}