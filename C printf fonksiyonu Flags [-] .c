/*

kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.310::7.21.6.1 the fprintf function]
    flags[-]:
      Dönüşüm sonucu alan içinde sola yaslanır. (Bu bayrak belirtilmemişse, sağa yaslanır.)
      
//[The C Programming Language,2nd Edition::p.243::B1.2 Formatted Output] 
    flags[-]:
      Bu, dönüştürülen argümanın alanında sol hizalamayı belirtir.
      
//[libc::p.293::12.12.4 Integer Conversions]
    flags[-]:
      Sonucu alan içinde sola hizalayın (normal sağ hizalamaya göre).
      
//[libc::p.296::12.12.5 Floating-point Conversions]
    flags[-]:
      Sonucu alanda sola hizalayın. Normalde sonuç sağa hizalanır.

//[encpprefernce.com::input/output::formatted output]
    flags[-]:
      Dönüştürmenin sonucu, alan içinde sola yaslıdır (varsayılan olarak sağa yaslıdır).

 //[cplusplus.com::reference:<cstdio>:printf]
    flags[-]:
     Verilen alan genişliği içinde sola yaslayın; Sağa yaslama varsayılandır (bkz. genişlik alt belirleyicisi).

//[fmc]
  flags[-] kullanimi
    [varsayilan alan genisligi]
    [                                              vasrayilan hizlama alan genisligi dahilinde saga yaslanir]
    [- (eksi bayragi) ile hizalama alan genisligi dahilinde sola hizalanir                             ]

    flag/bayrak [-] kullanimi:
    [% flag(-) specifier]  = [%-d]
    
*/

#include<stdio.h>

