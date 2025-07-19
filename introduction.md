# Introduction

#### Kendime Notlar
* Main içine ana kodu yazma
* Fonksiyon ve değişken adları snake_case
* Fonksiyonlar iyi tanımlı ve tek görev yapmalı
* Fonksiyonlar için 20-50 arası satır ideal, 100'den fazla ise bölünmeli
* Global değişken kullanma
* Goto kullanma
* Projeyi fonksiyonlara parçalayıp, sonra bütünleştir
* Break, continue kullanmamaya çalış
* Sayısı belli olan döngülerde for kullan
* Kesinlikle bir defa çalışacaksa do while döngüsü kullan
* Özel koşul gerektiren durumlarda while" kullan
	

#### Değişkenlerin Standart Çıkışları
- d,&nbsp;i &emsp;: &emsp;onluk sistem sayısını basar  
	Not&ensp; :&emsp; %5d -> 5 karakter oluştur ve bas. "
- u&emsp;&emsp;:&emsp; pozitif tam sayıyı basar (unsigned)
- llu&emsp;&ensp;: &emsp;long long unsigned
- f,&nbsp;F&emsp;&nbsp;:&emsp; ondalık sayı  
Not&ensp; :&emsp; %8.4f -> toplam 8, ondalık kısmı 4 karakter olur. 3.14 için "(2boşluk)3.1400" (.'da karakter)
- e,&nbsp;E&emsp;: &emsp;üstsel sayı basar (exponent, 10 = e)
- x,&nbsp;X&emsp;: &emsp;işaretsiz tam sayıyı 16'lık (hexadecimal) tabanda basar
- o&emsp;&emsp;: &emsp;işaretsiz tam sayıyı 8'lik (octal) tabanda basar
- c&emsp;&emsp;: &emsp;char basar (character)
- s&emsp;&emsp;: &emsp;\0 görene kadar char array basar
- p&emsp;&ensp;&nbsp;: &emsp;ram adresini belirtir
- %&emsp;&ensp;: &emsp;% işaretini basar


#### Özel Semboller
- \n&ensp;:&nbsp; enter
- \t&ensp;&nbsp;:&nbsp; tab
- \b&ensp;:&nbsp; imleci bir karakter geri götürür
- \\\\&ensp;&nbsp;:&nbsp; \ işaretini basar
- \\"&ensp;&nbsp;:&nbsp; " işaretini basar

#### Programlama Dilindeki Temel Unsurlar
1. Statement (Talimatlar), her kod talimattır
2. Blocks (Bloklar) {}
	Birden fazla statement'ı bloklar, koşul ile bloklar çalıştırılabilir
3. Structured Programming (Yapısal Programlama)
	- Bloğun Koşullu Olması (if)
	- Bloğun Tekrarlanabilmesi (döngü)
	- Bloğun Parametrik Olması (parametre alır)

#### İşlemler
1. Maths Operators
2. Logical Operators, Boolean Algebra (Mantıksal İşlemler)
3. Assignment Operators [&ensp;(&nbsp;+&nbsp;,&ensp;-&nbsp;,&ensp;*&nbsp;,&nbsp;&ensp;/&nbsp;,&ensp;%&nbsp;,&ensp;&&nbsp;,&ensp;|&nbsp;,&ensp;^&nbsp;,&ensp;>>&ensp;<<)=&ensp;]

	- a++ : işlemi yap sonra arttır (post increment, decrement)
	- ++a : ilk arttır sonra işlemi yap (pre increment, decrement)  

&nbsp;----------------------------------------------------------------------------------------------
  
#### 1.1 Bitwise Ops (Bit = Binary Digit)
- <<, >> &ensp;:&emsp; 2<<a , 3>>b &nbsp;-->&nbsp; 2'yi a kadar sola, 3'ü b kadar sağa kaydırır
- %&emsp;&emsp;&emsp;&nbsp;: remainder, modulus  

##### &emsp;&emsp;AND & (öncelikli)  
&emsp;&emsp;&emsp;&emsp;1 1, 1  
&emsp;&emsp;&emsp;&emsp;1 0, 0  
&emsp;&emsp;&emsp;&emsp;0 1, 0  
&emsp;&emsp;&emsp;&emsp;0 0, 0

&emsp;&emsp; 6 & 3 = 2 (110 & 011 = 010)  
&nbsp;-------------------------------------------------
##### &emsp;&emsp;OR | (veya) 
&emsp;&emsp;&emsp;&emsp;1 1, 1  
&emsp;&emsp;&emsp;&emsp;1 0, 1  
&emsp;&emsp;&emsp;&emsp;0 1, 1  
&emsp;&emsp;&emsp;&emsp;0 0, 0  

&emsp;&emsp; 6 | 3 = 7 (110 | 011 = 111)  
&nbsp;-------------------------------------------------
##### &emsp;&emsp;XOR ^ (execlusive veya)

&emsp;&emsp;&emsp;&emsp;1 1, 0  
&emsp;&emsp;&emsp;&emsp;1 0, 1  
&emsp;&emsp;&emsp;&emsp;0 1, 1  
&emsp;&emsp;&emsp;&emsp;0 0, 0  

&emsp;&emsp; 6 ^ 3 = 5 (110 ^ 011 = 101)  

&nbsp;----------------------------------------------------------------------------------------------  

#### 2.1 Logic Ops
- ==&emsp;&emsp;&emsp;&ensp;&ensp;&nbsp;: eşitken true
- !=&emsp;&emsp;&emsp;&emsp;&ensp;&nbsp;: eşit değilken true
- <,>,<=,>=&ensp;&ensp;:  ilişkisel operatörler (relational ops)
- &&&emsp;&emsp;&emsp;&emsp;&nbsp;: ve
- ||&emsp;&emsp;&emsp;&emsp;&emsp;&nbsp;: veya
