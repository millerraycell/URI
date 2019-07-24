#include<stdio.h>
int main()
{
    int cont,num,numr=0,nums=0,numc=0,numtotal;
    double pc,pr,ps;
    char animal,rato,sapo,coelho;
    scanf("%d",&cont);
    while (cont!=0)
    {
        scanf("%d %c",&num,&animal);
        switch(animal)
        {
            case 'R':
                numr=num+numr;break;
            case 'S':
                nums=num+nums;break;
            case 'C':
                numc=num+numc;break;
        }
        cont--;

    }
    numtotal=numc+numr+nums;
    pc = (numc*100.00)/numtotal;
    pr = (numr*100.00)/numtotal;
    ps = (nums*100.00)/numtotal;
    printf("Total: %d cobaias\n", numtotal);
    printf("Total de coelhos: %d\n", numc);
    printf("Total de ratos: %d\n", numr);
    printf("Total de sapos: %d\n", nums);
    printf("Percentual de coelhos: %.2f %%\n", pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);

    return 0;
}
