#include <assert.h>
#include <stdio.h>
#include "function_multiplicar.c"

int main()
{
    assert(multiplicar(2,0)==0);
    assert(multiplicar(3,6)==18);
    assert(multiplicar(42,64)==2688);
    printf("Teste executado com sucesso");
}
