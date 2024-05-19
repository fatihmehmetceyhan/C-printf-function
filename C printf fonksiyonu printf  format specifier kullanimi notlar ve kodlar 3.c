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
#include<stdio.h>
int main()
{
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
}
