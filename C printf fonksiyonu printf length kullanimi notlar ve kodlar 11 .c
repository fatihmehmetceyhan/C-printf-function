/*
     printf fonksiyonu printf format specifier kullanimi ve ornekleri:
     olusturma tarihi: 25/05/2024
     olusturan: Fatih Mehmet CEYHAN: FMC
     yukleme tarihi 26/05/2024

    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier

    %[length]specifier

    kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.310::7.21.6.1 the fprintf function]
    length
        istege bagli olarak, argumanin boyutunu belirten bir uzunluk degistiricisi.

//[The C Programming Language,2nd Edition::p.244::B1.2 Formatted Output]
    length
        Bir uzunluk degistiricisi olan "h", "l" (küçük "L" harfi) veya "L" (büyük "L" harfi). "h" degistiricisi,
        ilgili argumanin kisa veya isaretsiz kisa olarak yazdirilacagini belirtir; "l" degistiricisi,
        argumanin uzun veya isaretsiz uzun oldugunu belirtir; "L" degistiricisi ise, argumanin uzun çift olarak yazdirilacagini belirtir.

//[libc::p.291::12.12.2 Output Conversion Syntax]
    length
        Bir opsiyonel tur degistiricisi karakter, karsilik gelen argumanin veri türünü varsayilan türden farkliysa belirtmek icin kullanilir.
        (Örneigin, tamsayi donusumleri int türünü varsayar, ancak diger tamsayi türleri icin 'h', 'l' veya 'L' belirtebilirsiniz.)

//[encpprefernce.com::input/output::formatted output]
    length
        (istege bagli) bagimsiz degiskenin boyutunu belirten uzunluk degistiricisi
        (donusturme bicimi belirleyicisiyle birlikte, karsilik gelen bagimsiz degiskenin türünü belirtir).

 //[cplusplus.com::reference:<cstdio>:printf]
    length
        Uzunluk alt belirleyicisi, veri türünün uzunlugunu degistirir.
        Bu, uzunluk belirleyicisi olan ve olmayan ilgili bagimsiz degiskenleri yorumlamak icin kullanilan turleri gosteren bir grafiktir
        (farkli bir tur kullaniliyorsa, izin veriliyorsa uygun tur yukseltme veya donusturme gerceklestirilir):

//[fmc]

        length/uzunluk alt belirleyicisi aciklamasi
        istege bagli olarak, argumanin boyutunu belirten bir uzunluk degistiricisi.

        format specifier
        %d, %i, %u, %o, %x, %f, %e, %g, %a, %c, %s, %p, %n, bu ifadeler format belirleyicileridir.
        bu belirleyiciler printf()  vb. fonksiyonlari  kullanarak veri tiplerinin uygun  sekilde yazdirilmasini (vb islevleri ) saglarlar

        veri turleri
        int, unsigned int, double, char, vb ifadeler veri turleridir
        Bu veri turleri, degiskenlerin bellekte nasıl saklanacagini ve nasil islem gorecegini belirler


                            ||                                                          specifier                                                                   ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        length  :    ||  d, i                       ||  u, o, x, X                            ||  f, F, e, E, g, G, a, A  ||  c       ||  s           ||  p       ||  n               ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        (yok)   :      ||  int                       ||  unsigned int                     ||  double                      ||  int     ||  char*       ||  void*   ||  int*            ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        hh      :       ||  signed char       ||  unsigned char                  ||                                    ||                  ||              ||          ||  signed char* ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        h       :         ||  short int            ||  unsigned short int           ||                                   ||                ||                     ||          ||  short int*   ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        l       :          ||  long int              ||  unsigned long int             ||                                   ||  wint_t   ||  wchar_t*  ||     ||  long int*       ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        ll      :         ||  long long int     ||  unsigned long long int    ||                                   ||                ||                ||          ||  long long int*  ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        j       :         ||  intmax_t            ||  uintmax_t                          ||                                   ||                ||                 ||          ||  intmax_t*       ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        z       :        ||  size_t	                 ||  size_t                                   ||                                    ||                ||                       ||          ||  size_t*         ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        t       :        ||  ptrdiff_t              ||  ptrdiff_t                             ||                                   ||               ||                        ||      ||  ptrdiff_t*      ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------
        L       :       ||                                ||                                                ||  long double          ||              ||                          ||          ||                  ||
        ------------------------------------------------------------------------------------------------------------------------------------------------------

        int −2,147,483,648 den 2,147,483,647
        signed char −128 den 127
        short int −32768 den 32767
        long int −2,147,483,648 den 2,147,483,647
        long long int −9,223,372,036,854,775,808 den 9,223,372,036,854,775,807
        intmax_t −9,223,372,036,854,775,808 den 9,223,372,036,854,775,807
        size_t −9,223,372,036,854,775,808 den 9,223,372,036,854,775,807
        ptrdiff_t −9,223,372,036,854,775,808 den 9,223,372,036,854,775,807

        unsigned int 0 dan 4,294,967,295
        unsigned char 0dan 255
        unsigned short int 0 dan 65535
        unsigned short int 0 ila 65535
        unsigned long int  0 dan 4,294,967,295
        unsigned long long int 0 dan 18,446,744,073,709,551,615
        uintmax_t 0 dan 18,446,744,073,709,551,615
        size_t 0 dan 18,446,744,073,709,551,615
        ptrdiff_t 0 dan 18,446,744,073,709,551,615

        double 15 ila 17 onemli basamak (bkz.IEEE 754 çift duyarlıklı ikili kayan nokta biçimi)
        long double 18 anlamli veya 33 ila 36  anlamli basamak (x86 genişletilmiş duyarlık formatı veya IEEE 754 dört duyarlıklı ikili kayan nokta biçimi)
        int −128 den 127
        wint_t Wide Character Literal (Geniş Karakter Sabiti)
        char* karakter dizisi literallerini (string literals) isaret etmek için kullanılır.
        wchar_t Wide Character Strings (Geniş Karakter dizeleri)
        void* herhangi bir türdeki veriyi işaret edebilir.
*/

