#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int arrInt[10]{ 11,12,13,14,15,16,17,18,19,20 };
    cout << "Массивы типа данных Int:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "[ + ] arrInt[" << i << "] = " << arrInt[i] << endl;
    }

    long arrLong[10]{ 110,120,130,140,150,160,170,180,190,200 };
    cout << "Массивы типа данных Long:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "[ + ] arrLong[" << i << "] = " << arrLong[i] << endl;
    }

    short arrShort[10]{ 1,2,3,4,5,6,7,8,9,10 };
    cout << "Массивы типа данных Short:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "[ + ] arrShort[" << i << "] = " << arrShort[i] << endl;
    }

    float arrFloat[10]{ 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.1 };
    cout << "Массивы типа данных Float:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "[ + ] arrFloat[" << i << "] = " << arrFloat[i] << endl;
    }

    double arrDouble[10] { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.11 };
    cout << "Массивы типа данных Double:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "[ + ] arrDouble[" << i << "] = " << arrDouble[i] << endl;
    }

    bool arrBool[10]{ true,false,true,false,true,false,true,false,true,false };
    cout << "Массивы типа данных Bool:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "[ + ] arrBool[" << i << "] = " << arrBool[i] << endl;
    }

    char arrChar[10]{ 'A','B','C','D','E','F','J','H','I','J'};
    cout << "Массивы типа данных Char:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "[ + ] arrChar[" << i << "] = " << arrChar[i] << endl;
    }

	return 0;
}