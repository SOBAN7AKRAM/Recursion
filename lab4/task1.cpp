#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int sumN(int n);
int sumOdd(int n);
double sumPower2(int n);
double sumPower3(int n);
int dividedby3(int n);
int dividedby2(int n);
string decimalToBinary(int n);
string integerToString(int n);
int GCD(int a, int b);
int searchFirstIndex(int* array, int start, int val);
int searchLastIndex(int* array, int start, int val);
int binarySearch(int* array, int start, int end, int mid, int val);
int power(int a, int b);


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

    // GCD
    // int a = 13, b = 48;
    // cout <<"GCD is : " << GCD(a, b); 

    // search First Index
    // int array[] = {1,2,3,4,5,6,7,8,9,10};
    // cout << "First Index is : " << searchFirstIndex(array, 0, 9);

    // search last Index
    // cout << "Last index is : " << searchLastIndex(array, sizeof(array), 9);

    // binary search
    // cout << "Index is : " << binarySearch(array, 0, sizeof(array), 0, 0);

    // power 0(y)
    cout << power(2, 3);

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
int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else 
    {
        return GCD(b, a % b);
    }
}
int searchFirstIndex(int* array, int start, int val)
{
    if (array[start] == val)
    {
        return start;
    }
    else 
    {
        return searchFirstIndex(array, start + 1, val);
    }
}
int searchLastIndex(int* array, int start, int val)
{
    if (array[start] == val)
    {
        return start;
    }
    else 
    {
        return searchLastIndex(array, start - 1, val);
    }
}
int binarySearch(int* array, int start, int end, int mid, int val)
{
    mid = start + (end - start) / 2;
    if (array[mid] == val)
    {
        return mid;
    }
    else if (start + 1 == end)
    {
        return -1;
    }
    else if (array[mid] > val)
    {
        end = mid;
    }
    else if (array[mid] < val)
    {
        start = mid;
    }
    
    return binarySearch(array, start, end, mid, val);
    
}
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}
int powerLog(int a, int b)
{
    
}