#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    int N, j;
    double S;
    cout << "N = ";
    cin >> N;

    // 1. Цикл while
    S = 0;
    j = 2;

    while (j <= N)
    {
        S += 1.0 * j * (N - j) / (j * j + (N - j) * (N - j));
        j++;
    }

    cout << "while:      " << setprecision(10) << S << endl;

    // 2. Цикл do...while
    S = 0;
    j = 2;

    if (N >= 2)
    {
        do
        {
            S += 1.0 * j * (N - j) / (j * j + (N - j) * (N - j));
            j++;
        } while (j <= N);
    }

    cout << "do...while: " << setprecision(10) << S << endl;

    // 3. Цикл for зі збільшенням
    S = 0;

    for (j = 2; j <= N; j++)
    {
        S += 1.0 * j * (N - j) / (j * j + (N - j) * (N - j));
    }

    cout << "for ++:      " << setprecision(10) << S << endl;

    // 4. Цикл for зі зменшенням
    S = 0;

    for (j = N; j >= 2; j--)
    {
        S += 1.0 * j * (N - j) / (j * j + (N - j) * (N - j));
    }

    cout << "for --:      " << setprecision(10) << S << endl;

    return 0;
}
