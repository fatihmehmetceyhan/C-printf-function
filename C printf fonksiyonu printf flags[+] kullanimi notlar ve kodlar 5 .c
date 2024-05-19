/*
    printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024
     
youtube linki
https://youtu.be/tVPjAFi5Pvs?si=ULLELafG2WnzXjmS

    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier
    
    %[flags]specifier
    
kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.310::7.21.6.1 the fprintf function]
    flags[+]:
      Bir işaretli dönüşümün sonucu her zaman artı veya eksi işareti ile başlar. (Bu bayrak belirtilmemişse, yalnızca negatif bir değer dönüştürüldüğünde işaretle başlar.)
      
//[The C Programming Language,2nd Edition::p.243::B1.2 Formatted Output] 
    flags[+]:
      Bu, sayının her zaman bir işaret ile yazdırılacağını belirtir.
      
//[libc::p.293::12.12.4 Integer Conversions]
    flags[+]:
      İşaretli ‘%d’ ve ‘%i’ dönüşümleri için, değer pozitifse artı işareti yazdırılır.
      
//[libc::p.296::12.12.5 Floating-point Conversions]
    flags[+]:
      Sonuçta her zaman artı veya eksi işareti dahil edin.

//[encpprefernce.com::input/output::formatted output]
    flags[+]:
      İmzalı dönüşümlerin işareti her zaman dönüşümün sonucunun başına eklenir (varsayılan olarak, sonuç yalnızca negatif olduğunda eksi ile başlar).

 //[cplusplus.com::reference:<cstdio>:printf]
    flags[+]:
     Pozitif sayılar için bile sonucun önüne artı veya eksi işareti (+ veya -) koymaya zorlar. Varsayılan olarak, yalnızca negatif sayıların önünde - işareti bulunur.

//[fmc]
    flags[+]

      Pozitif sayilar için bile sonucun önüne arti veya eksi isareti (+ veya -) koymaya zorlar.
      Varsayilan olarak, yalnizca negatif sayilarin önünde - isareti bulunur.

      imzali/isaretli turlerde gecerli: %d, %i, %f, %e, %g, %a bicim belirleyicilerinde calisir
      imzasiz/isaretsiz turlerde gecersiz: %o, %x, %u, %c, %s, %n %p bicim belirleyicilerinde calismaz

      [varsayilan deger]
      [+ deger pozitif ise + (arti bayragi) ile kullanimda sonucun onune + (arti bayragi) eklenir]
      [- deger negatif ise + (arti bayragi) ile kullanimda sonucun onune + (arti bayragi) eklemez. deger negatif olarak yazilir]

      flag/bayrak [+] kullanimi:
      [% flag(+) specifier]  = [%+d]
    
*/
#include<stdio.h>
int main()
{
    printf("normal deger %d\n",2147483647);
    printf("normal deger [%%d] = [%d]\n\n",2147483647);

    printf("+(arti) bayragi kullanimi pozitif sayilar icin [%% flag(+) specifier] [%%+d] = [%+d]\n\n",2147483647);

    printf("+(arti) bayragi kullanimi negatif sayilar icin [%% flag(+) specifier] [%%+d] = [%+d]\n",-2147483648);
    printf("+(arti) bayragi kullanimi negatif sayilar icin degrin onune +(arti)  isareti yazdiramaz [%% flag(+) specifier] [%%+d] = [%+d]\n\n",-2147483648);

    printf("+(arti) bayragi kullanimi pozitif sayilar icin [%% flag(+) specifier] [%%+i] = [%+i]\n\n",2147483647);

    printf("+(arti) bayragi kullanimi negatif sayilar icin [%% flag(+) specifier] [%%+i] = [%+i]\n",-2147483648);
    printf("+(arti) bayragi kullanimi negatif sayilar icin degrin onune +(arti)  isareti yazdiramaz [%% flag(+) specifier] [%%+i] = [%+i]\n\n",-2147483648);

    printf("+(arti) bayragi kullanimi pozitif sayilar icin [%% flag(+) specifier] [%%+f] = [%+f]\n\n",1.123456);

    printf("+(arti) bayragi kullanimi negatif sayilar icin [%% flag(+) specifier] [%%+f] = [%+f]\n",-1.123456);
    printf("+(arti) bayragi kullanimi negatif sayilar icin degrin onune +(arti)  isareti yazdiramaz [%% flag(+) specifier] [%%+f] = [%+f]\n\n",-1.123456);

    printf("+(arti) bayragi kullanimi pozitif sayilar icin [%% flag(+) specifier] [%%+e] = [%+e]\n\n",1.123456);

    printf("+(arti) bayragi kullanimi negatif sayilar icin [%% flag(+) specifier] [%%+e] = [%+e]\n",-1.123456);
    printf("+(arti) bayragi kullanimi negatif sayilar icin degrin onune +(arti)  isareti yazdiramaz [%% flag(+) specifier] [%%+e] = [%+e]\n\n",-1.123456);

    printf("+(arti) bayragi kullanimi pozitif sayilar icin [%% flag(+) specifier] [%%+g] = [%+g]\n\n",1.12345);

    printf("+(arti) bayragi kullanimi negatif sayilar icin [%% flag(+) specifier] [%%+g] = [%+g]\n",-1.12345);
    printf("+(arti) bayragi kullanimi negatif sayilar icin degrin onune +(arti)  isareti yazdiramaz [%% flag(+) specifier] [%%+g] = [%+g]\n\n",-1.12345);

    printf("+(arti) bayragi kullanimi pozitif sayilar icin [%% flag(+) specifier] [%%+a] = [%+a]\n\n",1.123456);

    printf("+(arti) bayragi kullanimi negatif sayilar icin [%% flag(+) specifier] [%%+a] = [%+a]\n",-1.123456);
    printf("+(arti) bayragi kullanimi negatif sayilar icin degrin onune +(arti)  isareti yazdiramaz [%% flag(+) specifier] [%%+a] = [%+a]\n\n",-1.123456);

}
