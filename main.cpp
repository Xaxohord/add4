#include <iostream>
using namespace std;

int main(void)
{
    int k = 0;
    for (int i = 1; i <= 999999; ++i)
    {
        int n = i, a = 0, b = 0, q = 0;
        while (n)
        {
            ++q;
            if (q <= 3)
                a += n % 10;
            else
                b += n % 10;
            n /= 10;
        }

        if (a == b)
            ++k;
    }

    cout << "kolichestvo biletov = " << k << endl;
    return 0;
}
