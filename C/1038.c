#include<stdio.h>
int main()
{
    int prod,quant;
    scanf("%d %d",&prod,&quant);
    switch(prod){
        case (1):
            printf("Total: R$ %.2f\n",4.00*quant);break;
        case (2):
            printf("Total: R$ %.2f\n",4.50*quant);break;
        case (3):
            printf("Total: R$ %.2f\n",5.00*quant);break;
        case (4):
            printf("Total: R$ %.2f\n",2.00*quant);break;
        case (5):
            printf("Total: R$ %.2f\n",1.50*quant);break;
    }
    return 0;
}
