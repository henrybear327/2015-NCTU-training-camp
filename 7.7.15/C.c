#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int map[19][19];

#define NOTHING 0
#define BLACK 1
#define WHITE 2
#define USED 3

int row, column;

int check_five(int x, int y, int color, int count)
{
	
}

int check_over_five(int )

int main()
{
	int test_cases;
	while(scanf("%d", &test_cases) == 1) {
		for(int i = 0; i < 19;i++) {
			for(int j = 0; j < 19; j++) {
				scanf("%d", &map[i][j]);
			}
		}

		
	}

    return 0;
}
