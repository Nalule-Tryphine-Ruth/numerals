#include<stdio.h>
#include<stdlib.h>
intmain()
{
//initializing
intnum;
printf("Enteranumberbetween1and10;");
scanf("%d",&num);
if(num>=1&&num<=10){
printf("Yournumberis%d\n",num);
}
else{

printf("Error!");
}
switch(number)
{
//displays numeral numbers 
case1:
printf("%dinromannumeralsisI",num);
break;
case2:
printf("%dinromannumeralsisII",num);
break;
case3:
printf("%dinromannumeralsisIII",num);
break;
case4:
printf("%dinromannumeralsisIV",num);
break;
case5:
printf("%dinromannumeralsisV",num);
break;
case6:
printf("%dinromannumeralsisVI",num);
break;
case7:
printf("%dinromannumeralsisVII",num);
break;
case8:
printf("%dinromannumeralsisVIII",num);
break;
case9:
printf("%dinromannumeralsisIX",num);
break;
case10:
printf("%dinromannumeralsisX",num);
break;
default:
printf("Please enter a number between 1and10");
break;
}
return0;
}
