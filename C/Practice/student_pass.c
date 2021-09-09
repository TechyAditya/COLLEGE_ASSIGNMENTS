#include<stdio.h>
int main()
{
    int dsa,dms,ps; //taken 70 marks as full marks in each subject...
    float dsa_p,dms_p,ps_p;
    float total;
    printf("enter marks in subject DSA,DMS and PS\n");
    scanf("%d %d %d",&dsa,&dms,&ps);
    dsa_p=(dsa*100)/70;
    dms_p=(dms*100)/70;
    ps_p=(ps*100)/70;
    printf("percentage obtained in DSA %f\n",dsa_p);
    printf("percentage obtained in DMS %f\n",dms_p);
    printf("percentage obtained in PS %f\n",ps_p);
    total=((dsa+dms+ps)*100)/210;
    printf("total percenatage in all subjects %f",total);
    if(total>=40 && dsa_p>=33 && dms_p>=33 && ps_p>=33)
        printf("You have passed in exam");
    else
        printf("you have failed in exam");
         
return 0;
}