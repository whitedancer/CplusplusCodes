#include<stdio.h>
int keyboard ();
int sum_1(int x, int y);
int sub_1(int x, int y);
int mul_1(int x, int y);
float div_1(int x, int y);
float avg_1(int x, int y);
void monitor(int x, int y, int z, float p, float q);

void main(void){
     int a,b, sum,sub,mul;
     float div, avg;
     a=keyboard ();     
     b=keyboard ();
     
     sum = sum_1(a,b);
     sub = sub_1(a,b);
     mul = mul_1(a,b);
     div = div_1(a,b);
     avg = avg_1(a,b);
          
     monitor(sum,sub,mul,div,avg);
}
     

int keyboard (){
    int x; 
    scanf("%d",&x);
    return x;
}
int sum_1(int x, int y){

    int sum;
    sum =x+y;
    return sum;

}
int sub_1(int x, int y){
    
    int sub;
    sub =x-y;
    return sub;

}
int mul_1(int x, int y){

    int mul;
    mul =x*y;
    return mul;


}
float div_1(int x, int y){

    float div;
    div =(float)x/y;
    return div;



}
float avg_1(int x, int y){

    float avg;
    avg =(float)(x+y)/2;
    return avg;


}

void monitor(int x, int y, int z, float p, float q){
    
    printf("the sum is %d\n",x);
    printf("the sub is %d\n",y);
    printf("the mul is %d\n",z);
    printf("the div is %f\n",p);
    printf("the avg is %f\n",q);
}

    
    
    















