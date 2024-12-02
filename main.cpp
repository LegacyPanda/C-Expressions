#include <iostream>
#include <string>

using namespace std;

int main()
{
    // The name of each month must be stored as a constant string variable
    string const strJan = "January";
    string const strFeb = "February";
    string const strMar = "March";
    string const strApr = "April";
    string const strMay = "May";
    string const strJun = "June";
    string const strJul = "July";
    string const strAug = "August";
    string const strSep = "September";
    string const strOct = "October";
    string const strNov = "November";
    string const strDec = "December";

    // Each month’s revenue must be stored in integer variables. You may hardcode the values into the program.
    int intJan = 83'000'000;
    int intFeb = 12'000'000;
    int intMar = 33'000'000;
    int intApr = 49'000'000;
    int intMay = 76'000'000;
    int intJun = 52'000'000;
    int intJul = 58'000'000;
    int intAug = 14'000'000;
    int intSep = 29'000'000;
    int intOct = 91'000'000;
    int intNov = 5'000'000;
    int intDec = 100'000'000;


    // Calculate the average revenue for the year using a C++ expression and store the result in a double variable.
    double dblJan = intJan / 12;
    double dblFeb = intFeb / 12;
    double dblMar = intMar / 12;
    double dblApr = intApr / 12;
    double dblMay = intMay / 12;
    double dblJun = intJun / 12;
    double dblJul = intJul / 12;
    double dblAug = intAug / 12;
    double dblSep = intSep / 12;
    double dblOct = intOct / 12;
    double dblNov = intNov / 12;
    double dblDec = intDec / 12;

    // Create a const variable to store the conversion factor from rands to dollars
    double const dblConv = 0.053;

    // Convert the average revenue from rands to dollars and store it in a double variable.
    double dblUS_Jan = dblJan * dblConv;
    double dblUS_Feb = dblFeb * dblConv;
    double dblUS_Mar = dblMar * dblConv;
    double dblUS_Apr = dblApr * dblConv;
    double dblUS_May = dblMay * dblConv;
    double dblUS_Jun = dblJun * dblConv;
    double dblUS_Jul = dblJul * dblConv;
    double dblUS_Aug = dblAug * dblConv;
    double dblUS_Sep = dblSep * dblConv;
    double dblUS_Oct = dblOct * dblConv;
    double dblUS_Nov = dblNov * dblConv;
    double dblUS_Dec = dblDec * dblConv;

    // Output the monthly revenue table shown above in a user-friendly way.
    cout << "Monthly revenue" << endl;
    cout << "Month" << "    |" << "Revenue" << endl;
    cout << strJan << "  |" << "R " << intJan << endl;
    cout << strFeb << " |" << "R " << intFeb << endl;
    cout << strMar << "    |" << "R " << intMar << endl;
    cout << strApr << "    |" << "R " << intApr << endl;
    cout << strMay << "      |" << "R " << intMay << endl;
    cout << strJun << "     |" << "R " << intJun << endl;
    cout << strJul << "     |" << "R " << intJul << endl;
    cout << strAug << "   |" << "R " << intAug << endl;
    cout << strSep << "|" << "R " << intSep << endl;
    cout << strOct << "  |" << "R " << intOct << endl;
    cout << strNov << " |" << "R " << intNov << endl;
    cout << strDec << " |" << "R " << intDec << endl;

    cout << endl;

    /* Output the following below the table:
        Average revenue in rands.
        Average revenue in dollars */
    cout << "Average revenue" <<endl;
    cout << "Rands" << "        |" << "Dollars" << endl;
    cout << "R " << dblJan << "|" << "$ " << dblUS_Jan << endl;
    cout << "R " << dblFeb << "      |" << "$ " << dblUS_Feb << endl;
    cout << "R " << dblMar << "   |" << "$ " << dblUS_Mar << endl;
    cout << "R " << dblApr << "|" << "$ " << dblUS_Apr << endl;
    cout << "R " << dblMay << "|" << "$ " << dblUS_May << endl;
    cout << "R " << dblJun << "|" << "$ " << dblUS_Jun << endl;
    cout << "R " << dblJul << "|" << "$ " << dblUS_Jul << endl;
    cout << "R " << dblAug << "|" << "$ " << dblUS_Aug << endl;
    cout << "R " << dblSep << "|" << "$ " << dblUS_Sep << endl;
    cout << "R " << dblOct << "|" << "$ " << dblUS_Oct << endl;
    cout << "R " << dblNov << "     |" << "$ " << dblUS_Nov << endl;
    cout << "R " << dblDec << "|" << "$ " << dblUS_Dec << endl;

    // Figure out how to properly display doubles
    cout << endl;

    return 0;
}
