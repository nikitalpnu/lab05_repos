#include <iostream>
#include <cmath>
using namespace std;
double P1(int K = 1, int N = 15)
{
    double P = 1;
    for (int i = K; i <= N; i++)
        P *= ((sin(i) * sin(i) + pow(cos(1.0 / i), 2)) / (i * i));
    return P;
}

double P2(int K = 1, int N = 15)
{
    double P = 1;
    for (int i = N; i >= K; i--)
        P *= ((sin(i) * sin(i) + pow(cos(1.0 / i), 2)) / (i * i));
    return P;
}

double P3(int K = 1, int N = 15)
{
    double P = 1;
    for (int i = K; i <= N; i++)
        P *= ((sin(i) * sin(i) + pow(cos(1.0 / i), 2)) / (i * i));
    return P;
}

double P4(int K = 1, int N = 15)
{
    double P = 1;
    for (int i = N; i >= K; i--)
        P *= ((sin(i) * sin(i) + pow(cos(1.0 / i), 2)) / (i * i));
    return P;
}
int main()
{
    int K, N;
    cout << "i = "; cin >> K;
    cout << "N = "; cin >> N;
    cout << "(rec up ++) P1 = " << P1(K, N) << endl;
    cout << "(rec up --) P2 = " << P2(K, N) << endl;
    cout << "(rec down ++) P3 = " << P3(K, N) << endl;
    cout << "(rec down --) P4 = " << P4(K, N) << endl;

    return 0;
}
