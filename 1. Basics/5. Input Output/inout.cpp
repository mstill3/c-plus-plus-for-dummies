#include <iostream>
using namespace std;

void print(string str)
{
    cout << str;
}

void println(string str)
{
    cout << str << '\n';
}

int main()
{
    // Console Out
    cout << "Hello world!"; // print Hello world! to console

    int x{ 5 }; // define integer variable x, initialized with value 5
    cout << x; // print value of x (5) to console

    cout << "x is equal to: " << x;
    cout << "Hello" << " world!";

    cout << "Hi!" << endl; // std::endl will cause the cursor to move to the next line of the console
    cout << "My name is Alex." << endl;

    // Best practice to use \n instead
    cout << "x is equal to: " << x << '\n'; // Using '\n' standalone


    // Console In
    cout << "Enter a number: "; // ask user for a number

    int num{ 0 }; // define variable x to hold user input (and zero-initialize it)
    cin >> num; // get number from keyboard and store it in variable x

    cout << "You entered " << num << '\n';



    cout << "Enter two numbers separated by a space: ";

    int n1{ }; // define variable n1 to hold user input (and zero-initialize it)
    int n2{ }; // define variable n2 to hold user input (and zero-initialize it)
    cin >> n1 >> n2; // get two numbers and store in variable x and y respectively

    cout << "You entered " << n1 << " and " << n2 << '\n';


    print("goose");
    println("chicken");

    return 0;
}