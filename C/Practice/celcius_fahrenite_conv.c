#include<stdio.h>
float convert(float c );
int main()
{
    float d;
    printf("enter celcuis :  ");
    scanf("%f",&d);
    printf("celcius after conversion is : %f ",convert(d));

return 0;
}
float convert(float c )
{
    float f= ((c * 9)/5) +32;
    return f;
}

//

// #include<stdio.h>
// float convert(float c );
// int main()
// {
//     float d;
//     printf("enter celcuis :  ");
//     scanf("%f",&d);
//     printf("celcius after conversion is : %f ",convert(d));

// return 0;
// }
// float convert(float c )
// {
//     float f= ((c *9)+160 )/5;
//     return f;
// }