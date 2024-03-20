#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

void print_p(Point p) {
    printf("(%.2f,%.2f)\n", p.x, p.y);
}

// define change_x here so that the rest of the code works
void change_x(Point *p, double x){
	p->x = x;
}

int main(void) {
    // don't change anything in main
    Point a = {1.3, 3.55534};
    Point b;
    b.x = 3.423443;
    b.y = -10.456;
    change_x(&a, 3.14159);
    change_x(&b, 3.14159);
    print_p(a);
    print_p(b);
    return(0);

}
