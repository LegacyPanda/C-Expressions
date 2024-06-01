#include "lib.h"

using namespace std;

int main()
{
    const int intJan = 83'000'000;
    const int intFeb = 12'000'000;
    const int intMar = 33'000'000;
    const int intApril = 49'000'000;
    const int intMay = 76'000'000;
    const int intJune = 52'000'000;
    const int intJul = 58'000'000;
    const int intAug = 14'000'000;
    const int intSep = 29'000'000;
    const int intOct = 91'000'000;
    const int intNov = 5'000'000;
    const int intDec = 100'000'000;

    const string strJan = "January";
    const string strFeb = "February";
    const string strMar = "March";
    const string strApril = "April";
    const string strMay = "May";
    const string strJune = "June";
    const string strJul = "July";
    const string strAug = "August";
    const string strSep = "September";
    const string strOct = "October";
    const string strNov = "November";
    const string strDec = "December";

    double dblAve = (intJan + intFeb + intMar + intApril + intMay + intJune + intJul + intAug + intSep + intOct + intNov + intDec) / 12.0;

    const double dblConvFac = 0.053;

    const double dblAveDoll = dblAve / dblConvFac;

    cout << strJan;
    cout << " " << intJan << endl;

    cout << strFeb;
    cout << " " << intFeb << endl;

    cout << strMar;
    cout << " " << intMar << endl;

    cout << strApril;
    cout << " " << intApril << endl;

    cout << strMay;
    cout << " " << intMay << endl;

    cout << strJune;
    cout << " " << intJune << endl;

    cout << strJul;
    cout << " " << intJul << endl;

    cout << strAug;
    cout << " " << intAug << endl;

    cout << strSep;
    cout << " " << intSep << endl;

    cout << strOct;
    cout << " " << intOct << endl;

    cout << strNov;
    cout << " " << intNov << endl;

    cout << strDec;
    cout << " " << intDec << endl;

    cout << "The yearly average in rands is:";
    cout << " R" << dblAve << endl;

    cout << "The yearly average in dollars is:";
    cout << " $" << dblAveDoll << endl;
    return 0;
}