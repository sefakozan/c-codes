/*
---------- C Keywords ----------
* auto: Bir değişkenin otomatik olarak tahsis edilip serbest bırakılacağını belirtir; genellikle yerel değişkenler için varsayılan olarak kullanılır ve manuel olarak belirtilmesine nadiren gerek duyulur.
* break: Döngü (for, while, do-while) veya switch yapısından çıkmak için kullanılır; program akışını kesintiye uğratır.
* case: switch ifadesinde belirli bir durumun kontrolünü sağlar; ilgili koşul sağlandığında kod bloğu yürütülür.
* char: Tek bir karakteri temsil eden temel veri tipini tanımlar; genellikle 1 baytlık bir alan kaplar.
* const: Bir değişkenin değerinin değiştirilemez olduğunu belirtir; derleme zamanında sabit olarak kabul edilir.
* continue: Döngü içinde kalan kodları atlayarak bir sonraki yinelemeye geçer; döngüyü tamamen sonlandırmaz.
* default: switch ifadesinde hiçbir case koşulu sağlanmadığında çalışan varsayılan bloğu tanımlar.
* do: do-while döngüsünün başlangıcını belirtir; en az bir kez çalışır ve sonra koşulu kontrol eder.
* double: Daha yüksek hassasiyetli kayan nokta sayılarını (genellikle 8 bayt) temsil eden veri tipini tanımlar.
* else: if koşulu sağlanmadığında çalışan alternatif kod bloğunu belirtir.
* enum: Adlandırılmış sabit bir tamsayı kümesi tanımlamak için kullanılır; genellikle okunabilirlik için sabitler oluşturur.
* extern: Bir değişken veya fonksiyonun başka bir dosyada tanımlandığını bildirir; dış bağlantı sağlar.
* float: Kayan nokta sayılarını (genellikle 4 bayt) temsil eden veri tipini tanımlar.
* for: Belirli bir koşul altında tekrarlanan bir kod bloğunu tanımlar; başlatma, koşul ve artırma ifadeleri içerir.
* goto: Program akışını belirtilen etikete (label) zorla yönlendirir; genellikle kontrol akışını karmaşıklaştırdığı için dikkatli kullanılmalıdır.
* if: Belirli bir koşulun doğru olup olmamasına bağlı olarak kod bloğunu yürütür.
* inline: (C99 ve sonrası) Fonksiyonun çağrı yerine gömülmesini önerir; performans artışı için küçük fonksiyonlarda kullanılır.
* int: Temel tamsayı veri tipini tanımlar; genellikle 4 baytlık bir alan kaplar (platforma bağlı).
* long: Daha geniş aralıklı tamsayıları (genellikle 4 veya 8 bayt) temsil eden veri tipini tanımlar.
* register: Bir değişkenin CPU kaydında tutulmasını önerir; hızlı erişim için kullanılır ancak modern derleyicilerde etkisi sınırlıdır.
* restrict: (C99 ve sonrası) Bir pointer'ın yalnızca kendisi tarafından erişilen belleği işaret ettiğini belirtir; optimizasyon için ipucu verir.
* return: Bir fonksiyondan değer döndürür ve fonksiyonu sonlandırır; değer döndürmeyen fonksiyonlar için void ile kullanılabilir.
* short: Daha küçük aralıklı tamsayıları (genellikle 2 bayt) temsil eden veri tipini tanımlar.
* signed: Tamsayıların negatif ve pozitif değerleri içerebileceğini belirtir; varsayılan olarak int için geçerlidir.
* sizeof: Bir veri tipinin veya değişkenin bayt cinsinden boyutunu döndürür; derleme zamanında hesaplanır.
* static: Bir değişkenin veya fonksiyonun ömrünü program süresince uzatır; yerel değişkenlerde yalnızca bir kez başlatılır.
* struct: Birden fazla veri tipini bir araya getirerek özel bir veri yapısı tanımlar.
* switch: Birden fazla koşulu kontrol etmek için case ve default ile birlikte kullanılır.
* typedef: Var olan bir veri tipine yeni bir isim atar; kod okunabilirliğini artırır.
* union: Farklı veri tiplerini aynı bellek bölgesinde saklar; yalnızca bir üye aynı anda geçerlidir.
* unsigned: Tamsayıların yalnızca pozitif değerler alacağını belirtir; aralığı iki katına çıkarır.
* void: Hiçbir değer döndürmeyen veya hiçbir parametre almayan fonksiyonları tanımlar; pointer'larda belirsiz tip belirtir.
* volatile: Bir değişkenin donanım veya başka bir thread tarafından değiştirilebileceğini belirtir; optimizasyonları engeller.
* while: Belirli bir koşul doğru olduğu sürece bir kod bloğunu tekrarlar.
* _Alignas: (C11 ve sonrası) Bir değişkenin bellek hizalaması (alignment) gereksinimini belirtir; performans optimizasyonu için kullanılır.
* _Alignof: (C11 ve sonrası) Bir türün hizalaması (alignment) değerini döndürür; derleme zamanında hesaplanır.
* _Atomic: (C11 ve sonrası) Çoklu iş parçacığı ortamında atomik işlemler için bir tür niteliği tanımlar; veri yarışmalarını önler.
* _Bool: (C99 ve sonrası) Boolean (true veya false) değerleri temsil eden veri tipini tanımlar; stdbool.h ile desteklenir.
* _Complex: (C99 ve sonrası) Karmaşık sayıları (gerçek ve sanal bileşenler) temsil eden veri tipini tanımlar; complex.h ile kullanılır.
* _Generic: (C11 ve sonrası) Tür bazlı genel ifadeler sağlar; farklı türler için farklı kod blokları seçer.
* _Imaginary: (C99 ve sonrası) Sanal sayıları temsil eden veri tipini tanımlar; complex.h ile desteklenir.
* _Noreturn: (C11 ve sonrası) Bir fonksiyonun geri dönmeyeceğini belirtir; optimize ediciye ipucu verir.
* _Static_assert: (C11 ve sonrası) Derleme zamanında bir koşulu test eder; başarısız olursa hata verir.
* _Thread_local: (C11 ve sonrası) Bir değişkenin her iş parçacığı için ayrı bir kopyasını tanımlar; iş parçacığı lokal depolama sağlar.
*/