#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>

int main()
{
    int test_case;
    while (scanf("%d", &test_case) == 1) {
        while (test_case--) {
            int citizen, pair;
            scanf("%d %d", &citizen, &pair);
            int data[citizen + 1];
            memset(data, -1, sizeof(data));

            for (int i = 0; i < pair; i++) {
                int a, b;
                scanf("%d %d", &a, &b);
                if (a > b) {
                    int temp = a;
                    a = b;
                    b = temp;
                }

                if (data[a] < 0 && data[b] < 0) {
                    data[a] += data[b];
                    data[b] = a;
                    for (int j = 1; j <= citizen; j++) {
                        if (data[j] == b)
                            data[j] = a;
                    }
                } else if (data[a] < 0 && data[b] > 0) {
                    if (a != data[b]) {
                        data[a] += data[b];
                        data[data[b]] = a;
                        int temp = data[b];
                        for (int j = 1; j <= citizen; j++)
                            if (data[j] == temp)
                                data[j] = a;
                    }
                } else if (data[a] > 0 && data[b] < 0) {
                    if(data[b] != a) {
                    data[data[a]] += data[b];
                    data[b] = data[a];
                    for (int j = 1; j <= citizen; j++)
                        if (data[j] == b)
                            data[j] = data[a];}
                } else {
                    if (data[a] != data[b]) {
                        data[data[a]] += data[data[b]];
                        data[data[b]] = data[a];
                        int temp = data[b];
                        for (int j = 1; j <= citizen; j++)
                            if (data[j] == temp)
                                data[j] = data[a];
                    }
                }
            }

            /*
            for (int i = 1; i <= citizen; i++)
                printf("%d ", data[i]);
            printf("\n");
                        */

            int ans = 1000000;
            for (int i = 1; i <= citizen; i++)
                if (data[i] < ans)
                    ans = data[i];
            printf("%d\n", ans * -1);
        }
    }

    return 0;
}
