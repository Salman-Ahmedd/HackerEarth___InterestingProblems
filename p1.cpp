///Bubble Sort
///HackerEarth
//Salman-Ahmedd

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, N, swap, s, count = 0;

    cin >> N;

    int A[N];

    for(i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for(i = 0; i < (N - 1); i++)
    {
        s = 0;

        for(j = 0; j < (N - i - 1); j++)
        {
            if(A[j] > A[j + 1])
            {
                swap = A[j];
                A[j] = A[j + 1];
                A[j + 1] = swap;

                s = 1;
            }
        }

        if(s == 1)
		{
			count++;
		}

    }

    cout << (count + 1);

    return 0;
}
