/*
     printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 21/05/2024
     olusturan: Fatih Mehmet CEYHAN: FMC
     yukleme tarihi 21/05/2024

    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier

    %[width]specifier

    kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.309::7.21.6.1 the fprintf function]
    width
        Bir isteğe bağlı minimum alan genişliği.
        Dönüştürülen değer alan genişliğinden daha az karaktere sahipse,
        alan genişliğine kadar sol (veya daha sonra açıklanacak olan sol ayar bayrağı verilmişse sağ) tarafa boşluklar ile doldurulur.
        Alan genişliği, bir yıldız * (daha sonra açıklanacak) veya negatif olmayan bir ondalık sayı biçimindedir.

//[The C Programming Language,2nd Edition::p.243::B1.2 Formatted Output]
    width
        Minimum alan genişliğini belirten bir sayı.
        Dönüştürülen argüman en az bu genişlikte bir alanda yazdırılacak ve gerekirse daha geniş olacak.
        Dönüştürülen argüman alan genişliğinden daha az karaktere sahipse,
        alan genişliğini tamamlamak için sola (veya sol ayar talep edilmişse sağa) doğru doldurulur.
        Doldurma karakteri normalde boşluktur, ancak sıfır doldurma bayrağı varsa 0'dır.

//[libc::p.291::12.12.2 Output Conversion Syntax]
    width
        İsteğe bağlı bir ondalık tam sayı, minimum alan genişliğini belirtir.
        Normal dönüşüm bu değerden daha az karakter üretirse, alan belirtilen genişliğe kadar boşluklarla doldurulur.
        Bu bir minimum değerdir; normal dönüşüm bu değerden daha fazla karakter üretirse, alan kırpılmaz.
        Normalde çıktı alan içinde sağa hizalanır.
        Ayrıca alan genişliği olarak '*' belirtilebilir.
        Bu, argüman listesindeki bir sonraki argümanın (yazdırılacak gerçek değerden önceki argüman) alan genişliği
        olarak kullanılacağı anlamına gelir. Değer bir int olmalıdır.
        Değer negatif ise, bu '-' bayrağını ayarlamak (aşağıda görüldüğü gibi) ve mutlak değeri alan genişliği
        olarak kullanmak anlamına gelir.

//[encpprefernce.com::input/output::formatted output]
    width
        (İsteğe bağlı) minimum alan genişliğini belirten tam sayı değeri veya *.
        Sonuç, sağa hizalandığında gerektiğinde boşluk karakterleriyle (varsayılan olarak) veya sola hizalandığında sağa dolgu yapılır.
         * kullanıldığında, genişlik int türünden ek bir argüman tarafından belirtilir;
         bu argüman, dönüştürülecek argümandan ve (varsa) hassasiyeti sağlayan argümandan önce görünür.
         Argümanın değeri negatifse, - bayrağı belirtilir ve pozitif alan genişliği kullanılır (Not: Bu minimum genişliktir;
         Değer kesinlikle kırpılmaz.).

 //[cplusplus.com::reference:<cstdio>:printf]
    width
        (sayi)	Yazdirilacak minimum karakter sayisi.Yazdirilacak deger bu sayidan kisaysa, sonuc bosluklarla doldurulur.
        Sonuc daha büyük olsa bile deger kesilmez.
        *	Genislik, bicim dizesinde belirtilmez,
        ancak bicimlendirilmesi gereken bagimsiz degiskenden once ek bir tamsayi degeri bagimsiz degiskeni olarak belirtilir.

//[fmc]
        width/genislik alt belirleyicisi aciklamasi:
        width(sayi):
            Yazdirilacak minimum karakter sayisi.Yazdirilacak deger bu sayidan kisaysa, sonuc bosluklarla doldurulur.
            Sonuc daha büyük olsa bile deger kesilmez.

        width(*):
            Genislik, bicim dizesinde belirtilmez,
            ancak bicimlendirilmesi gereken bagimsiz degiskenden once ek bir tamsayi degeri bagimsiz degiskeni olarak belirtilir.

        width/genislik alt belirleyicisi parametreler:
        width:
            [(sayi)]
            [*]

        width kullanimi
        width: 2 sekilde kullanilir " [(sayi)] ve [*] "
            (sayi):   printf("const char %[width(sayi)]specifier",arguman);
            *:           printf("const char %[*]specifier",width(sayi),arguman);

        width kullanimi ciktisi
            [varsayilan alan genisligi]
            [                    yazdirilicak deger genislik degerinden kucukse sonuc bosluklarla doldurulur]
*/
#include<stdio.h>
int main()
{

    printf("varsayilan alan genisligi %d\n",2147483647);
    printf("varsayilan alan genisligi [%%d] = [%d]\n",2147483647);
    printf("5 hanelik alan genisligi [%%5d] = [%5d]\n",2147483647);
    printf("15 hanelik alan genisligi [%%15d] = [%15d]\n",2147483647);
    printf("25 hanelik alan genisligi [%%25d] = [%25d]\n\n",2147483647);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*d] = [%*d]\n",5,2147483647);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*d] = [%*d]\n",15,2147483647);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*d] = [%*d]\n\n",25,2147483647);

    printf("5 hanelik alan genisligi [%%5i] = [%5i]\n",2147483647);
    printf("15 hanelik alan genisligi [%%15i] = [%15i]\n",2147483647);
    printf("25 hanelik alan genisligi [%%25i] = [%25i]\n\n",2147483647);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*i] = [%*i]\n",5,2147483647);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*i] = [%*i]\n",15,2147483647);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*i] = [%*i]\n\n",25,2147483647);

    printf("1 hanelik alan genisligi [%%1c] = [%1c]\n",'F');
    printf("3 hanelik alan genisligi [%%3c] = [%3c]\n",'M');
    printf("5 hanelik alan genisligi [%%5c] = [%5c]\n\n",'C');

    printf("1 hanelik alan genisligi * (yildiz) parametresi ile [%%*c] = [%*c]\n",1,'F');
    printf("3 hanelik alan genisligi * (yildiz) parametresi ile [%%*c] = [%*c]\n",3,'M');
    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*c] = [%*c]\n\n",5,'C');

    printf("5 hanelik alan genisligi [%%5u] = [%5u]\n",4294967295);
    printf("15 hanelik alan genisligi [%%15u] = [%15u]\n",4294967295);
    printf("25 hanelik alan genisligi [%%25u] = [%25u]\n\n",4294967295);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*u] = [%*u]\n",5,4294967295);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*u] = [%*u]\n",15,4294967295);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*u] = [%*u]\n\n",25,4294967295);

    printf("5 hanelik alan genisligi [%%5o] = [%5o]\n",4294967295);
    printf("15 hanelik alan genisligi [%%15o] = [%15o]\n",4294967295);
    printf("25 hanelik alan genisligi [%%25o] = [%25o]\n\n",4294967295);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*o] = [%*o]\n",5,4294967295);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*o] = [%*o]\n",15,4294967295);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*o] = [%*o]\n\n",25,4294967295);

    printf("5 hanelik alan genisligi [%%5x] = [%5x]\n",4294967295);
    printf("15 hanelik alan genisligi [%%15x] = [%15x]\n",4294967295);
    printf("25 hanelik alan genisligi [%%25x] = [%25x]\n\n",4294967295);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*x] = [%*x]\n",5,4294967295);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*x] = [%*x]\n",15,4294967295);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*x] = [%*x]\n\n",25,4294967295);

    printf("5 hanelik alan genisligi [%%5f] = [%5f]\n",1.123456);
    printf("15 hanelik alan genisligi [%%15f] = [%15f]\n",1.123456);
    printf("25 hanelik alan genisligi [%%25f] = [%25f]\n\n",1.123456);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*f] = [%*f]\n",5,1.123456);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*f] = [%*f]\n",15,1.123456);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*f] = [%*f]\n\n",25,1.123456);

    printf("5 hanelik alan genisligi [%%5e] = [%5e]\n",1.123456);
    printf("15 hanelik alan genisligi [%%15e] = [%15e]\n",1.123456);
    printf("25 hanelik alan genisligi [%%25e] = [%25e]\n\n",1.123456);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*e] = [%*e]\n",5,1.123456);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*e] = [%*e]\n",15,1.123456);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*e] = [%*e]\n\n",25,1.123456);

    printf("5 hanelik alan genisligi [%%5g] = [%5g]\n",1.12345);
    printf("15 hanelik alan genisligi [%%15g] = [%15g]\n",1.12345);
    printf("25 hanelik alan genisligi [%%25g] = [%25g]\n\n",1.12345);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*g] = [%*g]\n",5,1.12345);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*g] = [%*g]\n",15,1.12345);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*g] = [%*g]\n\n",25,1.12345);

    printf("5 hanelik alan genisligi [%%5a] = [%5a]\n",1.123456);
    printf("15 hanelik alan genisligi [%%15a] = [%15a]\n",1.123456);
    printf("25 hanelik alan genisligi [%%25a] = [%25a]\n\n",1.123456);

    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*a] = [%*a]\n",5,1.123456);
    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*a] = [%*a]\n",15,1.123456);
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*a] = [%*a]\n\n",25,1.123456);

    printf("1 hanelik alan genisligi [%%1s] = [%1s]\n","FMC");
    printf("5 hanelik alan genisligi [%%5s] = [%5s]\n","FMC");
    printf("7 hanelik alan genisligi [%%7s] = [%7s]\n\n","FMC");

    printf("1 hanelik alan genisligi * (yildiz) parametresi ile [%%*s] = [%*s]\n",1,"FMC");
    printf("5 hanelik alan genisligi * (yildiz) parametresi ile [%%*s] = [%*s]\n",5,"FMC");
    printf("7 hanelik alan genisligi * (yildiz) parametresi ile [%%*s] = [%*s]\n\n",7,"FMC");

    printf("15 hanelik alan genisligi [%%15a] = [%15a]\n","FMC");
    printf("25 hanelik alan genisligi [%%25a] = [%25a]\n","FMC");
    printf("30 hanelik alan genisligi [%%30a] = [%30a]\n\n","FMC");

    printf("15 hanelik alan genisligi * (yildiz) parametresi ile [%%*a] = [%*a]\n",15,"FMC");
    printf("25 hanelik alan genisligi * (yildiz) parametresi ile [%%*a] = [%*a]\n",25,"FMC");
    printf("30 hanelik alan genisligi * (yildiz) parametresi ile [%%*a] = [%*a]\n\n",30,"FMC");
}
