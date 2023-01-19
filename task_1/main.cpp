#include <iostream>
using namespace std;

bool IsPalindrom(int num)
{
    int n = num;
    int rev = 0;
    while (num > 0)
    {
        int dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }
    if (n == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
};

// создание
int **Create(int N, int M){
    {int i, j;
int **tmp;
tmp = new int *[N];
for (i = 0; i < N; i++)
{
    tmp[i] = new int[M];
}

cout << "input elements ";
for (i = 0; i < N; i++)
    for (j = 0; j < M; j++)
        cin >> tmp[i][j];
return tmp;
}
}
;

// вывод
void output(int **A, int N, int M)
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
};

// умножение
int **Mul(int **A, int **B, int N, int M, int L)
{
    int i, j, k;
    int **tmp;
    tmp = new int *[N];
    for (i = 0; i < N; i++)
    {
        tmp[i] = new int[L];
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < L; j++)
        {

            for (tmp[i][j] = k = 0; k < M; k++)
            {
                tmp[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return tmp;
};

// разность
int **Sub(int **A, int **B, int N, int M)
{
    int i, j;
    int **tmp = new int *[N];
    for (i = 0; i < N; i++)
    {
        tmp[i] = new int[M];
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            tmp[i][j] = A[i][j] - B[i][j];
        }
    }
    return tmp;
};
// транспонируем
int **transpose(int **A, int N, int M)
{

    int t;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i; j < M; ++j)
        {
            t = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = t;
        }
    }
    return A;
};

int main()
{
    int i, j, N, M, ind1, ind2;
    long int proizv = 1;
    int **b;
    int **c;
    int **a;

    cout << " N = ";
    cin >> N;
    cout << " M = ";
    cin >> M;
    b = new int *[N];

    // in
    cout << "input B matrix" << endl;
    b = Create(N, M);

    // произведение элементов
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            proizv *= b[i][j];
        }
    };
    cout << "proizvedenie = " << proizv << endl;
    // max
    int maxEven = -10;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if ((b[i][j] % 2 == 0) && (maxEven == -10 || maxEven < b[i][j]))
            {
                maxEven = b[i][j];
                ind1 = i + 1;
                ind2 = j + 1;
            }
        }
    }
    if (maxEven == -10)
    {
        cout << " не сущесвтует мах четного элемента" << endl;
    }
    else
    {
        cout << " index of max-even-number : "
             << "i = " << ind1 << " "
             << "j = " << ind2 << endl;
    }

    int sum = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if ((IsPalindrom(b[i][j]) == true) && (i != j) && (j != N - i - 1))
            {
                sum += b[i][j];
            }
        }
    }
    if (sum == 0)
    {
        cout << "palindroms are not exit" << endl;
    }
    else
    {
        cout << "sum of palindroms= " << sum << endl;
    }
    cout << endl;

    cout << "Arifmetic of matrix  B and C : " << endl;
    cout << endl;
    cout << "input elem C matrix" << endl;
    c = Create(N, M);
    cout << "result A-matrix=  " << endl;
    int **a1 = Mul(c, b, N, M, N);
    a = Sub(a1, (transpose(b, N, M)), N, M);

    output(a, N, M);

    return 0;
}