int main()
{
    printf("varsayilan gosterim %%d %d\n",2147483647);
    printf("varsayilan genislik gosterim [%%d] = [%d]\n",2147483647);
    printf("varsayilan genislik/alan gosterim [alan] [%%d] = [%d]\n\n",2147483647);

    printf("saga hizalama varsayilan [%%d] = [%d]\n",2147483647);
    printf("5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5d] = [%5d]\n",2147483647);
    printf("15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15d] = [%15d]\n",2147483647);
    printf("20 hanelik genislik kullanimi[%% genislik belirleyici] [%%20d] = [%20d]\n\n",2147483647);

    printf("5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5d] = [%-5d]\n",2147483647);
    printf("15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15d] = [%-15d]\n",2147483647);
    printf("20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20d] = [%-20d]\n\n",2147483647);

    printf("saga hizalama varsayilan [%%i] = [%i]\n",2147483647);
    printf("5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5i] = [%5i]\n",2147483647);
    printf("15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15i] = [%15i]\n",2147483647);
    printf("20 hanelik genislik kullanimi[%% genislik belirleyici] [%%20i] = [%20i]\n\n",2147483647);

    printf("5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5i] = [%-5i]\n",2147483647);
    printf("15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15i] = [%-15i]\n",2147483647);
    printf("20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20i] = [%-20i]\n\n",2147483647);

    printf(" saga hizalama varsayilan [%%c] = [%c]\n",'F');
    printf(" 1 hanelik genislik kullanimi[%% genislik belirleyici] [%%1c] = [%1c]\n",'F');
    printf(" 3 hanelik genislik kullanimi[%% genislik belirleyici] [%%3c] = [%3c]\n",'F');
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5c]  = [%5c]\n\n",'F');

    printf(" 1 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-1c] = [%-1c]\n",'F');
    printf(" 3 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-3c] = [%-3c]\n",'F');
    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5c] = [%-5c]\n\n",'F');

    printf(" saga hizalama varsayilan [%%u] = [%u]\n",4294967295);
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5u] = [%5u]\n",4294967295);
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15u] = [%15u]\n",4294967295);
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20u] = [%20u]\n\n",4294967295);

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5u]  = [%-5u]\n",4294967295);
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15u] = [%-15u]\n",4294967295);
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20u] = [%-20u]\n\n",4294967295);

    printf(" saga hizalama varsayilan [%%o] = [%o]\n",4294967295);
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5o] = [%5o]\n",4294967295);
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15o] = [%15o]\n",4294967295);
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20o] = [%20o]\n\n",4294967295);

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5o]  = [%-5o]\n",4294967295);
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15o] = [%-15o]\n",4294967295);
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20o] = [%-20o]\n\n",4294967295);

    printf(" saga hizalama varsayilan [%%x] = [%x]\n",4294967295);
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5x] = [%5x]\n",4294967295);
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15x] = [%15x]\n",4294967295);
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20x] = [%20x]\n\n",4294967295);

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5x]  = [%-5x]\n",4294967295);
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15x] = [%-15x]\n",4294967295);
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20x] = [%-20x]\n\n",4294967295);

    printf(" saga hizalama varsayilan [%%f] = [%f]\n",1.234567);
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5f] = [%5f]\n",1.234567);
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15f] = [%15f]\n",1.234567);
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20f] = [%20f]\n\n",1.234567);

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5f]  = [%-5f]\n",1.234567);
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15f] = [%-15f]\n",1.234567);
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20f] = [%-20f]\n\n",1.234567);

    printf(" saga hizalama varsayilan [%%e] = [%e]\n",1.234567);
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5e] = [%5e]\n",1.234567);
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15e] = [%15e]\n",1.234567);
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20e] = [%20e]\n\n",1.234567);

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5e]  = [%-5e]\n",1.234567);
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15e] = [%-15e]\n",1.234567);
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20e] = [%-20e]\n\n",1.234567);

    printf(" saga hizalama varsayilan [%%g] = [%g]\n",1.23456);
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5g] = [%5g]\n",1.23456);
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15g] = [%15g]\n",1.23456);
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20g] = [%20g]\n\n",1.23456);

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5g]  = [%-5g]\n",1.23456);
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15g] = [%-15g]\n",1.23456);
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20g] = [%-20g]\n\n",1.23456);

    printf(" saga hizalama varsayilan [%%a] = [%a]\n",1.234567);
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5a] = [%5a]\n",1.234567);
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15a] = [%15a]\n",1.234567);
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20a] = [%20a]\n\n",1.234567);

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5a]  = [%-5a]\n",1.234567);
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15a] = [%-15a]\n",1.234567);
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20a] = [%-20a]\n\n",1.234567);

    printf(" saga hizalama varsayilan [%%s] = [%s]\n","FMC");
    printf(" 5 hanelik genislik kullanimi[%% genislik belirleyici] [%%5s] = [%5s]\n","FMC");
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15s] = [%15s]\n","FMC");
    printf(" 20hanelik genislik kullanimi[%% genislik belirleyici] [%%20s] = [%20s]\n\n","FMC");

    printf(" 5 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-5s]  = [%-5s]\n","FMC");
    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15s] = [%-15s]\n","FMC");
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20s] = [%-20s]\n\n","FMC");

    printf(" saga hizalama varsayilan [%%p] = [%p]\n","FMC");
    printf(" 15 hanelik genislik kullanimi[%% genislik belirleyici] [%%15p] = [%15p]\n","FMC");
    printf(" 20 hanelik genislik kullanimi[%% genislik belirleyici] [%%20p] = [%20p]\n","FMC");
    printf(" 25hanelik genislik kullanimi[%% genislik belirleyici] [%%25p] = [%25p]\n\n","FMC");

    printf(" 15 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-15p]  = [%-15p]\n","FMC");
    printf(" 20 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-20p] = [%-20p]\n","FMC");
    printf(" 25 hanelik genislik kullanimi - (eksi) bayragi ile kullanimi [%% bayrak genislik belirleyici] [%%-25p] = [%-25p]\n\n","FMC");

}
