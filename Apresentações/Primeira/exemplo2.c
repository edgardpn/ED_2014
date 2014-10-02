#include <stdio.h>
 
 int soma(int a, int b)
 {
    return (a+b); 
 }
 
 int subtracao(int a, int b)
 {
    return (a-b);
 }
 
 int (*menos)(int, int) = subtracao;
 
 int operacao(int x, int y, int (*func)(int,int))
 {
    int g;
    g = func(x, y);
    return (g);
 }
 
 int main()
 {
    int m, n;
    m = operacao(7, 5, soma);
    n = operacao(20, m, menos);
    printf("%d\n", n);
    return 0;
 }
