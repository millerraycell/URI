#include<stdio.h>
int main()
{
    int n,prod,quant;
    float preco = 0.00;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d %d",&prod,&quant);
        switch(prod)
        {
            case 1001:
                preco+=1.50*quant;break;
            case 1002:
                preco+=2.50*quant;break;
            case 1003:
                preco+=3.50*quant;break;
            case 1004:
                preco+=4.50*quant;break;
            case 1005:
                preco+=5.50*quant;break;
        }
        n--;
    }
    printf("%.2f\n",preco);
    return 0;
}
