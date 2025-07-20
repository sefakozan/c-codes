
/*
        Stack MemoryOtomatik olarak tahsis edilir ve serbest bırakılır (fonksiyon kapsamına bağlı).
    Sabit bir boyuta sahiptir (örneğin, 1-8 MB, platforma bağlı).
    Hızlı erişim sağlar (LIFO yapısı sayesinde).
    Yerel değişkenler ve fonksiyon çağrı bilgileri saklanır.
    Stack overflow riski taşır (aşırı özyineleme veya büyük yerel verilerle).

        Heap MemoryManuel olarak malloc()/calloc() ile tahsis edilir, free() ile serbest bırakılır.
    Büyük ve dinamik boyuta sahiptir (sistem belleğine bağlı).
    Erişim daha yavaştır (tahsis ve yönetim nedeniyle).
    Büyük veri yapıları (diziler, bağlı listeler) için kullanılır.
    Memory leak veya fragmantasyon gibi hatalara açıktır.

*/