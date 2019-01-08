#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
    //task1
    ifstream fin("task1.txt");
    ofstream fout;
    vector<int> arr;
    int curr;
    string where;

    if (!fin) 
	{
        cout << "���� ������ 1 �� ������" << endl << endl;
    } 
	else 
	{
        while (fin >> curr) 
		{
            arr.push_back(curr);
        }
        sort(arr.begin(), arr.end());
        do 
		{
            cout << "Task1: ��� ������������� �����? 1 � �� �����������, 2 � �� ��������" << endl;
            cin >> curr;
            if (curr != 1 && curr != 2)
			{
                cout << "�������� �����" << endl;
			}
        } while (curr != 1 && curr != 2);
        if (curr == 2)
		{
            reverse(arr.begin(), arr.end());
		}

        cout << "������ ������������. � ����� ���� ��� ��������?" << endl;
        cin >> where;

        fout.open(where);
        for (auto q: arr) 
		{
            fout << q << " ";
        }
        fout.close();
        fin.close();
    }
    //task2
    int k;
    fin.open("task2.txt");
    if (!fin) 
	{
        cout << "���� ������ 2 �� ������" << endl << endl;
    } 
	else 
	{
        cout << "Task 2: ������� 1 ����� ������� ������, ��� 2, ����� ������� ��������" << endl;
        arr.clear();
        cin >> k;
        while (fin >> curr) 
		{
            arr.push_back(curr);
        }
        if ((k != 1) && (k != 2)) 
		{
            cout << "������������ ����" << endl;
        } 
		else 
		{
			if(k == 2) arr.erase( std::remove_if( arr.begin(), arr.end(), []( int x ){ return x % 2 == 0; } ), arr.end() );
			else arr.erase( std::remove_if( arr.begin(), arr.end(), []( int x ){ return x % 2 != 0; } ), arr.end() );
            cout << "�������� �����������. � ����� ���� ��� ��������?" << endl;
            cin >> where;
            fout.open(where);
            for (auto q: arr) 
			{
                fout << q << " ";
            }
        }
        fout.close();
        fin.close();
    }
    //task3
    fin.open("task3.txt");
    if (!fin) 
	{
        cout << "���� ������ 3 �� ������" << endl << endl;
    } 
	else 
	{
        map<string, int> money;
        string third;
        long long sum = 0;
        while (fin >> third) 
		{
            fin >> where;
            fin >> k;
            money[third] += k;
            sum += k;
        }
        cout << "Task 3: �������� �����������. � ����� ���� �� ��������?" << endl;
        cin >> where;
        fout.open(where);
        for (auto q: money) 
		{
            fout << q.first << " " << q.second << endl;
        }
        fout << "Overall: " << sum << endl;
        fin.close();
        fout.close();
    }
    return 0;
}