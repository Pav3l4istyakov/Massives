#include <iostream>
using namespace std;
int main()
{    //������1;
    setlocale(LC_ALL, "RU");
    int number1;
    int number2;
    std::cout << "������� 10 �����";
    std::cin >> number1;
    std::cin >> number2;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << endl << "Max: " << max << endl << "Min: " << min;
    system("pause");


    //������ 2;
    std::cout << "������� ����� ����� � �������� ���������";
    double ar[5] = { 2,5,45,32,21 };
    double menshe = 0;
    double sum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (ar[i] < menshe)
        {
            sum = sum + arr[i];
            std::cout << sum << endl;
        }
    }
    //������3;
    int i, n, k, mi, ma, start, end;
    int mouth[12];
    for (i = 0; i < 12; i++)
    {
        std::cout << "������� ������� �� " << i + 1 << " �����: ";
        std::cin >> mouth[i];
    }
    std::cout << "������� ������� ���������: ";
    cin >> start >> end;
    start = start - 1;
    end = end - 1;
    mi = mouth[start];
    ma = mouth[start];
    for (i = start; i <= end; i++)
    {
        if (mi > mouth[i])
            mi = mouth[i];
    }
    for (i = 0; i < 12; i++)
    {
        if (mi == mouth[i])
            n = i;
    }
    std::cout << "����� � ����������� ��������: " << ++n << endl;

    for (i = start; i <= end; i++)
    {
        if (ma < mouth[i])
            ma = mouth[i];
    }
    for (i = 0; i < 12; i++)
    {
        if (ma == mouth[i])
            k = i;
    }
    std::cout << "����� � ������������ ��������: " << ++k << endl;

    return 0;
}