#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int sumN(int n);
int sumOdd(int n);
double sumPower2(int n);
double sumPower3(int n);
int dividedby3(int n);
int dividedby2(int n);
string decimalToBinary(int n);
string integerToString(int n);


int main()
{
    // sum of natural numbers
    // int naturalN = sumN(5);
    // cout << naturalN <<endl;

    // // sum of odd numbers
    // int odd = sumOdd(13);
    // cout << odd << endl;

    // // sum of power number 2
    // cout << sumPower2(32) << endl;

    // // sum of power number 3
    // cout << sumPower3(3) << endl;

    // // sum of divided by 3
    // cout << dividedby3(9) << endl;

    // // sum of divided by 2
    // cout << dividedby2(16) << endl;

    // decimal to binary
    // cout << decimalToBinary(42) << endl;

    // // integer to string
    // cout << integerToString(54353) << endl;
}


int sumN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumN(n-1);
}
int sumOdd(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOdd(n-2);
}

double sumPower2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return pow(2, n) + sumPower2(n - 1);
}
double sumPower3(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return pow(3, n) + sumPower3(n - 1);
}
int dividedby3(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + dividedby3(n / 3);
}
int dividedby2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + dividedby2(n / 2);
}
string decimalToBinary(int n)
{
    if (n == 0 || n == 1)
    {
        return to_string(n);
    }
    return decimalToBinary(n / 2) + ((n % 2 == 0) ? "0" : "1"); 
}

string integerToString(int n)
{
    if (n < 10)
    {
        return to_string(n);
    }
    return integerToString(n / 10) + (to_string(n % 10));
}
