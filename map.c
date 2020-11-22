#include <stdio.h>

#define ROW 8
#define COL 8

// several function declarations
void printMap(int map[][COL]);
int countAliveNeighbors(int map[][COL], int x, int y);
void updateMap(int map[][COL]);

int main(){
    int map[ROW][COL] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 1, 0}
    };
    while (1){
        printMap(map);
        printf("Enter anything for next generation map...\n");
        scanf("%s");
        updateMap(map);
    }
    return 0;
}

/**
 * output the grid
 */
void printMap(int map[][COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf(map[i][j]>0?"■":"□");
        }
        printf("\n");
    }
}

/**
 * count its active neighbors
 */
int countAliveNeighbors(int map[][COL], int x, int y){
    // TODO: complete the function definition
    return 0;
}

/**
 * update the map
 */
void updateMap(int map[][COL]){
    int aliveNeighbors[ROW][COL];
    for(int i = 0; i < ROW; i++)
        for(int j = 0; j < COL; j++)
            aliveNeighbors[i][j] = countAliveNeighbors(map, i, j);
    // TODO: update the map with aliveNeightbors
}
