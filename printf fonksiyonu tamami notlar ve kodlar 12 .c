#include<stdio.h>
#include<inttypes.h>
/*
    printf fonksiyonu 
    olusturma tarihi 27/05/2024
    olusturan: Fatih Mehmet CEYHAN: FMC 
    yukleme tarihi 27/05/2024
*/
int main()
{
    printf("//////////////// printf const char examples *******************\n\n");
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

    printf("////////////// printf escape sequences examples *******************\n\n");
    /*
    printf fonksiyonu kaçış dizeleri kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024
     
    youtube video linki:
    https://youtu.be/nT7cKt6_Bzg?si=uTtpARkdskV5NuXC
    
  kaynaklar:
//[C11 Standart::ISO/IEC 9899:201x::p.57::6.4 Lexical elements]:
  token:(belirteç)
        keyword (anahtar kelime)
        identifier (tanımlayıcı)
        constant (sabit)
        string-literal (dize-sabit)
        punctuator (noktalayıcı)
 preprocessing-token: (ön işlemci belirteci:)
        header-name (başlık adı)
        identifier (tanımlayıcı)
        pp-number (ön işlemci sayısı)
        character-constant (karakter-sabit)
        string-literal (dize-sabit)
        punctuator (noktalayıcı)
        each non-white-space character that cannot be one of the above (yukarıdakilerden hiçbiri olmayan her boşluk karakteri)
        
 İleriye dönük referanslar: 
 karakter sabitleri (6.4.4.4), 
 yorumlar (6.4.9), 
 ifadeler (6.5), 
 kayan noktalı sabitler (6.4.4.2), 
 başlık isimleri (6.4.7), 
 makro yerine koyma (6.10.3), 
 son ek artırma ve azaltma operatörleri (6.5.2.4), 
 önek artırma ve azaltma operatörleri (6.5.3.1), 
 ön işlemci direktifleri (6.10), 
 ön işlemci sayıları (6.4.8), 
 dize sabitleri (6.4.5)

//[C11 Standart::ISO/IEC 9899:201x::p.24::5.2.2 Character display semantics]:
    Aktif pozisyon, fputc işlevi tarafından çıkışı yapılan bir sonraki karakterin bir görüntüleme cihazında görüneceği yerdir. 
    Bir yazdırma karakterini (isprint işlevi tarafından tanımlandığı şekilde) bir görüntüleme cihazına yazmanın amacı, 
    o karakterin grafiksel bir temsilini aktif pozisyonda görüntülemek ve ardından aktif pozisyonu mevcut satırdaki bir sonraki pozisyona ilerletmektir. 
    Yazma yönü yerel ayara özgüdür. Eğer aktif pozisyon bir satırın son pozisyonundaysa (eğer varsa), görüntüleme cihazının davranışı belirtilmemiştir.
    Yürütme karakter setindeki grafik olmayan karakterleri temsil eden alfabetik kaçış dizileri, görüntüleme cihazlarında aşağıdaki şekilde eylemler üretmek üzere tasarlanmıştır:
    
      \a (uyarı): Aktif pozisyonu değiştirmeden duyulabilir veya görülebilir bir uyarı üretir.
      \b (geri alma): Aktif pozisyonu mevcut satırdaki önceki pozisyona taşır. Eğer aktif pozisyon bir satırın başlangıç pozisyonundaysa, görüntüleme cihazının davranışı belirtilmemiştir.
      \f (form besleme): Aktif pozisyonu bir sonraki mantıksal sayfanın başlangıcındaki ilk pozisyona taşır.
      \n (yeni satır): Aktif pozisyonu bir sonraki satırın başlangıcındaki ilk pozisyona taşır.
      \r (satır başı): Aktif pozisyonu mevcut satırın başlangıcındaki ilk pozisyona taşır.
      \t (yatay sekme): Aktif pozisyonu mevcut satırdaki bir sonraki yatay sekme pozisyonuna taşır. 
                        Eğer aktif pozisyon son tanımlanmış yatay sekme pozisyonunda veya sonrasındaysa, görüntüleme cihazının davranışı belirtilmemiştir.
      \v (dikey sekme): Aktif pozisyonu bir sonraki dikey sekme pozisyonunun başlangıcındaki ilk pozisyona taşır. 
                        Eğer aktif pozisyon son tanımlanmış dikey sekme pozisyonunda veya sonrasındaysa,dikey sekme pozisyonunda, görüntüleme cihazının davranışı belirtilmemiştir.
                        
    Bu kaçış dizilerinin her biri, tek bir char nesnesinde saklanabilecek benzersiz, uygulama tanımlı bir değer üretmelidir. 
    Bir metin dosyasındaki dış temsiller, dahili temsillerle aynı olmak zorunda değildir ve bu Uluslararası Standart'ın kapsamı dışındadır.
    İleriye dönük referanslar: isprint işlevi (7.4.1.8), fputc işlevi (7.21.7.3).
    
//[C11 Standart::ISO/IEC 9899:201x::p.67-68::6.4.4.4 Character constants]:
    Tek tırnak ', çift tırnak ", soru işareti ?, ters eğik çizgi \ ve keyfi tam sayı değerleri aşağıdaki kaçış dizileri tablosuna göre temsil edilebilir:
    single quote  tek tirnak    \'
    double quote cift tirnak    \"
    question mark soru isareti  \?
    backslash  ters egik cizgi  \\
    octal character sekizli karakter \octal digits(sekizli rakamlar)
    hexadecimal character onaltilik karakter \x+hexadecimal digits(x+onaltilik rakamlar)
    izin verilen araliktaki Unicode degeri; birkac kod birimiyle sonuclanabilir   \u + nnnn
    izin verilen araliktaki Unicode degeri; birkac kod birimiyle sonuclanabilir   \U + nnnnnnnn

//[C11 Standart::ISO/IEC 9899:201x::p.61:: 6.4.3 Universal character names]:
    universal-character-name:(evrensel-karakter-isim:)
       \u hex-quad (onaltılık-dörtlü)
       \U hex-quad hex-quad (onaltılık-dörtlü onaltılık-dörtlü)
    hex-quad: (onaltılık-dörtlü:)
       hexadecimal-digit hexadecimal-digit (onaltılık-rakam onaltılık-rakam)
       hexadecimal-digit hexadecimal-digit (onaltılık-rakam onaltılık-rakam)

//[The C Programming Language,2nd Edition::p.193::A2. Lexical Conventions]
      Bir program, dosyalarda depolanan bir veya daha fazla çeviri biriminden oluşur. Program birkaç aşamada çevrilir ve bunlar §A 12'de açıklanmıştır. 
      İlk aşamalar düşük seviyeli sözdizimsel dönüşümler yapar, # karakteri ile başlayan satırlar tarafından tanıtılan direktifleri gerçekleştirir ve makro tanımı ve genişlemesi yapar. 
      §A 12'nin ön işlemi tamamlandığında, program bir dizi tokena indirgenmiş olur.

//[The C Programming Language,2nd Edition::p.193::A2.5.2 Character Constants]
      Bir karakter sabiti, 'x' gibi tek tırnaklarla kapatılmış bir veya daha fazla karakter dizisidir. 
      Sadece bir karakter içeren bir karakter sabitin değeri, yürütme zamanında makinenin karakter setindeki karakterin sayısal değeridir. 
      Birden fazla karakter içeren bir sabitin değeri uygulamaya bağlıdır. 
      Karakter sabitleri ' karakterini veya yeni satırları içermez; bunları ve belirli diğer karakterleri temsil etmek için aşağıdaki kaçış dizileri kullanılabilir.

        new line          NL (line feed LF) (yeni satır (satir beslemesi))   \n
        horizontal tab    HT (yatay sekme)                                   \t
        vertical tab      VT (dikey sekme)                                   \v
        backspace         BS (geri alma)                                     \b
        carriage return   CR (satır başı)                                    \r
        form feed         FF (form besleme)                                  \f
        audible alert     BEL (sesli̇ uyari)                                  \a
        backslash         \ (ters egik cizgi)                                \\
        question mark     ? (soru işareti)                                   \?
        single quote      ' (tek tırnak)                                     \'
        double quote      " (çift tırnak)                                    \"
        octal number      ooo (sekizli sayı)                                 \ooo
        hex number        hh (onaltılık sayı)                                \xhh

//[encpprefernce.com::C::C Language::Expressions::character constants::Escape Sequences]
      single quote                   tek tirnak                                      \'
      double quote                   cift tirnak                                     \"
      question mark                  soru isareti                                    \?
      backslash                      ters egik cizgi                                 \\
      audible bell                   sesli zil                                       \a
      backspace                      geri tusu                                       \b
      form feed - new page           Form akisi - yeni sayfa                         \f
      line feed - new line           Satir besleme - yeni satir                      \n
      carriage return                Satir basi                                      \r
      horizontal tab                 yatay sekme                                     \t
      vertical tab                   dikey sekme                                     \v
      arbitrary octal value          keyfi sekizlik deger                            \sekizli-rakam
      arbitrary hexadecimal value	   rasgele onaltilik                               \x + onaltilik-rakam
      izin verilen araliktaki Unicode degeri; birkac kod birimiyle sonuclanabilir    \u + nnnn
      izin verilen araliktaki Unicode degeri; birkac kod birimiyle sonuclanabilir    \U + nnnnnnnn
*/
    //Kacis dizileri, dize degismez degerleri ve karakter sabitleri icindeki belirli özel karakterleri temsil etmek için kullanilir.
   // asagidaki kacis dizileri kullanilabilir. ISO C, ters egik cizginin ardindan burada listelenmeyen herhangi bir karakter geliyorsa bir tanilama gerektirir:

    printf("single quote \' tek tirnak\n\n");
    printf("double quote \" cift tirnak\n\n");
    printf("question mark \? soru isareti\n\n");
    printf("backslash \\ ters egik cizgi\n\n");
    printf("audible bell \a sesli zil\n\n");
    printf("backspace \b geri tusu\n\n");
    printf("form feed - new page\fForm akisi - yeni sayfa\n");
    printf("line feed - new line\nSatir besleme - yeni satir\n");
    printf("carriagereturn \r Satir basi\n");
    printf("horizontal tab \t yatay sekme\n\n");
    printf("vertical tab \v dikey sekme\n\n");
    printf("arbitrary octal value \101 keyfi sekizlik deger\n\n");
    printf("arbitrary hexadecimal value	\x41 rasgele onaltilik deger\n\n");
    printf("Unicode value in allowed range ;may result in several code units \u00f5 izin verilen araliktaki Unicode degeri; birkac kod birimiyle sonuclanabilir\n\n");
    printf("Unicode value in allowed range ;may result in several code units \U000000f5 izin verilen araliktaki Unicode degeri; birkac kod birimiyle sonuclanabilir\n\n");

    printf("\n**************** printf escape sequences examples //////////////////\n\n");
  
  
    printf("////////////// printf fonksiyonu printf format specifier kullanımı ve ornekleri: *******************\n\n");
/*
    printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024

    youtube video linki : 
    https://youtu.be/iDuuggSk2ak?si=79wq1Qgq6oHeDEpj
    
    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );
    
  kaynaklar:
//[C11 Standart::ISO/IEC 9899:201x::p.312-313-314-315::7.21.6.1 the fprintf function]
  d, i:
      int argümanı, [−]dddd tarzında işaretli ondalık sayıya dönüştürülür. 
      Kesinlik, görünmesi gereken minimum basamak sayısını belirtir; dönüştürülen değer daha az basamakla temsil edilebiliyorsa, başa sıfır eklenerek genişletilir. 
      Varsayılan kesinlik 1'dir. Kesinliği sıfır olan bir sıfır değerini dönüştürmenin sonucu karakter içermez.

  o, u, x, X
      unsigned int argümanı, unsigned sekizli (o), unsigned ondalık (u) veya unsigned onaltılı (x veya X) gösterime dddd tarzında dönüştürülür; 
      x dönüşümü için abcdef harfleri ve X dönüşümü için ABCDEF harfleri kullanılır. 
      Kesinlik, görünmesi gereken minimum basamak sayısını belirtir; dönüştürülen değer daha az basamakla temsil edilebiliyorsa, başa sıfır eklenerek genişletilir. 
      Varsayılan kesinlik 1'dir. Kesinliği sıfır olan bir sıfır değerini dönüştürmenin sonucu karakter içermez.

  f, F
      Bir kayan nokta sayısını temsil eden double argümanı, [−]ddd.ddd tarzında ondalık gösterime dönüştürülür; burada ondalık nokta karakterinden sonraki basamak sayısı kesinlik belirtimine eşittir. 
      Eğer kesinlik belirtilmemişse, 6 olarak alınır; kesinlik sıfırsa ve # bayrağı belirtilmemişse, ondalık nokta karakteri görünmez. 
      Eğer bir ondalık nokta karakteri varsa, ondan önce en az bir basamak görünür. Değer, uygun basamak sayısına yuvarlanır.
      Bir sonsuzluğu temsil eden double argümanı, [-]inf veya [-]infinity tarzlarından birine dönüştürülür—hangi tarzın kullanılacağı uygulamaya bağlıdır. 
      NaN (Not a Number) değerini temsil eden bir double argümanı, 
      [-]nan veya [-]nan(n-karakter-dizisi) tarzlarından birine dönüştürülür—hangi tarzın kullanılacağı ve herhangi bir n-karakter-dizisinin anlamı uygulamaya bağlıdır. 
      F dönüşüm belirteci sırasıyla inf, infinity veya nan yerine INF, INFINITY veya NAN üretir.

  e, E
      Bir kayan nokta sayısını temsil eden double argümanı, [−]d.ddde±dd tarzında dönüştürülür; 
      burada ondalık nokta karakterinden önce bir basamak (eğer argüman sıfır değilse bu basamak sıfır değildir) ve ondalık nokta karakterinden sonraki basamak sayısı kesinlik belirtimine eşittir. 
      Eğer kesinlik belirtilmemişse, 6 olarak alınır; kesinlik sıfırsa ve # bayrağı belirtilmemişse, ondalık nokta karakteri görünmez. Değer, uygun basamak sayısına yuvarlanır. 
      E dönüşüm belirteci, e yerine üssü tanıtan E harfi ile bir sayı üretir. Üs her zaman en az iki basamak içerir ve üssü temsil etmek için gerektiği kadar fazla basamak eklenir. 
      Eğer değer sıfırsa, üs de sıfırdır.
      Bir sonsuzluğu veya NaN'ı temsil eden double argümanı, f veya F dönüşüm belirtecinin tarzında dönüştürülür.

  g, G
      Bir kayan nokta sayısını temsil eden double argümanı, dönüştürülen değere ve kesinliğe bağlı olarak f veya e tarzında (veya G dönüşüm belirtecinde F veya E tarzında) dönüştürülür. 
      Kesinlik sıfır değilse kesinlik P'ye eşittir, kesinlik belirtilmemişse 6, kesinlik sıfırsa 1 olarak alınır. Daha sonra, E tarzında bir dönüşümün üssü X olursa:
      — Eğer P > X ≥ −4 ise, dönüşüm f (veya F) tarzında ve kesinlik P − (X + 1) ile yapılır.
      — Aksi takdirde, dönüşüm e (veya E) tarzında ve kesinlik P − 1 ile yapılır.
      Son olarak, # bayrağı kullanılmadıkça, sonundaki sıfırlar sonuçtaki kesirli kısımdan çıkarılır ve eğer kesirli kısım kalmazsa ondalık nokta karakteri de çıkarılır.
      Bir sonsuzluğu veya NaN'ı temsil eden double argümanı, f veya F dönüşüm belirtecinin tarzında dönüştürülür.

  a, A
      Bir kayan nokta sayısını temsil eden double argümanı, [−]0xh.hhhhp±d tarzında dönüştürülür; 
      burada ondalık nokta karakterinden önce bir onaltılık basamak bulunur (eğer argüman normalize edilmiş bir kayan nokta sayısı ise bu basamak sıfır değildir, 
      aksi takdirde belirtilmemiştir) ve ondan sonraki onaltılık basamak sayısı kesinliğe eşittir. 
      Eğer kesinlik belirtilmemişse ve FLT_RADIX 2'nin bir kuvvetiyse, kesinlik değerin tam olarak temsil edilmesi için yeterlidir; 
      eğer kesinlik belirtilmemişse ve FLT_RADIX 2'nin bir kuvveti değilse, kesinlik double türündeki değerleri ayırt etmek için yeterlidir, ancak son sıfırlar çıkarılabilir; 
      eğer kesinlik sıfırsa ve # bayrağı belirtilmemişse, ondalık nokta karakteri görünmez. 
      a dönüşümü için abcdef harfleri ve A dönüşümü için ABCDEF harfleri kullanılır. A dönüşüm belirteci, x ve p yerine X ve P ile bir sayı üretir. 
      Üs her zaman en az bir basamak içerir ve 2'nin ondalık üssünü temsil etmek için gerektiği kadar fazla basamak eklenir. Eğer değer sıfırsa, üs de sıfırdır.
      Bir sonsuzluğu veya NaN'ı temsil eden double argümanı, f veya F dönüşüm belirtecinin tarzında dönüştürülür.

c
      Eğer l uzunluk belirteci yoksa, int argümanı unsigned char türüne dönüştürülür ve ortaya çıkan karakter yazılır.
      Eğer l uzunluk belirteci varsa, wint_t argümanı, kesinlik olmadan ve wchar_t türünde iki elemanlı bir dizinin ilk elemanına işaret eden bir argümanla ls dönüşüm belirtimiyle dönüştürülür; 
      bu dizinin ilk elemanı lc dönüşüm belirtimine göre wint_t argümanını ve ikinci elemanı ise null geniş karakter içerir.

  s
      Eğer l uzunluk belirteci yoksa, argüman karakter türünde bir dizinin ilk elemanına işaret eden bir gösterici olmalıdır.280) Diziden karakterler, sonlandırıcı null karakter dahil edilmeden yazılır. 
      Eğer kesinlik belirtilmişse, belirtilen bayt sayısından fazla yazılmaz. Kesinlik belirtilmemişse veya dizinin boyutundan büyükse, dizi bir null karakter içermelidir.
      Eğer l uzunluk belirteci varsa, argüman wchar_t türünde bir dizinin ilk elemanına işaret eden bir gösterici olmalıdır. 
      Dizideki geniş karakterler, wcrtomb işlevine yapılan bir çağrı gibi (her biri mbstate_t nesnesi tarafından tanımlanan ve 
      ilk geniş karakter çevrilmeden önce sıfıra ayarlanmış bir dönüştürme durumu ile) çok baytlı karakterlere dönüştürülür; sonlandırıcı null geniş karakter dahil edilmeden yazılır. 
      Ortaya çıkan çok baytlı karakterler, sonlandırıcı null karakter (bayt) dahil edilmeden yazılır. 
      Eğer kesinlik belirtilmemişse, dizi bir null geniş karakter içermelidir. Kesinlik belirtilmişse, belirtilen bayt sayısından fazla yazılmaz (herhangi bir kaydırma dizisi dahil) ve dizi, 
      kesinlik tarafından verilen çok baytlı karakter dizisi uzunluğuna eşit olması için işlevin dizinin sonundan bir geniş karaktere erişmesi gerekirse, bir null geniş karakter içermelidir. 
      Hiçbir durumda, kısmi bir çok baytlı karakter yazılmaz.281)

  p
      Argüman bir void işaretçisi olmalıdır. İşaretçinin değeri, bir uygulamaya özgü şekilde bir dizi yazdırma karakterine dönüştürülür.
      
      
  n
      Argüman, bu fprintf çağrısı tarafından şimdiye kadar çıktı akışına yazılan karakter sayısını içine yazılan işaretle imzalı bir tam sayı işaretçisi olmalıdır. 
      Bir argüman dönüştürülmez, ancak bir tane tüketilir. Dönüşüm belirtimi herhangi bir bayrak, alan genişliği veya hassasiyet içeriyorsa, davranış belirsizdir.

      
  %
      Bir % karakteri yazılır. Hiçbir argüman dönüştürülmez. Tam dönüşüm belirtimi %% olmalıdır.


//[The C Programming Language,2nd Edition::p.244::B1.2 Formatted Output]
    d, i: int; işaretle belirtilmiş ondalık gösterim.

    o: int; önde sıfır olmayan ondalık olmayan gösterim.

    x, X: int; önde Ox veya ox olmadan ondalık olmayan onaltılık gösterim, Ox için abcdef veya OX için ABCDEF kullanılır.

    u: int; işaretsiz ondalık gösterim.

    c: int; tek karakter, işaretsiz char'a dönüştürüldükten sonra.

    s: char *; dizeden karakterler, bir '\0' karakterine ulaşılıncaya veya hassasiyet tarafından belirtilen karakter sayısı yazdırılıncaya kadar yazdırılır.

    f, F: double; [-]mmm.ddd biçiminde ondalık gösterim, d'nin sayısı kesinlik tarafından belirtilir. Varsayılan hassasiyet 6'dır; 0 hassasiyeti ondalık noktayı bastırır.

    e, E: double; [-]m.dddddde±xx veya [-]m.ddddddE±xx biçiminde ondalık gösterim, d'nin sayısı kesinlik tarafından belirtilir. Varsayılan hassasiyet 6'dır; 0 hassasiyeti ondalık noktayı bastırır.

    g, G: double; üs -4'ten küçükse veya kesinliğe eşit veya büyükse "e veya "E kullanılır; aksi takdirde "f kullanılır. Sondaki sıfırlar ve sondaki ondalık nokta yazdırılmaz.

    p: void *; bir işaretçi olarak yazdır (uygulamaya bağlı temsil).

    n: int *; bu çağrı ile şimdiye kadar yazılan karakter sayısı belirtilen argümana yazılır. Hiçbir argüman dönüştürülmez.

    %: Hiçbir argüman dönüştürülmez; "%%" yazdırılır.



    
//[libc::p.291-292::12.12.3 Table of Output Conversions]
    ‘%d’, ‘%i’
        Bir tamsayıyı işaretle belirtilmiş ondalık sayı olarak yazdırır. Detaylar için Bölüm 12.12.4'e bakınız. Çıkış için ‘%d’ ve ‘%i’ eş anlamlıdır, ancak giriş için scanf ile kullanıldığında farklıdır.

    ‘%o’
        Bir tamsayıyı işaretsiz sekizli sayı olarak yazdırır. Detaylar için Bölüm 12.12.4'e bakınız.

    ‘%u’
        Bir tamsayıyı işaretsiz ondalık sayı olarak yazdırır. Detaylar için Bölüm 12.12.4'e bakınız.

    ‘%x’, ‘%X’
        Bir tamsayıyı işaretsiz onaltılık sayı olarak yazdırır. ‘%x’ küçük harf kullanır ve ‘%X’ büyük harf kullanır. Detaylar için Bölüm 12.12.4'e bakınız.

    ‘%f’, ‘%F’
        Bir kayan noktalı sayıyı normal (sabit noktalı) gösterimde yazdırır. ‘%f’ küçük harf kullanır ve ‘%F’ büyük harf kullanır. Detaylar için Bölüm 12.12.5'e bakınız.

    ‘%e’, ‘%E’
        Bir kayan noktalı sayıyı üs gösteriminde yazdırır. ‘%e’ küçük harf kullanır ve ‘%E’ büyük harf kullanır. Detaylar için Bölüm 12.12.5'e bakınız.

    ‘%g’, ‘%G’
        Bir kayan noktalı sayıyı normal veya üs gösteriminde uygun olan şekilde yazdırır. ‘%g’ küçük harf kullanır ve ‘%G’ büyük harf kullanır. Detaylar için Bölüm 12.12.5'e bakınız.

    ‘%a’, ‘%A’
        Bir kayan noktalı sayıyı onaltılık kısmi gösterimde ve taban 2'deki üssü ondalık hanelerle temsil ederek yazdırır. ‘%a’ küçük harf kullanır ve ‘%A’ büyük harf kullanır. Detaylar için Bölüm 12.12.5'e bakınız.

    ‘%c’
        Bir tek karakteri yazdırır. Detaylar için Bölüm 12.12.6'ya bakınız.

    ‘%s’
        Bir dizedeki karakterleri yazdırır. Detaylar için Bölüm 12.12.6'ya bakınız.

    ‘%p’
        Bir işaretçinin değerini yazdırır. Detaylar için Bölüm 12.12.6'ya bakınız.

    ‘%n’
        Şimdiye kadar yazdırılan karakter sayısını alır. Detaylar için Bölüm 12.12.6'ya bakınız. Bu dönüşüm belirtimi hiçbir çıktı üretmez.

    ‘%%’
        Bir literal ‘%’ karakterini yazdırır. Detaylar için Bölüm 12.12.6'ya bakınız.



    %
        Harfi harfine yazıyor . Tam dönüştürme belirtimi şu şekilde olmalıdır: . %%%

    c	
        Tek bir karakter yazar. Bağımsız değişken ilk olarak imzasız karakter. l değiştiricisi kullanılırsa, bağımsız değişken önce bir karakter dizesine dönüştürülür ve %ls ile a wchar_t[2] tartışma.

    s
        Bir karakter dizesi yazar Bağımsız değişken, bir karakter dizisinin ilk öğesinin işaretçisi olmalıdır. Duyarlık, yazılacak maksimum bayt sayısını belirtir. 
        Kesinlik belirtilmezse, ilk boş sonlandırıcıya kadar olan her baytı yazar ve ilk null sonlandırıcı dahil değildir. 
        l belirticisi kullanılırsa, bağımsız değişkenin bir dizinin ilk öğesinin işaretçisi olması gerekir. 
        wchar_t, sıfır başlatılmış dönüştürme durumuna sahip wcrtomb'a yapılan bir çağrıyla char dizisine dönüştürülür.

    d,i
        İşaretli bir tamsayıyı ondalık gösterime dönüştürür [-]dddd. Duyarlık, görüntülenecek minimum basamak sayısını belirtir. Varsayılan duyarlık 1.
        Hem dönüştürülen değer hem de duyarlık 0 Dönüştürme hiçbir karakterle sonuçlanmaz.

    o	
        İşaretsiz bir tamsayıyı sekizli gösterime dönüştürür oooo. Duyarlık, görüntülenecek minimum basamak sayısını belirtir. Varsayılan duyarlık 1. 
        Hem dönüştürülen değer hem de duyarlık 0 Dönüştürme hiçbir karakterle sonuçlanmaz. Alternatif uygulamada, gerekirse bir sıfır yazmak için hassasiyet artırılır. 
        Bu durumda, hem dönüştürülen değer hem de duyarlık 0tek 0 yazılmıştır.

    x,X	
        İşaretsiz bir tamsayıyı onaltılık gösterime dönüştürür hhhh. Dönüşüm için harfler kullanılır.Dönüşüm için harfler kullanılır.Duyarlık, görüntülenecek minimum basamak sayısını belirtir. 
        Varsayılan duyarlık xabcdef XABCDEF 1. Hem dönüştürülen değer hem de duyarlık 0 Dönüştürme hiçbir karakterle sonuçlanmaz. 
        Alternatif uygulamada veya dönüştürülen değer sıfırdan farklıysa sonuçlara önek olarak eklenir. 0x0X

    u	
        İşaretsiz bir tamsayıyı ondalık gösterim dddd'ye dönüştürür. Duyarlık, görüntülenecek minimum basamak sayısını belirtir. Varsayılan duyarlık 1. 
        Hem dönüştürülen değer hem de duyarlık 0 Dönüştürme hiçbir karakterle sonuçlanmaz.

    f,F	
        Kayan noktalı sayıyı [-]ddd.ddd stilinde ondalık gösterime dönüştürür. Kesinlik, ondalık nokta karakterinden sonra görünecek basamak sayısını belirtir. 
        Varsayılan duyarlık 6. Alternatif uygulamada, ondalık nokta karakteri, takip eden basamak olmasa bile yazılır. Sonsuzluk ve sayı olmayan dönüştürme stili için notlara bakın.

    e,E	
        Kayan noktalı sayıyı ondalık üs gösterimine dönüştürür.Dönüştürme stili için [-]d.ddd±dd kullanılır. Dönüştürme stili için [-]d.ddd±dd kullanılır.
        Üs en az iki basamak içerir, yalnızca gerektiğinde daha fazla basamak kullanılır. Değer eeEE 0, üs aynı zamanda 0. Kesinlik, ondalık nokta karakterinden sonra görünecek basamak sayısını belirtir. 
        Varsayılan duyarlık 6. Alternatif uygulamada, ondalık nokta karakteri, takip eden basamak olmasa bile yazılır. Sonsuzluk ve sayı olmayan dönüştürme stili için notlara bakın.

    a,A (C99)
        Kayan noktalı sayıyı onaltılık üs gösterimine dönüştürür. Dönüştürme stili için [-]h.hhh±d kullanılır. Dönüştürme stili için [-]h.hhh±d kullanılır.
        İlk onaltılık basamak, bağımsız değişkenin normalleştirilmiş bir kayan nokta değeri olup olmadığı değildir. Değer a0xpA0XP00, üs aynı zamanda 0. 
        Kesinlik, onaltılık nokta karakterinden sonra görünecek basamak sayısını tam olarak belirtir. Varsayılan duyarlık, değerin tam gösterimi için yeterlidir. 
        Alternatif uygulamada, ondalık nokta karakteri, onu takip eden hiçbir rakam olmasa bile yazılır. Sonsuzluk ve sayı olmayan dönüştürme stili için notlara bakın

    g,G	
        Kayan noktalı sayıyı, değere ve duyarlığa bağlı olarak ondalık veya ondalık üs gösterimine dönüştürür.Stil veya stil ile dönüştürme stili için gerçekleştirilecektir.
        Stil veya stil ile dönüştürme stili için gerçekleştirilecektir. Sıfır değilse kesinliği eşitleyelim, gefGEFP6 Kesinlik belirtilmemişse veya 1 Hassasiyet ise 0. 
        Daha sonra, stil içeren bir dönüşümün üssü şu şekilde olacaktır: EX
        P > X ≥ −4 ise, dönüşüm stil veya hassasiyetle P − 1 − X olur. fF
        aksi takdirde, dönüşüm stil veya hassasiyetle P − 1 ile yapılır. eE
        Alternatif gösterim istenmedikçe, sondaki sıfırlar kaldırılır, ayrıca kesirli kısım bırakılmamışsa ondalık nokta karakteri kaldırılır. Sonsuzluk ve sayı olmayan dönüştürme stili için notlara bakın.

    n	
        Bu çağrıyla işleve o ana kadar yazılan karakter sayısını döndürür. Sonuç, bağımsız değişkenin işaret ettiği değere yazılır. 
        Spesifikasyon herhangi bir bayrak, alan genişliği veya hassasiyet içermeyebilir.

    p	
        Bir işaretçiyi tanımlayan uygulama tanımlı bir karakter dizisi yazar.


//[cplusplus.com::reference:<cstdio>:printf]
        Belirticisi     Çıktı	                                                            Örnek
        d veya i        İşaretli ondalık tamsayı	                                        392
        u               İşaretsiz ondalık tamsayı	                                        7235
        o	            İşaretsiz sekizli	                                                610
        x	            İşaretsiz onaltılık tamsayı	                                        7fa
        X	            İşaretsiz onaltılık tamsayı (büyük harf)	                        7FA 
        f	            Ondalık kayan nokta, küçük harf	                                    392.65
        F	            Ondalık kayan nokta, büyük harf	                                    392.65
        e	            Bilimsel gösterim (mantis/üs), küçük harf	                        3.9265E+2
        E	            Bilimsel gösterim (peygamber devesi/üs), büyük harf                	3.9265E+2
        g	            En kısa gösterimi kullanın: %e veya %f	                            392.65
        G	            En kısa gösterimi kullanın: %E veya %F	                            392.65
        a	            Onaltılık kayan nokta, küçük harf	                                -0xc.90fep-2
        A	            Onaltılık kayan nokta, büyük harf	                                -0XC.90FEP-2
        c	            Karakter	                                                        a
        s	            Karakter dizesi                                                    	örnek
        p	            İşaretçi adresi                                                    	b8000000
        n	            Hiçbir şey yazdırılmadı.                                             
                        Karşılık gelen bağımsız değişken,                                     
                        işaretli bir int işaretçisi olmalıdır. 
                        Şimdiye kadar yazılan karakter sayısı işaret edilen konumda saklanır.    
                        
        %	            Bir % ve ardından başka bir % karakteri, akışa tek bir % yazar.       %      


//[FMC]
    ||format specifier ||acıklama                               ||kullanımı    ||deger aralıgı                                            ||ornekler                                  ||
    ||d                ||işaretli ondalık                       ||%d           ||-2147483648 den 2147483647                               ||2554                                      ||
    ||i                ||işaretli tamsayı                       ||%i           ||-2147483648 den 2147483647                               ||95756                                     ||
    ||c                ||tek karakter                           ||%c           ||-128 den 127 ASCII karakterleri veya normal karakter     ||95 veya 'A'                               ||
    ||u                ||işaretsiz ondalık                      ||%u           ||0 dan 4294967295                                         ||65448                                     ||
    ||u                ||işaretsiz tamsayı                      ||%u           ||0 dan 4294967295                                         ||16615                                     ||
    ||o                ||işaretsiz sekizli                      ||%o           ||0 dan 4294967295                                         ||54648                                     ||
    ||x                ||işaretsiz onaltılık                    ||%x           ||0 dan 4294967295                                         ||46951                                     ||
    ||X                ||işaretsiz onaltılık                    ||%X           ||0 dan 4294967295                                         ||146516                                    ||
    ||f                ||kayan noktalı sayı                     ||%f           ||[-+]d.dddddd                                             ||1.123456                                  ||
    ||F                ||kayan noktalı sayı                     ||%F           ||[-+]ddd.dddddd                                           ||123.123456                                ||
    ||e                ||bilimsel/üslü kayan noktalı sayı       ||%e           ||[-+]d.dddddde[-+]dd                                      ||1.123456e12                               ||
    ||E                ||bilimsel/üslü kayan noktalı sayı       ||%E           ||[-+]ddd.ddddddE[-+]dd                                    ||123.123456E12                             ||
    ||g                ||En kısa gösterimi kullanın: %e veya %f ||%g           ||P> X ≥−4, %f,%F degilse %e,%E                            ||1.12345                                   ||
    ||G                ||En kısa gösterimi kullanın: %e veya %f ||%G           ||P> X ≥−4, %f,%F degilse %e,%E                            ||123.12345                                 ||
    ||a                ||bilimsel/üslü Onaltılık kayan nokta    ||%a           ||[+-]0xh.hhhhhhhhhhhhhp[+-]d                              ||1.123456                                  ||
    ||A                ||bilimsel/üslü Onaltılık kayan nokta    ||%A           ||[+-]0xH.HHHHHHHHHHHHHP[+-]d                              ||123.123456                                ||
    ||s                ||Karakter dizesi                        ||%s           ||"karakter dizesi"                                        ||"karakter dizesi"                         ||
    ||p                ||işaretçi adresi                        ||%p           ||işaretçi                                                 ||"işaretçi dizisi" veya işaretçi sayısı    ||
    ||%                ||harfi harfine yazar                    ||%%           ||-                                                        ||%%                                        ||
    ||n                || Hiçbir şey yazdırılmadı               ||%n           ||işaretli bir int                                         ||-                                         ||
        
*/

    printf("isaretli ondalik sayi [%%d]=[%d]\n",2147483647);
    printf("isaretli tam sayi [%%i]=[%i]\n\n",2147483647);

    printf("ASCII karakteri [%%c]=[%c]\n",120);
    printf("normal karakteri [%%c]=[%c]\n\n",'x');

    printf("isaretsiz ondalik sayi [%%ud]=[%u]\n",4294967295);
    printf("isaretsiz tam sayi [%%ui]=[%u]\n\n",4294967295);

    printf("isaretsiz sekizli sayi [%%o]=[%o]\n",4294967295);
    printf("isaretsiz onaltilik sayi [%%x]=[%x]\n",4294967295);
    printf("isaretsiz onaltilik sayi [%%X]=[%X]\n\n",4294967295);

    printf("kayan noktali sayi [%%f]=[%f]\n",1.123456);
    printf("kayan noktali sayi [%%F]=[%F]\n\n",123.123456);

    printf("bilimsel kayan noktali sayi [%%e]=[%e]\n",1.123456);
    printf("bilimsel kayan noktali sayi [%%E]=[%E]\n",123.123456);
    printf("bilimsel kayan noktali sayi [%%e]=[%e]\n",1.123456e12);
    printf("bilimsel kayan noktali sayi [%%E]=[%E]\n\n",123.123456E14);

    printf("en kisa gosterimi kullanin %%e veya %%f [%%g]=[%g]\n",1.123456);
    printf("en kisa gosterimi kullanin %%e veya %%f [%%g]=[%g]\n",123.123456);
    printf("en kisa gosterimi kullanin p>x>=-4 p=6 x=0 6>0>-4  ifadeyi karsiladigi icin %%f yazcak  [%%g]=[%g]\n",1.123456);
    printf("en kisa gosterimi kullanin p>x>=-4 p=6 x=6 6>6>-4  ifadeyi karsilamadigi  icin  %%e yazcak [%%g]=[%g]\n\n",123.123456e6);

    printf("bilimsel onaltilik kayan noktali sayi [%%a]=[%a]\n",1.123456);
    printf("bilimsel onaltilik kayan noktali sayi [%%A]=[%A]\n\n",123.123456);

    printf("karakter dizesi [%%s]=[%s]\n\n","karakter dizesi");

    printf("isaretci dizesi [%%p]=[%p]\n","isaretci dizesi");
    printf("isaretci sayisi [%%p]=[%p]\n\n",123456789);

    printf("harfi harfine yazar   [%%]=[%%]\n");
    printf("harfi harfine yazar   [%%%]=[%%%]\n");
    printf("harfi harfine yazar   [%%metin]=[%%metin]\n");
    printf("harfi harfine yazar   [%%%]=[%%%]\n\n");

    printf("hic bir sey yazdirilamadi [%%n]=[%n]\n","isaretci dizesi");
    printf("hic bir sey yazdirilamadi [%%n]=[%n]\n",1234);
    printf("hic bir sey yazdirilamadi [%%n]=[%n]\n");
    
    printf("\n**************** printf fonksiyonu printf format specifier kullanımı ve ornekleri: //////////////////\n\n");

    printf("////////////// printf flags[-] kullanimi *******************\n\n");

/*
    printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024
     
youtube linki
https://youtu.be/oadd43f74Yo?si=cUnFLqqzPr04-71i

    printf syntax/soz dizimi:
    int printf(const char *format, ...);
    printf("const char %format specifiers", arg1 , arg2 , . , . , );

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier
    
    %[flags]specifier
    
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


    printf("\n**************** printf flags[-] kullanimi //////////////////\n\n");
  
     printf("////////////// printf flags[+] kullanimi *******************\n\n");
   
 /*
    printf fonksiyonu printf flags[+] kullanimi
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

   
     printf("\n**************** printf flags[+] kullanimi //////////////////\n\n");
    
    printf("////////////// printf flags[(bosluk)] kullanimi *******************\n\n");

    /*
    printf fonksiyonu flags[(bosluk)]
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

    printf("\n**************** printf flags[(bosluk)] kullanimi //////////////////\n\n");

    printf("////////////// printf flags[#]kullanimi *******************\n\n");
 
    /*
    printf fonksiyonu printf flags[#]
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

    printf("\n**************** printf flags[#] kullanimi //////////////////\n\n");

    printf("////////////// printf flags[0] kullanimi *******************\n\n");

/*
    printf fonksiyonu printf flags[0]
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

    printf("\n**************** printf flags[0] kullanimi //////////////////\n\n");
    
    printf("////////////// printf width kullanimi *******************\n\n");

    /*
     printf fonksiyonu printf width
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

    printf("\n**************** printf width kullanimi //////////////////\n\n");
   
    printf("////////////// printf .precision kullanimi *******************\n\n");

    /*
     printf fonksiyonu printf .precision
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

    printf("\n**************** printf .precision kullanimi //////////////////\n\n");
   
    printf("////////////// printf length kullanimi *******************\n\n");

    /*
     printf fonksiyonu length
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
    
    printf("\n**************** printf length kullanimi //////////////////\n\n");
}

