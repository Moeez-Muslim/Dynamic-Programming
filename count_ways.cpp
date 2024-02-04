#include <iostream>
#include <string>
using namespace std;

string add_numbers(string n1, string n2)
{
    int carry = 0;
    int i = n1.length() - 1;
    int j = n2.length() - 1;
    string result;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1, digit2;
        if (i >= 0)
            digit1 = n1[i--] - '0';
        else
            digit1 = 0;

        if (j >= 0)
            digit2 = n2[j--] - '0';
        else
            digit2 = 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result += to_string(sum % 10);
    }


    reverse(result.begin(), result.end());  
    return result;
}

string calculate_ways(int n)
{
    string* ways = new string[n + 1];
    ways[0] = "1";
    ways[1] = "2";

    for (int i = 2; i <= n; i++)
    {
        ways[i] = add_numbers(ways[i - 1], ways[i - 2]);
    }
    return ways[n - 1];
}

int main() 
{
    int n;
    cout << "Enter number of emails: ";
    cin >> n;
    cout << "Number of ways: " << calculate_ways(n) << endl;
    return 0;
}