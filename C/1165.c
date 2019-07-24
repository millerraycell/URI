#include <stdio.h>
#include <math.h>

int main () {
    int quant,num;
    scanf("%d", &quant);

    while (quant > 0) {
        scanf("%d", &num);

        if (primo(num)) {
            printf("%d eh primo\n", num);
        }
        else {
            printf("%d nao eh primo\n", num);
        }
        quant--;
    }

    return 0;
}

int primo(int n) {
    int i,aux;
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return 0;
    }
    else {
        aux = sqrt(n) + 1;
        for (i = 3; i < aux; i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
