# Pushswap
* Bu proje, sınırlı bir talimat seti ve en az sayıda hamle ile verileri bir yığın üzerinde sıralamayı içerir.
 Bunu gerçekleştirmek için, çeşitli sıralama algoritmalarını manipüle etmeniz ve optimize edilmiş veri sıralama için en uygun çözüm(ler)i seçmeniz gerekecektir.

* Her iki yığını da işlemek için emrinizde bir dizi tamsayı değeri, 2 yığın ve bir dizi talimat var. Talimatlar aşağıdaki gibidir:

# Tüzük
* Oyun 'a' ve 'b' adlı iki yığından oluşur.
* Başlangıçta, b boştur ve a belirli sayıda pozitif veya negatif tamsayı içerir (yinelemeler olmadan).
* Amaç a'yı artan bir şekilde sıralamaktır.
* Bu amaçla aşağıdaki işlemleri gerçekleştiriyoruz:
* (sa) swap a : a öğesinin ilk iki öğesini değiştirin.
* (sb) swap b : b öğesinin ilk iki öğesini değiştirin.
* (ss) sa ve sb yığınlarının ilk iki öğesini aynı anda değiştirin.
* (pa) push a : a yığınının ilk elemanı üstten alın ve b yığınının üzerine koyun.
* (pb) push b : b yığınının ilk elemanı üstten alın ve a yığınının üzerine koyun.
* (ra) rotate a : a yığınının tüm elamanlarının bir konumun yukarıya doğru kayması (ilk öğe sonuncu olur).
* (rb) rotate b : b yığınının tüm elamanlarının bir konumun yukarıya doğru kayması (ilk öğe sonuncu olur).
* (rr) a ve b yığınlarının tüm elamanlarının bir konumun yukarıya kayması ( ra ve rb beraber çalışır).
* (rra) reverse rotate a: a yığınının tüm elamanlarının bir konumun alta doğru kayması (son eleman ilk olur).
* (rrb) reverse rotate b: b yığınının tüm elamanlarının bir konumun alta doğru kayması (son eleman ilk olur).
* (rrr) a ve b yığınlarının tüm elamanlarının bir konumun alta doğru kayması (rra ve rrb beraber çalışır).

# Kurulum
* git clone https://github.com/zehraarslan/Pushswap.git push_swap
* cd ./push_swap
* make
* ./push_swap 4 2 5 1 8
