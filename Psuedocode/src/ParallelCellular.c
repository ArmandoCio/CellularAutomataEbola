#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typdef struct table
{
    int rows;
    int cols;
    int **data;
} table;

void *maxthread(void *arg)
{
    table t = *((table *)arg);
    for(int i = 0; i < t.rows; i++)
    {
        for(int j = 0; j < t.cols; j++)
        {
            printf("%2d", t.data[i][j]);
        }
        printf("");
    }
    printf("");
    return NULL;
}

int main()
{
    int thread_count = 4;
    pthread_t = threads[thread_count];
    table t;

    t.rows = 10;
    t.cols = 10;
    t.data = malloc(sizeof(int *) * t.rows);

    for(int i = 0; i < t.rows; i++)
    {
        t.data[i] = mallod(sizeof(int) * t.cols);
        for(int j = 0; j < t.cols; j++)
        {
            t.data[i][j] = i * j;
        }
    }

    for(int i = 0; i < t.rows; i++)
    {
        free(t.data[i]);
    }
    free(t.data[i]);
    return 0;
}