/*
    printf fonksiyonu printf format specifier kullanımı ve ornekleri:
     olusturma tarihi: 19/05/2024 
     olusturan: Fatih Mehmet CEYHAN: FMC 
     yukleme tarihi 19/05/2024

  kaynaklar:

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



*/
#include<stdio.h>

    printf fonksiyonu syntax/sözdizimi
    int printf(const char *format,...);

    printf fonskiyonu açıklaması
    Biçimlendirilmiş verileri stdout a yazdırma
    Biçime göre işaret edilen C dizesini standart çıktıya (stdout) yazar.
    Biçim, biçim belirticileri (% ile başlayan alt diziler) içeriyorsa, biçimden sonra gelen ek bağımsız değişkenler biçimlendirilir ve
    ilgili belirticilerinin yerini alarak sonuçta elde edilen dizeye eklenir.

    printf fonksiyonu kullanımı
    printf("const char");

    printf fonksiyonu kullanımı
    printf("const char %format specifier1 %format specifier2     %format specifierN",arg1,arg2,...,argN);

    Bir biçim belirticisi bu prototipi izler:
    %[flags][width][.precision][length]specifier

    ||format specifier||acıklama||kullanımı||deger aralıgı||ornekler||
    ||d||işaretli ondalık||%d||-2147483648 den 2147483647 ||2554||
    ||i||işaretli tamsayı||%i||-2147483648 den 2147483647||95756||
    ||c||tek karakter||%c||-128 den 127 ASCII karakterleri veya normal karakter  ||95 veya 'A'||
    ||u||işaretsiz ondalık||%u||0 dan 4294967295||65448||
    ||u||işaretsiz tamsayı||%u||0 dan 4294967295||16615||
    ||o||işaretsiz sekizli||%o||0 dan 4294967295||54648||
    ||x||işaretsiz onaltılık||%x||0 dan 4294967295||46951||
    ||X||işaretsiz onaltılık||%X||0 dan 4294967295||146516||
    ||f||kayan noktalı sayı||%f||[-+]d.dddddd||1.123456||
    ||F||kayan noktalı sayı||%F||[-+]ddd.dddddd||123.123456||
    ||e||bilimsel/üslü kayan noktalı sayı ||%e||[-+]d.dddddde[-+]dd||1.123456e12||
    ||E||bilimsel/üslü kayan noktalı sayı||%E||[-+]ddd.ddddddE[-+]dd||123.123456E12||
    ||g||En kısa gösterimi kullanın: %e veya %f||%g||P> X ≥−4, %f,%F degilse %e,%E||1.123456||
    ||G||En kısa gösterimi kullanın: %e veya %f||%G||P> X ≥−4, %f,%F degilse %e,%E||123.123456||
    ||a||bilimsel/üslü Onaltılık kayan nokta||%a||[+-]0xh.hhhhhhhhhhhhhp[+-]d||1.123456||
    ||A||bilimsel/üslü Onaltılık kayan nokta||%A||[+-]0xH.HHHHHHHHHHHHHP[+-]d||123.123456||
    ||s||Karakter dizesi||%s||"karakter dizesi"||"karakter dizesi"||
    ||p||işaretçi adresi||%p||işaretçi||"işaretçi dizisi" veya işaretçi sayısı||
    ||%||harfi harfine yazar||%%||-||%%||
    ||n|| Hiçbir şey yazdırılmadı||%n||işaretli bir int||-||
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
