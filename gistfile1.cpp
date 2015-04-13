
#include <iostream>
using namespace std;

void main()
{
cout << "Task #1: Kurachevsky Andrey Aleksandrovich 0672572429 krutinello@gmail.com" << endl;

cout << "\n Task #2: Program for the calculation of the arithmetic mean." << endl;
int the_first_number;
cout << "Enter the first number: ";
cin >> the_first_number;
int the_second_number;
cout << "Enter the second number: ";
cin >> the_second_number;
int arithmetical_mean = (the_first_number + the_second_number) / 2;
cout << "Arithmetical mean - ";
cout<< arithmetical_mean << endl;

cout << "\n Task #3: Currency converter." << endl;
const float Usd = 0.042;
const float Euro = 0.039;
const float Rub = 2.222;
double Grn;
cout << "Enter the number of Griven: ";
cin >> Grn;
cout << Grn << " GRN You get:" << endl;
cout << Grn*Usd << " - USD," << endl;
cout << Grn*Euro<< " - EURO," << endl;
cout <<  Grn*Rub << " - RUB." << endl;


cout << "\n Task #4: The sum and product of two numbers." << endl;
int number_1;
cout << "Enter the number #1: ";
cin >> number_1;
int number_2;
cout << "Enter the number #2: ";
cin >> number_2;
int number_3;
cout << "Enter the number #3: ";
cin >> number_3;
int sum_number = number_1 + number_2 + number_3;
int product_number = number_1 * number_2 * number_3;
cout << sum_number << " - Sum number" << endl;
cout << product_number << " - Product number" << endl;

system("pause");
}
