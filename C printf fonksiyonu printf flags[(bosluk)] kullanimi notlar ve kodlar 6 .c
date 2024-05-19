/*
    printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024
     
youtube linki
https://youtu.be/9HRNncxDCP8?si=0_KE0AE5YRrW1En2

    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier
    
    %[flags]specifier
    
kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.310::7.21.6.1 the fprintf function]
    flags[(bosluk)]:
     Eğer işaretli bir dönüşümün ilk karakteri bir işaret değilse veya bir işaretli dönüşüm sonuçta hiç karakter üretmiyorsa, sonuca bir boşluk öne eklenir. 
     Eğer boşluk ve + bayrakları her ikisi de görünüyorsa, boşluk bayrağı görmezden gelinir.
      
//[The C Programming Language,2nd Edition::p.243::B1.2 Formatted Output] 
    flags[(bosluk)]:
      Eğer ilk karakter bir işaret değilse, bir boşluk öne eklenir.
      
//[libc::p.293::12.12.4 Integer Conversions]
    flags[(bosluk)]:
      İşaretli ' %d ' ve ' %i ' dönüşümleri için, sonuç artı veya eksi işaretle başlamıyorsa, bunun yerine bir boşluk karakteri öne eklenir. 
      Sonucun bir işaret içerdiğinden emin olmak için '+ ' bayrağı sağlandığından, her ikisini de sağlarsanız bu bayrak görmezden gelinir.
      
//[libc::p.296::12.12.5 Floating-point Conversions]
    flags[(bosluk)]:
      Eğer sonuç artı veya eksi işaretle başlamıyorsa, onun yerine bir boşluk öne eklenir. 
      Sonucun bir işaret içerdiğinden emin olmak için '+ ' bayrağı sağlandığından, her ikisini de sağlarsanız bu bayrak görmezden gelinir.

//[encpprefernce.com::input/output::formatted output]
    flags[(bosluk)]:
      İmzalı dönüştürmenin sonucu bir işaret karakteriyle başlamıyorsa veya boşsa, sonucun başına boşluk eklenir. Bayrak varsa yok sayılır. +

 //[cplusplus.com::reference:<cstdio>:printf]
    flags[(bosluk)]:
     Herhangi bir işaret yazılmayacaksa, değerden önce bir boşluk bırakılır.

//[fmc]
    flags[(bosluk)]
      imzali donusturmenin sonucu bir isaret karakteriyle baslamiyorsa veya bossa, sonucun basina bosluk eklenir.
      [+] flag/Bayrak varsa yok sayilir.

      imzali/isaretli sayi turleri icin gecerli: %d, %i, %f, %e, %g, %a bicim belirleyicilerinde calisir
      imzasiz/isaretsiz turlerde gecersiz  %o, %x, %u, %c, %s, %n %p bicim belirleyicilerinde calismaz

      [varsayilan deger]
      [   degerin onunde [-,+] flags/Bayraklar yoksa sonucun onune bir hanelik bosluk ekler]
      [(-,+)degerin onunde [-,+] flags/Bayraklar varsa sonucun onune bir hanelik bosluk eklemez. degerin onune  (-,+) flags/Bayraklar yazilir]

      flag/bayrak [(bosluk)] kullanimi:
      [% flag(bosluk) specifier]  = [% d]
    
*/

#include<stdio.h>
int main()
{
    printf("varsayilan bosluk %d\n",2147483647);
    printf("varsayilan bosluk [%%d] = [%d]\n\n",2147483647);

    printf("bosluk bayrak kullanimi [%% flag(bosluk) specifier] [%% d] = [% d]\n",2147483647);
    printf("bosluk bayrak kullanimi birden fazla bosluk birakmak sonuca tek bosluk birakir [%% flag(bosluk) specifier] [%%          d] = [%        d]\n",2147483647);
    printf("bosluk bayrak kullanimi + (arti) bayrak varsa yok sayilir [%% flag(+) flag(bosluk) specifier] [%%+ d] = [%+ d]\n\n",2147483647);

    printf("bosluk bayrak kullanimi [%% flag(bosluk) specifier] [%% i] = [% i]\n",2147483647);
    printf("bosluk bayrak kullanimi birden fazla bosluk birakmak sonuca tek bosluk birakir [%% flag(bosluk) specifier] [%%          i] = [%        i]\n",2147483647);
    printf("bosluk bayrak kullanimi + (arti) bayrak varsa yok sayilir [%% flag(+) flag(bosluk) specifier] [%%+ i] = [%+ i]\n\n",2147483647);

    printf("bosluk bayrak kullanimi [%% flag(bosluk) specifier] [%% f] = [%# f]\n",1.123456);
    printf("bosluk bayrak kullanimi birden fazla bosluk birakmak sonuca tek bosluk birakir [%% flag(bosluk) specifier] [%%          f] = [%        f]\n",1.123456);
    printf("bosluk bayrak kullanimi + (arti) bayrak varsa yok sayilir [%% flag(+) flag(bosluk) specifier] [%%+ f] = [%+ f]\n\n",1.123456);

    printf("bosluk bayrak kullanimi [%% flag(bosluk) specifier] [%% e] = [% e]\n",1.123456);
    printf("bosluk bayrak kullanimi birden fazla bosluk birakmak sonuca tek bosluk birakir [%% flag(bosluk) specifier] [%%          e] = [%        e]\n",1.123456);
    printf("bosluk bayrak kullanimi + (arti) bayrak varsa yok sayilir [%% flag(+) flag(bosluk) specifier] [%%+ e] = [%+ e]\n\n",1.123456);

    printf("bosluk bayrak kullanimi [%% flag(bosluk) specifier] [%% g] = [%# g]\n",1.12);
    printf("bosluk bayrak kullanimi birden fazla bosluk birakmak sonuca tek bosluk birakir [%% flag(bosluk) specifier] [%%          g] = [%        g]\n",1.12345);
    printf("bosluk bayrak kullanimi + (arti) bayrak varsa yok sayilir [%% flag(+) flag(bosluk) specifier] [%%+ g] = [%+ g]\n\n",1.12345);

    printf("bosluk bayrak kullanimi [%% flag(bosluk) specifier] [%% a] = [% a]\n",1.123456);
    printf("bosluk bayrak kullanimi birden fazla bosluk birakmak sonuca tek bosluk birakir [%% flag(bosluk) specifier] [%%          a] = [%        a]\n",1.123456);
    printf("bosluk bayrak kullanimi + (arti) bayrak varsa yok sayilir [%% flag(+) flag(bosluk) specifier] [%%+ a] = [%+ a]\n\n",1.123456);

}
