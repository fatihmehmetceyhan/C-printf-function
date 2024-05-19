/*
    printf fonksiyonu kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024
     
    youtube videosu linki:
    https://youtu.be/qoagmneYUMo?si=En_GMmD2i8_5-NKI
    
    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );
    
  kaynaklar:
  
//[C11 Standart::ISO/IEC 9899:201x::p.309::7.21.6.1 the fprintf function]:
     int fprintf(FILE * restrict stream, const char * restrict format, ...);
     Fprintf fonksiyonu, stream tarafından işaret edilen akışa çıktı yazar ve format tarafından işaret edilen dize altında, sonraki argümanların çıktıya nasıl dönüştürüleceğini belirtir. 
     Format için yetersiz argümanlar varsa, davranış tanımsızdır. Format biterken hala argümanlar varsa, fazla argümanlar değerlendirilir (her zamanki gibi) ancak aksi takdirde göz ardı edilir. 
     Fprintf fonksiyonu, format dizesinin sonuna ulaşıldığında döner.
     Format, başlangıç ve bitişi kendi başlangıç kaydırma durumunda olan çok baytlı bir karakter dizisi olmalıdır. 
     Format, sıfır veya daha fazla yönergeden oluşur: 
     % olmayan, çıktıya değiştirilmeden kopyalanan sıradan çok baytlı karakterler; ve her biri sıfır veya daha fazla sonraki argümanları almakla sonuçlanan, 
     bunları geçerli olduğunda ilgili dönüştürme belirtecine göre dönüştüren ve ardından sonucu çıktı akışına yazan dönüşüm belirtimleri.
     Her dönüşüm belirtimi % karakteri ile başlar.% işaretinden sonra sırayla şunlar gelir:
       %[flags][width][.precision][length]specifier
        [flags]: istege bagli
        [width]: istege bagli
        [.precision]: istege bagli
        [length]: istege bagli
     
//[C11 Standart::ISO/IEC 9899:201x::p.324::7.21.6.3 the printf function]:
     int printf(const char * restrict format, ...);
      Açıklama:
        Printf fonksiyonu, printf'ye verilen argümanlardan önce stdout argümanı eklenmiş şekilde fprintf ile eşdeğerdir.
     Dönüş Değeri:
        Printf fonksiyonu, iletilen karakterlerin sayısını veya bir çıktı ya da kodlama hatası meydana geldiğinde negatif bir değeri döndürür.
     
//[The C Programming Language,2nd Edition::p.243::B1.2 Formatted Output]
     Printf işlevleri, biçimlendirilmiş çıktı dönüşümü sağlar.
     int fprintf(FILE *Stream, const char *format, ... ) 
     fprintf, format kontrolü altında çıktıyı stream'e dönüştürür ve yazar. Dönüş değeri, yazılan karakter sayısıdır veya bir hata meydana gelirse negatiftir.
     Format dizesi iki tür nesne içerir: çıktı akışına kopyalanan sıradan karakterler ve her biri sonraki fprintf argümanının dönüştürülmesi ve yazdırılmasına neden olan dönüşüm belirtimleri. 
     Her dönüşüm belirtimi % karakteri ile başlar ve bir dönüşüm karakteri ile biter. % ve dönüşüm karakteri arasında, sırasıyla, şunlar bulunabilir:
       %[flags][width][.precision][length]specifier
        [flags]: istege bagli
        [width]: istege bagli
        [.precision]: istege bagli
        [length]: istege bagli
      
//[libc::p.289::12.12 Formatted Output]
    Bu bölümde açıklanan işlevler (printf ve ilgili işlevler), biçimlendirilmiş çıktı gerçekleştirmek için uygun bir yol sağlar. 
    Printf, kalan argümanların değerlerini nasıl biçimlendireceğini belirten bir format dizesi veya şablon dizesi ile çağrılır.
    
//[libc::p.289:: 12.12.1 Formatted Output Basics]
    Printf işlevi, herhangi bir sayıda argümanı yazdırmak için kullanılabilir. 
    Bir çağrıda sağladığınız şablon dizesi argümanı, sadece ek argümanların sayısı hakkında değil, aynı zamanda bunların türleri ve yazdırma stilleri hakkında da bilgi sağlar. 
    Şablon dizesindeki sıradan karakterler olduğu gibi çıktı akışına yazılırken, şablonda ‘%’ karakteriyle başlayan dönüşüm belirtimleri, 
    sonraki argümanların biçimlendirilip çıktı akışına yazılmasına neden olur.
    
//[encpprefernce.com::input/output::formatted output]
    Verilen konumlardan verileri yükler, bunları karakter dizesi eşdeğerlerine dönüştürür ve sonuçları çeşitli havuzlara/akışlara yazar
    
//[cplusplus.com::reference:<cstdio>:printf]
   int printf ( const char * format, ... );
   Biçimlendirilmiş verileri stdout'a yazdırma
   Biçim tarafından işaret edilen C dizesini standart çıktıya (stdout) yazar. 
   Biçim, biçim belirticileri (% ile başlayan alt diziler) içeriyorsa, biçimden sonra gelen ek bağımsız değişkenler biçimlendirilir ve ilgili belirticilerinin yerini alarak sonuçta elde edilen dizeye eklenir.
   Bir biçim belirticisi bu prototipi izler:
   %[flags][width][.precision][length]specifier
        [flags]: istege bagli
        [width]: istege bagli
        [.precision]: istege bagli
        [length]: istege bagli
     
*/
#include<stdio.h>

int main()
{
    printf("//////////////// printf const char examples *******************\n\n");
    // Karakterleri standart ciktiya (stdout) yazdirma
    // format/Biçime göre isaret edilen C dizesini standart ciktiya (stdout) yazar. " " çift tirnaklar arasindaki argüman "dize sabiti" 'dir.

    printf("Karakterleri standart ciktiya (stdout) yazdirma\n");
    printf("F\n");  // "F" Karakterini standart ciktiya (stdout) yazar.
    printf("M\n");
    printf("C\n");
    printf("\n***************************************************************\n\n");
    printf("const char\n");
    printf("constant character\n");
    printf("constant string\n");
    printf("sabit karakter\n");
    printf("sabit metin\n");
    printf("bu bir metindir\n");
    printf("stdout'a yazilacak metni iceren C dizesi\n");
    printf("\n***************************************************************\n\n");

    printf("**************** printf const char examples ///////////////////\n\n");

}
