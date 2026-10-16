#include<iostream>
using namespace std;

int main()
{
    int num;
    char c;
    double dnum;
    string str;

    cout << "Enter the number :";
    cin  >> num;
    cout << "Enter the character :";
    cin >> c;

    cout << "Enter double :";
    cin >> dnum;

    getchar();
    getline(cin, str);

    cout << "Num is : " << num <<"   " <<"Character is : " << c << "   " << "Double is  : " << dnum << endl;
    cout << "string is " << str << endl;

} 