#include <stdio.h>
void sum()
{
    int toes  = 10;
    int toessum = toes +toes ;
    int pingfang = toes *  toes;
    printf("tose = %d \ntoes + toes =%d \ntoes*toes = %d \n" , toes ,toessum , pingfang);

}
void juzhen()
{
    for (int i = 3 ; i > 0 ; i --)
    {
        for (int j = i; j > 0; j--) {
            printf("Smile");
        }
        printf("\n");
    }
    
    
}
void three()
{
    printf("three\n");
    
}
void two()
{
    printf("two\n");
    three();
}
void one_three()
{
    printf("one\n");
    two();
}

void main()
{
    sum();
    juzhen();
    printf("starting now :\n");
    one_three();
    printf("done!");
}