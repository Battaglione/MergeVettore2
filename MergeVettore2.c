#include <stdio.h>
#include <stdlib.h>
#define N1 1000
#define N2 1000
#define N3 2000   
int main(){

    int v1[N1], v2[N2], v3[N3], i1, i2, i3, temp, max1, max2, max3;    
    do{
        printf("Quanti numeri vuoi inserire per il primo vettore? MAX 1000\n");
        scanf("%d", &max1);
    }while(max1 < 0 || max1 > 1000);


    for(i1 = 0; i1 < max1;i1++){             //Input vettore 1
        printf("Inseriscri il %d elemento del primo vettore\n",i1 + 1);
        scanf("%d",&v1[i1]);
    }

    do{
        printf("Quanti numeri vuoi inserire per il secondo vettore? MAX 1000\n");
        scanf("%d", &max2);
    }while(max2 < 0 || max2 > 1000);

    for(i1 = 0; i1 < max2; i1++){             //Input vettore 2
        printf("Inseriscri il %d elemento del socondo vettore\n",i1 + 1);
        scanf("%d",&v2[i1]);
    }
    max3 = max1 + max2;
    
    for(i1 = 0; i1 < max1; i1++){       //Ordinamento vettore     
        for(i2 = i1 + 1; i2 < max1; i2++){
            if(v1[i2] < v1[i1]){
                temp = v1[i1];
                v1[i1] = v1[i2];
                v1[i2] = temp;
            }
        }
    }
    for(i1 = 0; i1 < max2; i1++){       //Ordinamento vettore     
        for(i2 = i1 + 1; i2 < max2; i2++){
            if(v2[i2] < v2[i1]){
                temp = v2[i1];
                v2[i1] = v2[i2];
                v2[i2] = temp;
            }
        }
    }


    i1 = 0;
    i2 = 0;
    i3 = 0;

    do{
        if(i1 < max1 && i2 < max2){
            if(v1[i1] <= v2[i2]){
                v3[i3] = v1[i1];
                i3++;
                i1++;
            }
        
            else{
                if(v2[i2] <= v1[i1]){
                    v3[i3] = v2[i2];
                    i3++;
                    i2++;
                }
            }
        }
        else{
            if(i1 == max1){
                v3[i3] = v2[i2];
                i3++;
                i2++;
            }
            else{
                if(i2 == max2){
                    v3[i3] = v1[i1];
                    i3++;
                    i1++;
                }
            }
        }
        
    }while(i3 < max3);
    printf("Il vettore finale e' il seguente: \n");    //Output del terzo vettore
    for(i1 = 0; i1 < max3; i1++){
        printf("\n%d",v3[i1]);
    }
    printf("\n");
    system("pause");
    return 0;
}
