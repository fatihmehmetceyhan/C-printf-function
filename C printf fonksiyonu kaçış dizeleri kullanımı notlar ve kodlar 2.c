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
#include<stdio.h>

int main()
{

    printf("////////////// printf escape sequences examples *******************\n\n");
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

}
