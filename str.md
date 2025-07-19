
				STRING İŞLEMLERİ
	-------------------------------------------------------------

	#   char str1[20] = "ilk mesaj"; Satırında ne oluyor?

			1. RAM'de "ilk mesaj" string literali (sabit karakter dizisi) için bellekte read-only alanından tahsis edilir. Yani "Immutable" Stringtir (Değiştirilemez).
				1.1 Neden string literaline read-only bellek tahsis edilir?
					- Verimlilik: Aynı string literal programın farklı yerlerinde kullanıldığında, derleyici aynı kopyayı kullanabilir ve bellekten tasarruf edebilir
					- Güvenlik: Sabit stringlerin yanlışlıkla veya kötü niyetli bir şekilde değiştirilmesini önler

			2. RAM'de str1[20] dizisi için bellekte Stack (read-write) alanından tahsis edilir. Yani "Mutable" Stringtir.

			3. = "ilk mesaj" kısmı, tahsis edilen str1 dizisini bir başlangıç değeriyle (initializer) başlatma işlemidir
			Read-Only bölümündeki karakterler Read-Write bölümüne kopyalanır.


	#   [ char *str1 = "ilk mesaj"; ] ile [ char str1[20] = "ilk mesaj"; ] arasındaki fark nedir?
 
		İlk durum, str1 bir işaretçiydi ve doğrudan "read-only" string literalinin adresini tutuyordu.
		İkinci senaryoda ise, str1'in kendisi 20 karakterlik bir dizi ve string literalinin içeriği bu diziye kopyalanıyor.
		
		char *ptr = "Hello World"; ptr[0] = 'h';), işletim sistemi bir "segmentation fault" veya "access violation" hatası fırlatarak programı sonlandırır. 
		Bu, bu bellek alanının fiilen değiştirilemez olduğunu gösterir.
 
 
 
 				STRING TANIMLAMALARI
	-------------------------------------------------------------
		
	1. Karakter Dizisi (Char Array) ile Tanımlama
 
		--->	char str0[20] = "abcde"; // read-only'de ("abcde") tanımlanan const char array read-write (str[20]) bölgesine kopyalanır. değiştirilebilir
 
	2. Karakter Dizisi ile Eleman Eleman Tanımlama
 	   
		--->	char str1[] = { 'M', 'e', 'r', 'h', 'a', 'b', 'a', '\0' }; // değiştirilebilir
 
	3. Pointer ile Tanımlama
		
		--->	char *str2 = "abcdef"; // *str2 const read only char array dizisinin adresini tutar. değiştirilemez
 
	3. Dinamik Bellek Ayırma ile Tanımlama
 
		--->	char *str3 = (char *)malloc(sizeof(char) * 10); // değiştirilebilir
				free(str3);
 
