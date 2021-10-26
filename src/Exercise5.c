/*
5.	Receive an array of m x n with all distinguished elements.
Find the minimum element of each row then find the maximum
number from those.
Ex:
___________________________________________________________________________________
| Input: 5(row) 4(col) 10 21 22 54 64 53 86 72 68 99 30 11 12 23 69 15 16 77 98 19 |
| The converted 2D array will be like this:                                        |
| 10 21 22 54                                                                      |
| 64 53 86 72                                                                      |
| 68 99 30 11                                                                      |
| 12 23 69 15                                                                      |
| 16 77 98 19                                                                      |
| Output:                                                                          |
| 53                                                                               |
|__________________________________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void Array2Dconverter(int arr[], int a[SIZE][SIZE], int m, int n)
{
	int row, column;
	int counter = 0;
	//Convert 1D array to 2D array
	for (row = 0; row <= (m - 1); row ++){
		for (column = 0; column <= (n - 1); column ++){
			a[row][column] = arr[counter];
			counter++;
		}
	}
}

void Ex5(int arr[], int m, int n){
	int a[SIZE][SIZE];
	Array2Dconverter(arr,a,m,n);
	//Your codes here
	int max = 0;
    printf("\n");
    for(int i=0; i < n; i++)
    {
        printf("Minimum element is row %d = %d\n", (i+1), result[i]);
        
        if(result[i] > max){
            max = result[i];
        }
    }
    
    printf("\nOutput = %d\n", max);
}
    int i = 0, j;
    int min = 99999;
    int result[];
    while (i < m){
        for ( j = 0; j < n; j++)
        {
            if (mat[i][j] < min)
            {
                min = mat[i][j];
            }
        }
    
        min = 99999;
        i++;
    }
    
}

void displayMatrix(int m, int n, int matrix[][n])
{
    printf("\nMatrix:\n");
    for(int i=0; i < m; i++) {
        for(int j=0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    printf("Input: ");
    scanf("%d %d",&m,&n);
    
    int i, j;
    int matrix[m][n];
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }
    
    return 0;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);
	argc-=3;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+3]);
	}

	Ex5(testcase, row, col);
	
	return 0;
}
