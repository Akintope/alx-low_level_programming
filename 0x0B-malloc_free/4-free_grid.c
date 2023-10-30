#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - it frees 2d array
 * @grid: is 2d grid
 * @height: the height dimension of grid
 * Description: it frees memory of grid
 * Return: 0
 */

void free_grid(int **grid, int height)

{

int k;

for (k = 0; k < height; k++)

{

free(grid[k]);

}
free(grid);
}
