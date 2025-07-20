#include <stdio.h>

// 3 bit ile: 2^3 durum ifade edilir
// 3 bit ile: max sayı (2^3-1)'dir
// 2^3 - 1 = (0b111 + 1) - 1 --> (2'n - 1) formülü buradan gelir.
// 3 bitin alabileceği max değer 0b111'dir. Bunu hesaplamak zor +1 eklenirse 2^3 olur.

int main()
{
    int i;
    // 3 bit ile 0'dan 7'ye kadar (2^3 - 1) tüm durumları döngü ile kontrol et
    for (i = 0; i < 8; i++)
    {
        // 3 bitlik binary kombinasyonu oluşturmak için bit maskeleme
        int bit0 = (i & 1);      // En düşük anlamlı bit (LSB)
        int bit1 = (i & 2) >> 1; // Orta bit
        int bit2 = (i & 4) >> 2; // En yüksek anlamlı bit (MSB)

        // Binary ve ondalık değerleri yazdır
        printf("Binary: %d%d%d (Decimal: %d)\n", bit2, bit1, bit0, i);
    }
    return 0;
}