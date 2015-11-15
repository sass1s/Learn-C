#include<stdio.h>

/*
*comment1
*main:generate some simple output
*/

int main(void)
{
    
    char firstletter='a';/*give firstletter the value 'a'*/
    int hour=11;/*assign the value 11 to hour*/
    int minute=59;/*set minute to 59*/
    printf("firstletter=%c\n",firstletter);
    printf("Current time is %d:%d\n",hour,minute);
    int total, total_minute;
    total=total_minute=hour*60+minute;
    printf("total time is %d minutes\n",total_minute);
    printf("the value of total is %d\n",total);
    float a=5.0/3;
    printf("a=%f\n",a);
    printf("%d:%d is %d minutes after 0:00\n",hour,minute,hour*60+minute);
    printf("%d and %d percent of an hour\n",hour,minute*100/60);
    printf("%d and %f hours\n",hour,minute/60.0);
    /*printf("floor:%d\n",floor(5/3));
    printf("ceiling:%d\n",ceiling(5/3));*/
    printf("%c\n",1);
    int i;
    for(i=1;i<128;i++)
    {
        printf("%c ",i);
    }
    printf("\n");
}
