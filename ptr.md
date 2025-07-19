
	
		# Pointer == Dizi : Her dizi bir pointer, her pointer da doğal bir dizidir

		int d[6], *p0;
		p0 = d; --> pointerlar arasında işlem olabilir. p0, d dizisinin ilk elemanının d[0] adresini alır, p0 = &d[0];

		*d, *(d+1), *(d+2), *(d+3), *(d+4), *(d+5)
		d[5], *(d + 4) veya *(p0 + 4) --> d dizisinin 5. elemanı için

		p0 = &d[8]; --> d[5] = *(p0 - 3)
	


				DYNAMIC MEMORY
	 ----------------------------------------------------
		1. Dinamik olarak değiştirilemez
		C dili için kodlama sırasında henüz kod çalışmadan alacağı memory miktarı
		belirli olmalıdır. Ram'de blok halinde memory alınır, dizi elemanları sıralı olarak eklenir
			# int d[5]; 5 yerine değişken olursa değeri sabit bile olsa değişkendir ve hatadır

		2. Dinamik olarak değiştirilebilir (memory allocation)
			# int *p = (int *)malloc(sizeof(int)*x)
				- (int *) [type-casting(tip dönüşümü)] : Malloc void *(tipsiz) dönderir. Aldığı alanın en başındaki adresi dönderir. [int, float, char] dizisi olarak değiştirilebilir
				- sizeof(int,float,char)			   : Int'in kapladığı alan (4 byte)
				- x									   : x tane int'in alanını kapla

     ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

				STACK MEMORY (Yığın)
		 ---------------------------------
		- Stack, programın fonksiyon çağrıları, yerel değişkenleri ve dönüş adresleri gibi bilgileri depoladığı, hızlı erişimli bir bellek bölgesidir
		- Geçiçi değişkenleri tutar (Int,char,float gibi tanımlanan)
		- LIFO sistemi: Son giren, ilk çıkar
		- (+) Hızlıdır (CPU direkt kullanır)
		- (+) Derleyici yönetir, sen karışmazsın
		- (-) Hafızası küçük (genelde MB seviyesinde)
		- (-) Yaşam süresi kısa ({} bitince silinir)


    			HEAP MEMORY (Yığın)
		 ---------------------------------
		- Malloc, Calloc, Realloc; Manuel free etmek zorundayız, {} ile free edilmez
		- Uzun süreli veri saklamak veya büyük miktarda bellek ayırmak için kullanılır
		- (+) Bellek çok geniş (GB'lar olabilir)
		- (+) Kontrol tamamen sende
		- (-) Yavaş (Stack kadar hızlı değil)
		- (-) Unutursan "memory leak" (bellek sızıntısı) olur


				SEGMENTATION FAULT (segfault)
		 --------------------------------------
		   En yaygın nedenleri (segment = alan, segmantation = bellek kesiti, bölümü)

		 1. Mallog'la ayrılan alanının dışına yazmaya çalışmak: alan doluysa segfault, ayrılan alanın dışında olmasına rağmen kullanılabilir

		 2.
		 int *p = NULL;
		 *p = 5;  // NULL pointer'a yazmaya çalışıyor -> segfault
		 
		 3.
		 int *p = malloc(sizeof(int));
		 free(p);
		 *p = 10; // free sonrası erişmek hatalı
		  
		 4.
		 int arr[3];
		 arr[5] = 7;
		  
		 5.
		 char *str = "text";
		 str[0] = 'T';  // Sabit belleğe yazmaya çalışmak

	 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

				COMPILE TIME (Derleme Zamanı)
	 ----------------------------------------------------
	   Kodun derleyici tarafından makine diline çevrildiği zamandır
	   - Hatalar genellikle bu aşamada tespit edilir
	   - Dizi boyutunun sabit olması gerektiği gibi kurallar burada kontrol edilir

				EXECUTIBLE TIME (Çalışma Zamanı)
	 ----------------------------------------------------
	   Programın çalıştırıldığı, yani kodun gerçekten işletildiği zamandır
	   - Dinamik bellek işlemleri (malloc gibi) bu aşamada gerçekleşir

	 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

			 #	int **a = (int *)malloc(sizeof(int *)*3) --> 3 tane (int *)(adres) yer açtım (a[0], a[1], a[2])

					  +--------------------------+
		   **a  --->  |  a[0]  |  a[1]  |  a[2]  |  int * tipinde
					  +--------+--------+--------+
					      |        |        |
					      |        |        |
					      v        v        v
			       	   +-----+  +-----+  +-----+   
		      a[0][0]  | int |  | int |  | int |
			       	   |-----|  |-----|	 |-----|
			  a[0][1]  | int |  | int |  | int |
					   |-----|  |-----|  +-----+
					   | int |  | int |   a[2]
					   |-----|  |-----|  
					   | int |  | int |  
					   +-----+  |-----|  
						a[0]    | int |
								|-----|
								| int |
								+-----+
								 a[1]
								
					--> Başlangıçta hepsi çöp veya NULL
					a[0] = malloc(sizeof(int) * 4);  // 4 int'lik alan oluşturuldu
					a[1] = malloc(sizeof(int) * 6);  // 6 int'lik alan oluşturuldu
					a[2] = malloc(sizeof(int) * 2);  // 2 int'lik alan oluşturuldu

	 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

				(int *): Aldığı alanın en başındaki adresi dönderir
			#	int **a = (int *)malloc(sizeof(int) * 3) ---> HATALI

				Ne yapıyor?
				1. sizeof(int) * 3 yazdın. Bu sana 3 tane int'lik boş alan açtı
				2. Ama sen diyorsun ki, "Ben bunun içine adres koyacağım"
				3. O kutular int için açılmış! Adres değil


				*a   : int tutulacağını söyler
				**a  : adres tutulacağını söyler
				***a : adres tutan adresin tutulacağını söyler

						  +--------------------------+
	   sizeof(int)  --->  |  int   |  int   |   int  |
						  +--------+--------+--------+

						  +--------------------------+
	   sizeof(int)  --->  | adres  | adres  |  adres |
						  +--------+--------+--------+


			#	int **a = (int **)malloc(sizeof(int) * 3) ---> HAFİF DAHA DOĞRU AMA HALA HATALI

				Sen hala int kadar yer açıyorsun. Adres tutacak kutu açmıyorsun
				Adres tutacak kutuların boyu int * kadar olur

			#	int **a = (int **)malloc(sizeof(int *) * 3) ---> DOĞRU
							int *p0, **p1;
							p0 = &a;		
							**p1 = &p0;

					  +--------------------------+
		   **a  --->  |  adres |  adres |  adres |
					  +--------+--------+--------+
						  |        |        |
						  |        |        |
						  v        v        v
					   +-----+  +-----+  +-----+
					   | int |  | int |  | int |
					   |-----|  |-----|	 |-----|
					   | int |  | int |  | int |
					   |-----|  |-----|  +-----+
					   | int |  | int |   a[2]
					   |-----|  |-----|
					   | int |  | int |
					   +-----+  |-----|
						a[0]    | int |
								|-----|
								| int |
								+-----+
								 a[1]
	