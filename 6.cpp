#include <iostream> // Include header file

using namespace std;

int main () //start of main function
{

    int values[10]; // Declares array and how many elements
    int small, big; // Declares integer
    big = small = values[0]; // Assigns element to be highest or lowest value

    for (int i = 0; i < 10; i++) // Counts to 20 and prompts the user for a value and stores it
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
    }

    for (int i = 0; i < 10; i++) // Works out the biggest number
    {
        if(values[i] > big) // Compare biggest value with current element
        {
            big = values[i];
        }
    }

    for (int i = 0; i < 10; i++) // Works out the smallest number
    {
        if (values[i] < small) // Compares smallest value with current element
        {
            small = values[i];
        }
    }

    cout << "The biggest number is " << big << endl; // Prints outs the biggest number
    cout << "The smallest number is " << small << endl; // Prints out the smallest number
}
