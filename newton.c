//En baþta gerekli olan kütüphanelerimiz ekliyoruz.
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-2*pow(x,2)-5//Fonksiyonumuzu tanýmlýyoruz.
#define g(x) 3*x*x - 4*x//Fonksiyonumuzun türevini tanýmlýyoruz
#define e 0.01//Hata sýnýrýný tanýmlýyoruz.
int main()
{
float x0=2,x1,f0,g0,kok;//Deðiþkenlerimizi float cinsinde tanýmlýyoruz
int i=1;
printf("Iterasyon(#)\t\tXn\t\tXn+1\t\tHATA\n");//Tablomuzu oluþturuyoruz.
b:f0=f(x0);//Newton rapshon metodunun gerekli adýmlarýný gerçekleþtiriyoruz.
g0=g(x0);
x1=x0-(f0/g0);
float hatadeger = fabs(x1-x0);//Hata deðerimizi bir deðiþkenin içine mutlak deðerli olarak atýyoruz.

printf("\t%d\t\t%f\t%f\t%f\n",i,x0,x1,hatadeger);//Tablomuzun deðerlerini yazdýrýyoruz.
i++;
if(fabs((x1-x0)/x1)<=e)//Daha sonra durma koþulunu kontrol edip durmasý gereken iterasyonda durmasýný saðlýyoruz.
{
kok=x1;//Kök deðerimizi belirliyoruz.
printf("\n");
printf("Sart saglandigindan kok X4 degeri: %f",kok);//Kök deðerimizi yazdýrýyoruz.
goto c;
}
else
{
x0=x1;//Xn'in içine deðiþen deðeri atýyoruz
goto b;
}
c:
getch();
}//M.MEHMET
