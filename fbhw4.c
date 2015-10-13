#include <stdio.h>
#include <math.h>

struct point
{
    double x, y;
};

struct triangle
{
    struct point a;
    struct point b;
    struct point c;
};

double area (struct triangle t);

double area (struct triangle t)
{
    double s;

    s = 0.5 * fabs ((t.b.x - t.a.x) * (t.c.y - t.a.y) - (t.c.x -
            t.a.x) * (t.b.y - t.a.y));
    return s;
}

double distance (struct point q, struct point w);

double distance (struct point q, struct point w)
{
    double d;

    d = sqrt (((w.x - q.x) * (w.x - q.x)) + ((w.y - q.y) * (w.y - q.y)));
    return d;
}

int main (void)
{
    struct triangle t;

    t.a.x = 2.;
    t.a.y = 2.;
    t.b.x = -2.;
    t.b.y = 1.;
    t.c.x = 0.;
    t.c.y = -3.;
    double i, j, k, h, o, r;

    i = distance ((t.a), (t.b));
    j = distance ((t.b), (t.c));
    k = distance ((t.a), (t.c));
    h = i + j + k;
    o = area (t);
    r = (2 * o) / (h);
    printf ("%f\n", r);
    return 0;
}
