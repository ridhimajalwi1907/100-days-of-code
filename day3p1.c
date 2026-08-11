# include<stdio.h>
int main (){
    float c,f;
    printf("Enter c degree :");
    scanf("%f",&c);
    printf("Enter f degree :");
    scanf("%f",&f);
    printf("Temp in fahrenheit is %f\n",((c*9/5)+32));
    printf("Temp in celcius is %f",((f-32)*5/9));
    return 0;
}    