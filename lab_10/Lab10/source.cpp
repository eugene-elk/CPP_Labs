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
        cout << "Файл задачи 1 не найден" << endl << endl;
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
            cout << "Task1: Как отсортировать числа? 1 — по возрастанию, 2 — по убыванию" << endl;
            cin >> curr;
            if (curr != 1 && curr != 2)
			{
                cout << "Неверное число" << endl;
			}
        } while (curr != 1 && curr != 2);
        if (curr == 2)
		{
            reverse(arr.begin(), arr.end());
		}

        cout << "Массив отсортирован. В какой файл его положить?" << endl;
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
        cout << "Файл задачи 2 не найден" << endl << endl;
    } 
	else 
	{
        cout << "Task 2: Введите 1 чтобы удалить четные, или 2, чтобы удалить нечетные" << endl;
        arr.clear();
        cin >> k;
        while (fin >> curr) 
		{
            arr.push_back(curr);
        }
        if ((k != 1) && (k != 2)) 
		{
            cout << "Некорректный ввод" << endl;
        } 
		else 
		{
			if(k == 2) arr.erase( std::remove_if( arr.begin(), arr.end(), []( int x ){ return x % 2 == 0; } ), arr.end() );
			else arr.erase( std::remove_if( arr.begin(), arr.end(), []( int x ){ return x % 2 != 0; } ), arr.end() );
            cout << "Удаление произведено. В какой файл его положить?" << endl;
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
        cout << "Файл задачи 3 не найден" << endl << endl;
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
        cout << "Task 3: Рассчёты произведены. В какой файл их положить?" << endl;
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