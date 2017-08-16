#include <stdio.h>
#include <string.h>
int main ()
{
    char a[30],b[30];
    int i,j,sum1,sum2,l1,l2,r1,r2;
    double ratio;
    while(gets(a))
    {
        gets(b);
        l1=strlen(a);
        l2=strlen(b);
        sum1=0;
        sum2=0;
        for(i=0;i<l1;i++)
        {
            if(a[i]=='a'||a[i]=='A')
                sum1=sum1+1;
            else if(a[i]=='b'||a[i]=='B')
                sum1=sum1+2;
            else if(a[i]=='c'||a[i]=='C')
                sum1=sum1+3;
            else if(a[i]=='d'||a[i]=='D')
                sum1=sum1+4;
            else if(a[i]=='e'||a[i]=='E')
                sum1=sum1+5;
            else if(a[i]=='f'||a[i]=='F')
                sum1=sum1+6;
            else if(a[i]=='g'||a[i]=='G')
                sum1=sum1+7;
            else if(a[i]=='h'||a[i]=='H')
                sum1=sum1+8;
            else if(a[i]=='i'||a[i]=='I')
                sum1=sum1+9;
            else if(a[i]=='j'||a[i]=='J')
                sum1=sum1+10;
            else if(a[i]=='k'||a[i]=='K')
                sum1=sum1+11;
            else if(a[i]=='l'||a[i]=='L')
                sum1=sum1+12;
            else if(a[i]=='m'||a[i]=='M')
                sum1=sum1+13;
            else if(a[i]=='n'||a[i]=='N')
                sum1=sum1+14;
            else if(a[i]=='o'||a[i]=='O')
                sum1=sum1+15;
            else if(a[i]=='p'||a[i]=='P')
                sum1=sum1+16;
            else if(a[i]=='q'||a[i]=='Q')
                sum1=sum1+17;
            else if(a[i]=='r'||a[i]=='R')
                sum1=sum1+18;
            else if(a[i]=='s'||a[i]=='S')
                sum1=sum1+19;
            else if(a[i]=='t'||a[i]=='T')
                sum1=sum1+20;
            else if(a[i]=='u'||a[i]=='U')
                sum1=sum1+21;
            else if(a[i]=='v'||a[i]=='V')
                sum1=sum1+22;
            else if(a[i]=='w'||a[i]=='W')
                sum1=sum1+23;
            else if(a[i]=='x'||a[i]=='X')
                sum1=sum1+24;
            else if(a[i]=='y'||a[i]=='Y')
                sum1=sum1+25;
            else if(a[i]=='z'||a[i]=='Z')
                sum1=sum1+26;
        }
        for(j=0;j<l2;j++)
        {
            if(b[j]=='a'||b[j]=='A')
                sum2=sum2+1;
            else if(b[j]=='b'||b[j]=='B')
                sum2=sum2+2;
            else if(b[j]=='c'||b[j]=='C')
                sum2=sum2+3;
            else if(b[j]=='d'||b[j]=='D')
                sum2=sum2+4;
            else if(b[j]=='e'||b[j]=='E')
                sum2=sum2+5;
            else if(b[j]=='f'||b[j]=='F')
                sum2=sum2+6;
            else if(b[j]=='g'||b[j]=='G')
                sum2=sum2+7;
            else if(b[j]=='h'||b[j]=='H')
                sum2=sum2+8;
            else if(b[j]=='i'||b[j]=='I')
                sum2=sum2+9;
            else if(b[j]=='j'||b[j]=='J')
                sum2=sum2+10;
            else if(b[j]=='k'||b[j]=='K')
                sum2=sum2+11;
            else if(b[j]=='l'||b[j]=='L')
                sum2=sum2+12;
            else if(b[j]=='m'||b[j]=='M')
                sum2=sum2+13;
            else if(b[j]=='n'||b[j]=='N')
                sum2=sum2+14;
            else if(b[j]=='o'||b[j]=='O')
                sum2=sum2+15;
            else if(b[j]=='p'||b[j]=='P')
                sum2=sum2+16;
            else if(b[j]=='q'||b[j]=='Q')
                sum2=sum2+17;
            else if(b[j]=='r'||b[j]=='R')
                sum2=sum2+18;
            else if(b[j]=='s'||b[j]=='S')
                sum2=sum2+19;
            else if(b[j]=='t'||b[j]=='T')
                sum2=sum2+20;
            else if(b[j]=='u'||b[j]=='U')
                sum2=sum2+21;
            else if(b[j]=='v'|b[j]=='V')
                sum2=sum2+22;
            else if(b[j]=='w'||b[j]=='W')
                sum2=sum2+23;
            else if(b[j]=='x'||b[j]=='X')
                sum2=sum2+24;
            else if(b[j]=='y'||b[j]=='Y')
                sum2=sum2+25;
            else if(b[j]=='z'||b[j]=='Z')
                sum2=sum2+26;
        }
        do
        {
            r1=0;
            while(sum1)
            {
                r1=r1+(sum1%10);
                sum1=sum1/10;
            }
            sum1=r1;
        }while(r1>9);
        do
        {
            r2=0;
            while(sum2)
            {
                r2=r2+(sum2%10);
                sum2=sum2/10;
            }
            sum2=r2;
        }while(r2>9);
        if(r1>r2)
            ratio=((double)r2/r1)*100.00;
        else
            ratio=((double)r1/r2)*100.00;
        printf("%.2lf %%\n",ratio);
    }
    return 0;
}
