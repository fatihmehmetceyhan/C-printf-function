/*
     printf fonksiyonu printf format specifier kullanýmý ve ornekleri:
     olusturma tarihi: 22/05/2024
     olusturan: Fatih Mehmet CEYHAN: FMC
     yukleme tarihi 22/05/2024

    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier

    %[.precision]specifier

    kaynaklar:

//[C11 Standart::ISO/IEC 9899:201x::p.309::7.21.6.1 the fprintf function]
    .precision
    istege bagli bir hassasiyet, d, i, o, u, x ve X donusumleri için gorunnmesi gereken minimum basamak sayisini,
    a, A, e, E, f ve F donusumleri için ondalik noktasi karakterinden sonra görünmesi gereken basamak sayisini,
    g ve G donusumleri için maksimum anlamli basamak sayisini veya s donusumleri için yazilacak maksimum bayt sayisini belirtir.
    Hassasiyet, bir nokta (.) ve ardindan ya bir yildiz isareti * (daha sonra aciklanacaktir)
    ya da istege bagli bir ondalik tam sayi seklinde olur; yalnizca nokta belirtilirse, hassasiyet sifir olarak kabul edilir.
    Herhangi baska bir donusum belirleyicisi ile birlikte bir hassasiyet belirtilirse, davranis tanimlanmamistir.

//[The C Programming Language,2nd Edition::p.244::B1.2 Formatted Output]
    .precision
    Bir sayi, hassasiyet, bir dizeden yazdirilacak maksimum karakter sayisini,
    e, E veya f donusumleri için ondalik noktadan sonra yazdirilacak basamak sayisini,
    g veya G donusumu için anlamli basamak sayisini veya bir tamsayi için yazdirilacak minimum basamak sayisini belirtir
    (gerekli genisligi saglamak için basa sifirlar eklenir).

//[libc::p.291::12.12.2 Output Conversion Syntax]
    .precision
    Sayi donusumleri için yazilacak basamak sayisini belirtmek üzere istege bagli bir hassasiyet.
    Eger hassasiyet belirtilmisse, bir nokta ('.') ve ardindan istege bagli olarak bir ondalik tam sayi gelir
    (belirtilmezse varsayilan olarak sifir alinir). Ayrica hassasiyeti '*' olarak belirtebilirsiniz.
    Bu, argüman listesindeki (yazdirilacak asil degerden önce gelen)
    bir sonraki argümanin hassasiyet olarak kullanilmasi anlamina gelir.
    Bu deger bir int olmalidir ve negatifse dikkate alinmaz.
    Alan genisligi ve hassasiyet için '*' belirttiginizde, alan genisligi argumani hassasiyet argumanindan once gelir.
    Diger C kütüphane sürümleri bu sözdizimini tanimayabilir.

//[encpprefernce.com::input/output::formatted output]
    .precision
        (istege bagli) . isareti ile baslayan ve ardindan bir tam sayi veya * gelen,
        ya da hiçbiri gelmezse donusumun hassasiyetini belirten bir ifade. * kullanildiginda, hassasiyet,
        donusturulecek argumandan once gelen ve minimum alan genisligini belirleyen argumandan sonra gelen
        ek bir int türünde argüman ile belirtilir. Bu argumanin degeri negatifse dikkate alinmaz.
        Eger ne bir sayi ne de * kullanilirsa, hassasiyet sifir olarak kabul edilir. Hassasiyetin kesin etkileri için asagidaki tabloya bakin.

 //[cplusplus.com::reference:<cstdio>:printf]
    .precision
        (.sayi)
            Tam sayi belirleyicileri (d, i, o, u, x, X) için: Hassasiyet, yazilacak minimum basamak sayisini belirtir.
            Yazilacak deger bu sayidan kisaysa, sonuc basa eklenen sifirlarla doldurulur. Sonuc daha uzun olsa bile deger kesilmez.
            Hassasiyet 0 ise, 0 degeri için hicbir karakter yazilmaz.
            a, A, e, E, f ve F belirleyicileri için: Bu, ondalik noktadan sonra yazdirilacak basamak sayisidir (varsayilan olarak bu sayi 6'dir).
            g ve G belirleyicileri için: Bu, yazdirilacak maksimum anlamli basamak sayisidir.
            s için: Bu, yazdirilacak maksimum karakter sayisidir. Varsayilan olarak, bitis null karakterine kadar tum karakterler yazdirilir.
            Nokta belirtilmis ancak hassasiyet icin acik bir deger belirtilmemisse, hassasiyet 0 olarak kabul edilir.

        .*
            Hassasiyet, bicimlendirme dizesinde belirtilmez,
            ancak bicimlendirilecek argumandan once gelen ek bir tam sayi degeri argumani olarak belirtilir.

//[fmc]
        .precision/kesinlik/hassasiyet alt belirleyicisi aciklamasi:
        .precision(sayi):
            Tam sayi belirleyicileri (d, i, o, u, x, X) için: Hassasiyet, yazilacak minimum basamak sayisini belirtir.
            Yazilacak deger bu sayidan kisaysa, sonuc basa eklenen sifirlarla doldurulur. Sonuc daha uzun olsa bile deger kesilmez.
            Hassasiyet 0 ise, 0 degeri için hicbir karakter yazilmaz.
            a, A, e, E, f ve F belirleyicileri için: Bu, ondalik noktadan sonra yazdirilacak basamak sayisidir (varsayilan olarak bu sayi 6'dir).
            g ve G belirleyicileri için: Bu, yazdirilacak maksimum anlamli basamak sayisidir.
            s için: Bu, yazdirilacak maksimum karakter sayisidir. Varsayilan olarak, bitis null karakterine kadar tum karakterler yazdirilir.
            Nokta belirtilmis ancak hassasiyet icin acik bir deger belirtilmemisse, hassasiyet 0 olarak kabul edilir.

        .precision(*):
            Hassasiyet, bicimlendirme dizesinde belirtilmez,
            ancak bicimlendirilecek argumandan once gelen ek bir tam sayi degeri argumani olarak belirtilir.

        .precision/kesinlik/hassasiyet alt belirleyicisi parametreler:
        .precision:
            [(.sayi)]
            [.*]

        .precision kullanimi
        .precision: 2 sekilde kullanilir " [(.sayi)] ve [.*] "
            (.sayi):   printf("const char %[.precision(.sayi)]specifier",arguman);
            .*:           printf("const char %[.*]specifier",.precision(.sayi),arguman);

        .precision kullanimi ciktisi
             (d, i, o, u, x, X) belirleyicileri icin
                [yazilacak minimum basamak sayisini belirtir]
                [0000000000000000000 yazilacak deger .kesinlik degerinden kucukse sonuc 0 ile doldurulur]

             (a, A, e, E, f, F) belirleyicileri icin
                [ondalik noktadan sonra yazdirilacak basamak sayisidir (varsayilan olarak bu sayi 6'dýr).]
                [ondalik noktadan onceki sayi.ondalik noktadan sonra yazdirilacak basamak sayisidir]
                [x1.n1n2n3n4n5n6.......n.kesinlik] = [x1.kesinlik degeri]

             (g,G) belirleyicisi icin
                [yazdirilacak maksimum anlamli basamak sayisidir (varsayilan olarak bu sayi toplamda 6 hanedir).]
                [ondalik noktadan once yazdirilacak maksimum anlamli basamak sayisidir.ondalik noktadan sonra yazdirilacak maksimum anlamli basamak sayisidir]
                [x1.n1n2n3n4.......n.kesinlik] = [x1.kesinlik degeri]

             (s) belirleyicisi icin
                [yazdirilacak maksimum karakter sayisidir]
*/
#include<stdio.h>
int main()
{
    printf("yazilacak minimum basamak sayisini belirtir %d\n",1234567890);
    printf("yazilacak minimum basamak sayisini belirtir [%%d] = [%d]\n",1234567890);
    printf(".precision .sayi parametresi ile kullanim [%%.5d] = [%.5d]\n",1234567890);
    printf(".precision .sayi parametresi ile kullanim [%%.20d] = [%.20d]\n",1234567890);
    printf(".precision .* parametresi ile kullanim [%%.*d] = [%.*d]\n\n",20,1234567890);

    printf("yazilacak minimum basamak sayisini belirtir [%%f] = [%f]\n",1.123456);
    printf(".precision .sayi parametresi ile kullanim [%%.5f] = [%.5f]\n",1.123456);
    printf(".precision .sayi parametresi ile kullanim [%%.20f] = [%.20f]\n",1.123456);
    printf(".precision .* parametresi ile kullanim [%%.*f] = [%.*f]\n\n",20,1.123456);

    printf("yazilacak minimum basamak sayisini belirtir [%%g] = [%g]\n",1.12345);
    printf(".precision .sayi parametresi ile kullanim [%%.5g] = [%.5g]\n",1.12345);
    printf(".precision .sayi parametresi ile kullanim [%%.20g] = [%.20g]\n",1.12345);
    printf(".precision .* parametresi ile kullanim [%%.*g] = [%.*g]\n\n",20,1.12345);

    printf("yazilacak minimum basamak sayisini belirtir [%%s] = [%s]\n","FMC");
    printf(".precision .sayi parametresi ile kullanim [%%.5s] = [%.5s\n","FMC");
    printf(".precision .sayi parametresi ile kullanim [%%.20s] = [%.20s]\n","FMC");
    printf(".precision .* parametresi ile kullanim [%%.*s] = [%.*s]\n\n",20,"FMC");
}
