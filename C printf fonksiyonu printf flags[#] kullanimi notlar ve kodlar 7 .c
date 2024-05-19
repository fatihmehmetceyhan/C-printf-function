/*
    printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024
     
youtube linki
https://youtu.be/6q_aYflvQLA?si=rbEuvue-zzUhZ0yS
    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier
    
    %[flags]specifier
    
kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.310::7.21.6.1 the fprintf function]
    flags[#]:
      Sonuç, "alternatif form" olarak dönüştürülür. o dönüşümü için, sonucun ilk rakamını sıfır yapmak için gerekli olan, eğer gerekli ise, 
      hassasiyet artar (eğer değer ve hassasiyet her ikisi de 0 ise, yalnızca bir 0 yazdırılır). x (veya X) dönüşümü için, sıfırdan farklı bir sonuca önünde 0x (veya 0X) eklenir. 
      a, A, e, E, f, F, g ve G dönüşümleri için, bir kayan noktalı sayıyı dönüştürmenin sonucu her zaman bir ondalık nokta karakteri içerir, hatta onu takip eden herhangi bir rakam yoksa bile. 
      (Normalde, bu dönüşümlerin sonucunda bir ondalık nokta karakteri, onu takip eden bir rakam yoksa, sadece görünür.) g ve G dönüşümleri için, sonuçtan sondaki sıfırlar çıkarılmaz. 
      Diğer dönüşümler için, davranış belirsizdir.
      
//[The C Programming Language,2nd Edition::p.243::B1.2 Formatted Output] 
    flags[#]:
      Alternatif bir çıkış biçimini belirtir. o için, ilk rakam sıfır olacaktır. x veya X için, sıfırdan farklı bir sonuca Ox veya OX ön eklenir. 
      e, E, f, g ve G için çıktı her zaman bir ondalık noktaya sahip olacaktır; g ve G için, sondaki sıfırlar kaldırılmaz.
      
//[libc::p.293::12.12.4 Integer Conversions]
    flags[#]:
      '%o' dönüşümü için, bu, baştaki rakamın '0' olmasını zorlar, sanki hassasiyet artırılmış gibi. '%x' veya '%X' için, sonucun önüne '0x' veya '0X' (sırasıyla) ekler.
       Bu, '%d', '%i' veya '%u' dönüşümleri için işe yaramaz. Bu bayrağın kullanımı, strtoul işlevi tarafından ayrıştırılabilen çıktı üretir 
       (bkz. Bölüm 20.11.1 [Tamsayıların Ayrıştırılması], sayfa 649) ve scanf ile '%i' dönüşümü (bkz. Bölüm 12.14.4 [Sayısal Giriş Dönüşümleri], sayfa 316). 
      
//[libc::p.296::12.12.5 Floating-point Conversions]
    flags[#]:
      Sonucun her zaman bir ondalık nokta içermesi gerektiğini belirtir, hatta arkasından hiç rakam gelmiyor olsa bile. 
      '%g' ve '%G' dönüşümleri için, bu ayrıca ondalık noktadan sonra sondaki sıfırların yerinde kalmasını zorlar; aksi takdirde kaldırılırlardı.

//[encpprefernce.com::input/output::formatted output]
    flags[#]:
       Alternatif dönüşüm şekli gerçekleştirilir. Kesin etkiler için aşağıdaki tabloya bakın, aksi takdirde davranış tanımsızdır.

 //[cplusplus.com::reference:<cstdio>:printf]
    flags[#]:
      o, x veya X belirleyicileriyle birlikte kullanıldığında, sıfırdan farklı değerler için değerden önce sırasıyla 0, 0x veya 0X gelir. 
      a, A, e, E, f, F, g veya G ile birlikte kullanıldığında, daha fazla basamak takip etmese bile yazılı çıktıyı ondalık nokta içermeye zorlar. 
      Varsayılan olarak, basamak takip etmiyorsa, ondalık nokta yazılmaz.

//[fmc]
    flags[#]
      alternatif bir cikti formunu belirtir.
      %o icin ilk hane sifir olacaktir.
      %x veya %X icin, sifir olmayan bir sonucun onune 0x veya 0X eklenecektir.
      e, E, f, g ve G icin cikti her zaman ondalik noktasi vardir; g ve G icin sondaki sifirlar kaldirilmayacaktir.

      [varsayilan deger]
      [0 %o icin degerin onune 0 koyar]
      [0x %x icin degerin onune 0x koyar]
      [0X %X icin degerin onune 0X koyar]

      [%e icin deger degismez]
      [%E icin deger degismez]
      [%f icin deger degismez]
      [%F icin deger degismez]
      [%g icin deger degismez]
      [%G icin deger degismez]

      [%g icin sondaki sifirlar kaldirilmaz]
      [%G icin sondaki sifirlar kaldirilmaz]

    flag/bayrak [#] kullanimi:
    [% flag(#) specifier]  = [%#o]
    
*/
#include<stdio.h>
int main()
{
    printf("varsayilan gosterim %o\n",4294967295);
    printf("varsayilan gosterim [%%o] = [%o]\n",4294967295);
    printf("# (kare) bayrak kullanimi  [%%#o] = [%#o]\n\n",4294967295);

    printf("varsayilan gosterim [%%x] = [%x]\n",4294967295);
    printf("# (kare) bayrak kullanimi  [%%#x] = [%#x]\n\n",4294967295);

    printf("varsayilan gosterim [%%X] = [%X]\n",4294967295);
    printf("# (kare) bayrak kullanimi  [%%#X] = [%#X]\n\n",4294967295);

    printf("varsayilan gosterim [%%e] = [%e]\n",1.123456);
    printf("# (kare) bayrak kullanimi  [%%#e] = [%#e]\n\n",1.123456);

    printf("varsayilan gosterim [%%f] = [%f]\n",1.123456);
    printf("# (kare) bayrak kullanimi  [%%#f] = [%#f]\n\n",1.123456);

    printf("varsayilan gosterim [%%g] = [%g]\n",1.12345);
    printf("# (kare) bayrak kullanimi  [%%#g] = [%#g]\n\n",1.12345);

    printf("varsayilan gosterim [%%g] = [%g]\n",123.0);
    printf("# (kare) bayrak kullanimi  [%%#g] = [%#g]\n\n",123.0);

    printf("varsayilan gosterim [%%g] = [%g]\n",12.0);
    printf("# (kare) bayrak kullanimi  [%%#g] = [%#g]\n\n",12.0);
}
