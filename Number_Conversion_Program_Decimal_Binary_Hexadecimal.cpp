#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function 1: Decimal to Binary
string decimalToBinary(int decimal)
{
    if (decimal == 0)
        return "0";

    string binary = "";

    while (decimal > 0)
    {
        binary = char((decimal % 2) + '0') + binary;
        decimal = decimal / 2;
    }

    return binary;
}

// Function 2: Binary to Decimal
int binaryToDecimal(string binary)
{
    int decimal = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

// Function 3: Decimal to Hexadecimal
string decimalToHexadecimal(int decimal)
{
    if (decimal == 0)
        return "0";

    string hex = "";
    string digits = "0123456789ABCDEF";

    while (decimal > 0)
    {
        hex = digits[decimal % 16] + hex;
        decimal = decimal / 16;
    }

    return hex;
}

// Function 4: Hexadecimal to Decimal
int hexadecimalToDecimal(string hex)
{
    int decimal = 0;

    for (int i = 0; i < hex.length(); i++)
    {
        char digit = toupper(hex[i]);

        if (digit >= '0' && digit <= '9')
            decimal = decimal * 16 + (digit - '0');
        else
            decimal = decimal * 16 + (digit - 'A' + 10);
    }

    return decimal;
}

int main()
{
    int choice;
    int decimal;
    string binary;
    string hexadecimal;

    srand(time(0));

    do
    {
        cout << "\nConversion Menu:" << endl;
        cout << "1. Convert Decimal to Binary" << endl;
        cout << "2. Convert Binary to Decimal" << endl;
        cout << "3. Convert Hexadecimal to Decimal" << endl;
        cout << "4. Convert Decimal to Hexadecimal" << endl;
        cout << "5. Demo (Generate and convert random integers to binary)" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter a decimal number: ";
                cin >> decimal;
                cout << "Binary representation: "
                     << decimalToBinary(decimal) << endl;
                break;

            case 2:
                cout << "Enter a binary number: ";
                cin >> binary;
                cout << "Decimal representation: "
                     << binaryToDecimal(binary) << endl;
                break;

            case 3:
                cout << "Enter a hexadecimal number: ";
                cin >> hexadecimal;
                cout << "Decimal representation: "
                     << hexadecimalToDecimal(hexadecimal) << endl;
                break;

            case 4:
                cout << "Enter a decimal number: ";
                cin >> decimal;
                cout << "Hexadecimal representation: "
                     << decimalToHexadecimal(decimal) << endl;
                break;

            case 5:
            {
                int randomNumber = rand() % 100;

                cout << "Generated random integer: "
                     << randomNumber << endl;

                cout << "Binary representation: "
                     << decimalToBinary(randomNumber) << endl;
                break;
            }

            case 6:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a number from 1 to 6."
                     << endl;
        }

    } while (choice != 6);

    return 0;
}