#include<stdio.h>
#include<inttypes.h>

int main()
{
    int integer_d = 2147483647;
    int integer_i = 2147483647;
    printf("integer_d uzunluk alt belirleyici yok %d\n",integer_d);
    printf("integer_i uzunluk alt belirleyici yok %i\n\n",integer_i);

    signed char signed_char_d = 127;
    signed char signed_char_i = 127;
    printf("signed_char_d uzunluk alt belirleyici hh %hhd\n",signed_char_d);
    printf("signed_char_i uzunluk alt belirleyici hh %hhi\n\n",signed_char_i);

    short int  short_int_d = 32767;
    short int  short_int_i = 32767;
    printf("short_int_d uzunluk alt belirleyici h %hd\n",short_int_d);
    printf("short_int_i uzunluk alt belirleyici h %hi\n\n",short_int_i);

    long int   long_int_d  = 2147483647;
    long int   long_int_i  = 2147483647;
    printf("long_int_d uzunluk alt belirleyici l %ld\n",long_int_d);
    printf("long_int_i uzunluk alt belirleyici l %li\n\n",long_int_i);

    long long int   long_long_int_d  = 9223372036854775807;
    long long int   long_long_int_i  = 9223372036854775807;
    printf("long_long_int_d uzunluk alt belirleyici ll %lld\n",long_long_int_d);
    printf("long_long_int_i uzunluk alt belirleyici ll %lli\n\n",long_long_int_i);

    intmax_t   intmax_t_d  = 9223372036854775807;
    intmax_t   intmax_t_i  = 9223372036854775807;
    printf("intmax_t_d uzunluk alt belirleyici j %jd\n",intmax_t_d);
    printf("intmax_t_i uzunluk alt belirleyici j %ji\n\n",intmax_t_i);

    size_t   size_t_d  = 9223372036854775807;
    size_t   size_t_i  = 9223372036854775807;
    printf("size_t_d uzunluk alt belirleyici z %zd\n",size_t_d);
    printf("size_t_i uzunluk alt belirleyici z %zi\n\n",size_t_i);

    ptrdiff_t   ptrdiff_t_d  = 9223372036854775807;
    ptrdiff_t   ptrdiff_t_i  = 9223372036854775807;
    printf("ptrdiff_t_d uzunluk alt belirleyici t %td\n",ptrdiff_t_d);
    printf("ptrdiff_t_i uzunluk alt belirleyici t %ti\n\n",ptrdiff_t_i);

    unsigned int unsigned_integer_u_d = 4294967295;
    unsigned int unsigned_integer_u_i = 4294967295;
    unsigned int unsigned_integer_octal_u_o = 4294967295;
    unsigned int unsigned_integer_hexadecimal_u_x = 4294967295;
    printf("unsigned_integer_u_d uzunluk alt belirleyici yok %u\n",unsigned_integer_u_d);
    printf("unsigned_integer_u_i uzunluk alt belirleyici yok %u\n",unsigned_integer_u_i);
    printf("unsigned_integer_octal_u_o uzunluk alt belirleyici yok %o\n",unsigned_integer_octal_u_o);
    printf("unsigned_integer_hexadecimal_u_x uzunluk alt belirleyici yok %x\n\n",unsigned_integer_hexadecimal_u_x);

    unsigned char unsigned_char_u_d = 255;
    unsigned char unsigned_char_u_i = 255;
    unsigned char unsigned_char_octal_u_o = 255;
    unsigned char unsigned_char_hexadecimal_u_x = 255;
    printf("unsigned_char_u_d uzunluk alt belirleyici hh %hhu\n",unsigned_char_u_d);
    printf("unsigned_char_u_i uzunluk alt belirleyici hh %hhu\n",unsigned_char_u_i);
    printf("unsigned_char_octal_u_o uzunluk alt belirleyici hh %hho\n",unsigned_char_octal_u_o);
    printf("unsigned_char_hexadecimal_u_x uzunluk alt belirleyici hh %hhx\n\n",unsigned_char_hexadecimal_u_x);

    unsigned short int unsigned_short_int_u_d = 65535;
    unsigned short int unsigned_short_int_u_i = 65535;
    unsigned short int unsigned_short_int_octal_u_o = 65535;
    unsigned short int unsigned_short_int_hexadecimal_u_x = 65535;
    printf("unsigned_short_int_u_d uzunluk alt belirleyici h %hu\n",unsigned_short_int_u_d);
    printf("unsigned_short_int_u_i uzunluk alt belirleyici h %hu\n",unsigned_short_int_u_i);
    printf("unsigned_short_int_octal_u_o uzunluk alt belirleyici h %ho\n",unsigned_short_int_octal_u_o);
    printf("unsigned_short_int_hexadecimal_u_x uzunluk alt belirleyici h %hx\n\n",unsigned_short_int_hexadecimal_u_x);

    unsigned long int unsigned_long_int_u_d = 4294967295;
    unsigned long int unsigned_long_int_u_i = 4294967295;
    unsigned long int unsigned_long_int_octal_u_o = 4294967295;
    unsigned long int unsigned_long_int_hexadecimal_u_x = 4294967295;
    printf("unsigned_long_int_u_d uzunluk alt belirleyici l %lu\n",unsigned_long_int_u_d);
    printf("unsigned_long_int_u_i uzunluk alt belirleyici l %lu\n",unsigned_long_int_u_i);
    printf("unsigned_long_int_octal_u_o uzunluk alt belirleyici l %lo\n",unsigned_long_int_octal_u_o);
    printf("unsigned_long_int_hexadecimal_u_x uzunluk alt belirleyici l %lx\n\n",unsigned_long_int_hexadecimal_u_x);

    unsigned long long int unsigned_long_long_int_u_d = 18446744073709551615U;
    unsigned long long int unsigned_long_long_int_u_i = 18446744073709551615U;
    unsigned long long int unsigned_long_long_int_octal_u_o = 18446744073709551615U;
    unsigned long long int unsigned_long_long_int_hexadecimal_u_x = 18446744073709551615U;
    printf("unsigned_long_long_int_u_d uzunluk alt belirleyici ll %llu\n",unsigned_long_long_int_u_d);
    printf("unsigned_long_long_int_u_i uzunluk alt belirleyici ll %llu\n",unsigned_long_long_int_u_i);
    printf("unsigned_long_long_int_octal_u_o uzunluk alt belirleyici ll %llo\n",unsigned_long_long_int_octal_u_o);
    printf("unsigned_long_long_int_hexadecimal_u_x uzunluk alt belirleyici ll %llx\n\n",unsigned_long_long_int_hexadecimal_u_x);

    uintmax_t uintmax_t_u_d = 18446744073709551615U;
    uintmax_t uintmax_t_u_i = 18446744073709551615U;
    uintmax_t uintmax_t_u_o = 18446744073709551615U;
    uintmax_t uintmax_t_u_x = 18446744073709551615U;
    printf("uintmax_t_u_d uzunluk alt belirleyici j %ju\n",uintmax_t_u_d);
    printf("uintmax_t_u_i uzunluk alt belirleyici j %ju\n",uintmax_t_u_i);
    printf("uintmax_t_u_o uzunluk alt belirleyici j %jo\n",uintmax_t_u_o);
    printf("uintmax_t_u_x uzunluk alt belirleyici j %jx\n\n",uintmax_t_u_x);

    size_t size_t_u_d = 18446744073709551615U;
    size_t size_t_u_i = 18446744073709551615U;
    size_t size_t_u_o = 18446744073709551615U;
    size_t size_t_u_x = 18446744073709551615U;
    printf("size_t_u_d uzunluk alt belirleyici z %zu\n",size_t_u_d);
    printf("size_t_u_i uzunluk alt belirleyici z %zu\n",size_t_u_i);
    printf("size_t_u_o uzunluk alt belirleyici z %zo\n",size_t_u_o);
    printf("size_t_u_x uzunluk alt belirleyici z %zx\n\n",size_t_u_x);

    ptrdiff_t ptrdiff_t_u_d = 18446744073709551615U;
    ptrdiff_t ptrdiff_t_u_i = 18446744073709551615U;
    ptrdiff_t ptrdiff_t_u_o = 18446744073709551615U;
    ptrdiff_t ptrdiff_t_u_x = 18446744073709551615U;
    printf("ptrdiff_t_u_d uzunluk alt belirleyici z %zu\n",ptrdiff_t_u_d);
    printf("ptrdiff_t_u_i uzunluk alt belirleyici z %zu\n",ptrdiff_t_u_i);
    printf("ptrdiff_t_u_o uzunluk alt belirleyici z %zo\n",ptrdiff_t_u_o);
    printf("ptrdiff_t_u_x uzunluk alt belirleyici z %zx\n\n",ptrdiff_t_u_x);

    double double_f = 1.123456;
    double double_e = 1.123456;
    double double_g = 1.12345;
    double double_a = 1.123456;
    printf("double_f uzunluk alt belirleyici yok %f\n",double_f);
    printf("double_e uzunluk alt belirleyici yok %e\n",double_e);
    printf("double_g uzunluk alt belirleyici yok %g\n",double_g);
    printf("double_a uzunluk alt belirleyici yok %a\n\n",double_a);

    long double long_double_f = 1.123456;
    long double long_double_e = 1.123456;
    long double long_double_g = 1.12345;
    long double long_double_a = 1.123456;
    printf("long_double_f uzunluk alt belirleyici yok %Lf\n",long_double_f);
    printf("long_double_e uzunluk alt belirleyici yok %Le\n",long_double_e);
    printf("long_double_g uzunluk alt belirleyici yok %gL\n",long_double_g);
    printf("long_double_a uzunluk alt belirleyici yok %La\n\n",long_double_a);

    int int_c = 'A';
    printf("int_c uzunluk alt belirleyici yok %c\n\n",int_c);

    wint_t wint_t_c = L'A';
    printf("wint_t_c uzunluk alt belirleyici l %lc\n\n",wint_t_c);

    char *char_s = "fmc";
    printf("char_s uzunluk alt belirleyici yok %s\n\n",char_s);

    wchar_t *wchar_t_s = L"FMC";
    printf("wchar_t_s uzunluk alt belirleyici l %ls\n\n",wchar_t_s);

    void *void_p = "fmc";
    printf("void_p uzunluk alt belirleyici yok %p\n\n",void_p);
}
