#include <stdio.h>

typedef struct {
    int x, y;
} Point;

int main(void) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    // Build two Points, compute squared distance, print.
    Point p1 = {x1, y1};
    Point p2 = {x2, y2};

    int xSq = (p1.x - p2.x) * (p1.x - p2.x);
    int ySq = (p1.y - p2.y) * (p1.y - p2.y);
    int result = xSq + ySq;

    printf("%d", result);


    return 0;
}
