//En ba�ta gerekli olan k�t�phanelerimiz ekliyoruz.
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-2*pow(x,2)-5//Fonksiyonumuzu tan�ml�yoruz.
#define g(x) 3*x*x - 4*x//Fonksiyonumuzun t�revini tan�ml�yoruz
#define e 0.01//Hata s�n�r�n� tan�ml�yoruz.
int main()
{
float x0=2,x1,f0,g0,kok;//De�i�kenlerimizi float cinsinde tan�ml�yoruz
int i=1;
printf("Iterasyon(#)\t\tXn\t\tXn+1\t\tHATA\n");//Tablomuzu olu�turuyoruz.
b:f0=f(x0);//Newton rapshon metodunun gerekli ad�mlar�n� ger�ekle�tiriyoruz.
g0=g(x0);
x1=x0-(f0/g0);
float hatadeger = fabs(x1-x0);//Hata de�erimizi bir de�i�kenin i�ine mutlak de�erli olarak at�yoruz.

printf("\t%d\t\t%f\t%f\t%f\n",i,x0,x1,hatadeger);//Tablomuzun de�erlerini yazd�r�yoruz.
i++;
if(fabs((x1-x0)/x1)<=e)//Daha sonra durma ko�ulunu kontrol edip durmas� gereken iterasyonda durmas�n� sa�l�yoruz.
{
kok=x1;//K�k de�erimizi belirliyoruz.
printf("\n");
printf("Sart saglandigindan kok X4 degeri: %f",kok);//K�k de�erimizi yazd�r�yoruz.
goto c;
}
else
{
x0=x1;//Xn'in i�ine de�i�en de�eri at�yoruz
goto b;
}
c:
getch();
}//M.MEHMET
