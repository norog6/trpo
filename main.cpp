#include <iostream>
#include <ctime>
using namespace std;
int main() {

    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    int** a, i, j, n = 0, m, * b, k = 0, nm, s;
    while (n <= 0)
    {
        cout << "Введите колчиство строк матрицы" << endl;
        cin >> n;
    }
    do
    {
        cout << "Введите колчиство стобцов матрицы" << endl;
        cin >> m;
    } while (m <= 0);
    do
    {
        cout << "Выберите способ заполнения матрицы" << endl << "1:вручную,2:рандом" << endl;
        cin >> s;
    } while (s <1 or s >2);
    nm = n * m;
    b = new int[nm];
    a = new int* [n];
    for (i = 0; i < n; i++)
        a[i] = new int[m];
    if (s == 1)
    {
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> a[i][j];
    }
    if (s == 2)
    {
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                a[i][j] = rand() % 100 + 1;
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++, k++) {
            b[k] = a[i][j];
        }
    for (i = 0; i < n; i++)
    {
        b[i] = 1;
        for (j = 0; j <= m / 2; j++)
            if (a[i][j] != a[i][m - j - 1])
            {
                b[i] = 0;
                break;
            }
    }
    cout << "Ваша матрица:";
    for (i = 0; i < n; i++)
    {
        cout << endl;
        for (j = 0; j < m; j++)
            cout << a[i][j] << " ";
    }
    cout <<endl<< "Ваш вектор:" << endl;
    for (i = 0; i < n * m; i++) 
        cout << b[i] << " ";
    delete[]b;
    for (i = 0; i < n; i++)
        delete[]a[i];
    delete[]a;
    return 0;
}
