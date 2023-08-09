void ft_ultimate_div_mod(int *a, int *b) 
{
    int div ;
    int mod ;
    
    div = *a / *b;// a heleki 10 du b ise 4 bolme 2 edir save eledik div e
    mod = *a % *b;// eyni sohbet ama qaliq 2 edir onuda moda save
    *a = div;// a axi 10 idi ama biz 2 aldiq bolmeden a nin qiymetini deyisirik 10dan 2 ye 
    *b = mod;// eyni sohbet ama qaliq ucun burdada 4 den 2 ye
}

#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 4;
    ft_ultimate_div_mod(&a, &b);// adress veririik imput olaraq cunki pointed by int isteyr 
    
    printf("Div: %d\n Mod: %d\n", a, b);
      
    return 0;
}

