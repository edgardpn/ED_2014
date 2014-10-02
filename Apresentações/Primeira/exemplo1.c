#include <stdio.h>
 
 int soma(int a, int b)
 {
    return (a + b);
 }
 
 int operacao(int x, int y, int (*func)(int,int))
 {
    int g;
    g = (*func)(x, y);
    return (g);
 }
 
 int main ()
 {
    int m;
    m = operacao(7, 5, soma);
    printf("%d\n", m);
    return 0;
 }
