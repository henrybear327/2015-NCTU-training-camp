#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>

int main()
{
    int bears;
    while (scanf("%d", &bears) == 1) {
        int data[bears];
        for (int i = 0; i < bears; i++) {
            scanf("%d", &data[i]);
        }

        for (int i = 0; i < bears; i++) {
            // i = group size - 1
            int round_min = -1;
            for (int j = 0; j < bears - i; j++) {
                int team_min = data[j];
                for (int k = 0; k < i + 1; k++) {
                    team_min = team_min < data[j + k] ? team_min : data[j + k];
                }
                round_min = round_min > team_min ? round_min : team_min;
            }
            printf("%d\n", round_min);
        }
    }

    return 0;
}
