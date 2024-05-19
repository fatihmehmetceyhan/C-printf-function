/*
    printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024
     
youtube linki
https://youtu.be/lYpbF5aqwoY?si=-4wr8XRsX6XimCey
printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier
    
    %[flags]specifier
    
kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.310::7.21.6.1 the fprintf function]
    flags[0]:
      d, i, o, u, x, X, a, A, e, E, f, F, g ve G dönüşümleri için, öncü işaret veya taban belirtisinden sonra başlayan öncü sıfırlar (leading zeros), 
      sonsuzluk veya NaN dönüştürülüyorsa alan genişliğine dolgu yapmak için kullanılır, boşluk dolgu yerine. 
      0 ve - bayrakları birlikte görünürse, 0 bayrağı yok sayılır. d, i, o, u, x ve X dönüşümleri için, bir hassasiyet belirtilmişse, 0 bayrağı yok sayılır. Diğer dönüşümler için davranış belirsizdir.
      
//[The C Programming Language,2nd Edition::p.243::B1.2 Formatted Output] 
    flags[0]:
      Numeric dönüşümler için, alan genişliğine başta sıfırlarla dolgu yapılmasını belirtir.
      
//[libc::p.293::12.12.4 Integer Conversions]
    flags[0]:
      Alanı boşluklar yerine sıfırlarla doldur. Sıfırlar, işaret veya taban belirtisinden sonra yerleştirilir. Bu bayrak, ‘-’ bayrağı da belirtildiğinde veya bir hassasiyet belirtildiğinde yoksayılır.
      
//[libc::p.296::12.12.5 Floating-point Conversions]
    flags[0]:
      Alanı boşluklar yerine sıfırlarla doldur; sıfırlar, herhangi bir işaretten sonra yerleştirilir. Bu bayrak, ‘-’ bayrağı da belirtildiğinde yoksayılır.

//[encpprefernce.com::input/output::formatted output]
    flags[0]:
       Tamsayı ve kayan noktalı sayı dönüşümlerinde, alanı doldurmak için boşluk karakterleri yerine baştaki sıfırlar kullanılır. Tam sayılar için, kesinlik açıkça belirtilmişse yok sayılır. 
       Diğer dönüşümler için bu bayrağın kullanılması tanımsız davranışa neden olur. Bayrak varsa yok sayılır. -

 //[cplusplus.com::reference:<cstdio>:printf]
    flags[0]:
	    Dolgu belirtildiğinde sayıyı boşluk yerine sıfırlarla (0) sol kenara koyar (bkz. genişlik alt belirleyicisi).

//[fmc]
    flags[0]
        sayisal donusumler icin, alan genisligine bastaki sifirlarla dolgu yapilmasini belirtir.
        turleri icin gecerli: %d, %i, %c, %u, %o, %x, %f, %e, %g, %a, %s bicim belirleyicilerinde calisir

    genislik alt belirleyicisi
    Yazdirilacak minimum karakter sayisi.
    Yazdirilacak deger bu sayidan kisaysa, sonuc bosluklarla doldurulur. Sonuc daha buyuk olsa bile deger kesilmez.

    [varsayilan alan genisligi]
    [                    yazdirilicak deger genislik degerinden kucukse sonuc bosluklarla doldurulur]
    [0000000000000000000 [0] bayrak kullanimi ile yazdirilicak deger genislik degerinden kucukse sonuc 0 ile doldurulur]

    flag/bayrak [0] kullanimi:
    [% flag(0) specifier]  = [%0d] 
*/
#include<stdio.h>
int main()
{
    printf("varsayilan alan genisligi %d\n",2147483647);
    printf("varsayilan alan genisligi [%%d] = [%d]\n\n",2147483647);

    printf("5 hanelik alan genisligi [%%5d] = [%5d]\n",2147483647);
    printf("15 hanelik alan genisligi [%%15d] = [%15d]\n",2147483647);
    printf("20 hanelik alan genisligi [%%20d] = [%20d]\n\n",2147483647);

    printf("15 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%015d] = [%015d]\n",2147483647);
    printf("20 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%020d] = [%020d]\n\n",2147483647);

    printf("5 hanelik alan genisligi [%%5i] = [%5i]\n",2147483647);
    printf("15 hanelik alan genisligi [%%15i] = [%15i]\n",2147483647);
    printf("20 hanelik alan genisligi [%%20i] = [%20i]\n\n",2147483647);

    printf("15 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%015i] = [%015i]\n",2147483647);
    printf("20 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%020i] = [%020i]\n\n",2147483647);

    printf("1 hanelik alan genisligi [%%1c] = [%1c]\n",'F');
    printf("3 hanelik alan genisligi [%%3c] = [%3c]\n",'M');
    printf("5 hanelik alan genisligi [%%5c] = [%5c]\n\n",'C');

    printf("3 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%03c] = [%03c]\n",'F');
    printf("5 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%05c] = [%05c]\n\n",'M');

    printf("5 hanelik alan genisligi [%%5u] = [%5u]\n",4294967295);
    printf("15 hanelik alan genisligi [%%15u] = [%15u]\n",4294967295);
    printf("20 hanelik alan genisligi [%%20u] = [%20u]\n\n",4294967295);

    printf("15 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%015u] = [%015u]\n",4294967295);
    printf("20 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%020u] = [%020u]\n\n",4294967295);

    printf("5 hanelik alan genisligi [%%5o] = [%5o]\n",4294967295);
    printf("15 hanelik alan genisligi deger donusumde 11 hane olarak yazdiriliyor [%%15o] = [%15o]\n",4294967295);
    printf("20 hanelik alan genisligi deger donusumde 11 hane olarak yazdiriliyor [%%20o] = [%20o]\n\n",4294967295);

    printf("15 hanelik alan genisligi deger donusumde 11 hane olarak yazdiriliyor 0(sifir) bayrak kullanimi ile [%%015o] = [%015o]\n",4294967295);
    printf("20 hanelik alan genisligi deger donusumde 11 hane olarak yazdiriliyor 0(sifir) bayrak kullanimi ile [%%020o] = [%020o]\n\n",4294967295);

    printf("5 hanelik alan genisligi [%%5x] = [%5x]\n",4294967295);
    printf("15 hanelik alan genisligi deger donusumde 8 hane olarak yazdiriliyor [%%15x] = [%15x]\n",4294967295);
    printf("20 hanelik alan genisligi deger donusumde 8 hane olarak yazdiriliyor [%%20x] = [%20x]\n\n",4294967295);

    printf("15 hanelik alan genisligi deger donusumde 8 hane olarak yazdiriliyor 0(sifir) bayrak kullanimi ile [%%015x] = [%015x]\n",4294967295);
    printf("20 hanelik alan genisligi deger donusumde 8 hane olarak yazdiriliyor 0(sifir) bayrak kullanimi ile [%%020x] = [%020x]\n\n",4294967295);

    printf("5 hanelik alan genisligi [%%5f] = [%5f]\n",1.123456);
    printf("15 hanelik alan genisligi  [%%15f] = [%15f]\n",1.123456);
    printf("20 hanelik alan genisligi [%%20f] = [%20f]\n\n",1.123456);

    printf("15 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%015f] = [%015f]\n",1.123456);
    printf("20 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%020f] = [%020f]\n",1.123456);

    printf("5 hanelik alan genisligi [%%5e] = [%5e]\n",1.123456);
    printf("15 hanelik alan genisligi [%%15e] = [%15e]\n",1.123456);
    printf("20 hanelik alan genisligi [%%20e] = [%20e]\n\n",1.123456);

    printf("15 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%015e] = [%015e]\n",1.123456);
    printf("20 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%020e] = [%020e]\n\n",1.123456);

    printf("5 hanelik alan genisligi [%%5g] = [%5g]\n",1.12345);
    printf("15 hanelik alan genisligi [%%15g] = [%15g]\n",1.12345);
    printf("20 hanelik alan genisligi [%%20g] = [%20g]\n\n",1.12345);

    printf("15 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%015g] = [%015g]\n",1.12345);
    printf("20 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%020g] = [%020g\n\n",1.12345);

    printf("20 hanelik alan genisligi deger donusumde 20 hane olarak yazdiriliyor [%%20a] = [%20a]\n",1.123456);
    printf("25 hanelik alan genisligi deger donusumde 20 hane olarak yazdiriliyor [%%25a] = [%25a]\n",1.123456);
    printf("30 hanelik alan genisligi deger donusumde 20 hane olarak yazdiriliyor [%%30a] = [%30a]\n\n",1.123456);

    printf("25 hanelik alan genisligi deger donusumde 20 hane olarak yazdiriliyor 0(sifir) bayrak kullanimi ile [%%025a] = [%025a]\n",1.123456);
    printf("30 hanelik alan genisligi deger donusumde 20 hane olarak yazdiriliyor 0(sifir) bayrak kullanimi ile [%%030a] = [%030a]\n\n",1.123456);

    printf("3 hanelik alan genisligi [%%3s] = [%3s]\n","FMC");
    printf("5 hanelik alan genisligi [%%5s] = [%5s]\n","FMC");
    printf("7 hanelik alan genisligi [%%7s] = [%7s]\n\n","FMC");

    printf("5 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%05s] = [%05s]\n","FMC");
    printf("7 hanelik alan genisligi 0(sifir) bayrak kullanimi ile [%%07s] = [%07s]\n\n","FMC");
}
