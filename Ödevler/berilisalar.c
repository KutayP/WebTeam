#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Beril Isalar
//10x10 luk matrisi rastgele 1 ve 0 ile doldurun sonrasinda icinde en cok 1 olan 2 sutunun da 1 oldugu satir sayisini ve hangi satirda 1 olduklarini yazd�r�n
int main()
{
    int max1,max1terim=0,max2,max2terim=0;
    int dizi[10][10];
    srand(time(NULL));
    int i,j;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            dizi[i][j]=rand()%2;
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%3d",dizi[i][j]);
        }
        printf("\n");
    }
    int C[10];
    for(j=0; j<10; j++)
    {
        int sayac=0;
        for(i=0; i<10; i++)
        {
            if(dizi[i][j]==1)
            {
                sayac++;
                printf("%d. satirda 1 var\n",i);
            }
        }
        printf("%d. sutunda %d tane 1 vardir\n",j,sayac);
        printf("\n\n\n");
        C[j]=sayac;
    }
    max1=C[0];
    for(int i = 0; i<10; i++)
    {
        if(C[i]>=max1)
        {
            max1= C[i];
            max1terim = i;
        }
    }
    max2 = C[0];
    max2terim = 0;

    for(int i = 0; i<10; i++)
    {
        if(C[i]>=max2 && C[i]<max1)
        {
            max2terim = i;
            max2= C[i];
        }
    }
    printf("%d ve %d en fazla 1 bulunma sayisi\n",max1,max2);
    printf("%d ve %d en fazla 1 bulunan sutunlar\n",max1terim,max2terim);

    return 0;
}

