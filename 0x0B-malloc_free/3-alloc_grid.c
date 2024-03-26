#include "main.h"

int **alloc_grid(int width, int height){
    if(width <= 0 || height <= 0)
        return NULL;
    int **grid = (int **)malloc(height * sizeof(int *));
    if (!grid){
        return NULL;
    }

    for(int i =0; i < height; i++){
        grid[i] = (int *)calloc(width, sizeof(int));
        if (!grid[i]){
            return NULL;
        }
    }

    return grid;
}