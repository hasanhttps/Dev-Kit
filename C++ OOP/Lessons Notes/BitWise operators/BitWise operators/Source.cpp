#include <iostream>
#include <bitset>// Bu bir classdir bitler ile islemek ucun.
using namespace std;


int main() {

	// BitWise operators

	// &   ~    BitWise and operator
	// |   ~    BitWise or operator
	// ^   ~    BitWise xor operator
	// ~   ~    BitWise compliment operator
	// <<  ~    BitWise left shift operator
	// >>  ~    BitWise right shift operator


	//// BitWise AND (&) Operator

	//int a = 10;  // 0000000000001010
	//int b = 20;  // 0000000000010100
	//int c = a & b; // 0000000000000000  ~  0 . Ekrana cixardsaq 0 cixacaq

	//// Bu bytlar ile muqayiseni ifade edir. Yuxaridaki reqemin byte'i ile asagidakinin bytler'i tek tek yoxlanilir and ile true ve ya false kimi byte yaradilir.

	//int d = 5;// 0000000000000101
	//int f = 25;// 0000000000011001
	//int g = d & f;// 0000000000000001  ~  1 . Eger ekrana cixardsaq 1 cixacaq

	//cout << g << endl;
	//cout << c << endl;

	// BitWise OR (|) Operator

	//int a = 10;  // 0000000000001010
	//int b = 20;  // 0000000000010100
	//int c = a | b; // 0000000000011110  ~  30 .Ekrana cixardsaq 30 cixacaq

	//// Bu bytlar ile muqayiseni ifade edir. Yuxaridaki reqemin byte'i ile asagidakinin bytler'i tek tek yoxlanilir and ile true ve ya false kimi byte yaradilir.

	//int d = 5; // 0000000000000101
	//int f = 25; // 0000000000011001
	//int g = d | f; // 0000000000011101  ~  29 . Eger ekrana cixardsaq 1 cixacaq

	//cout << g << endl;
	//cout << c << endl;

	// BitWise XOR (^) Operator

	//int a = 10;  // 0000000000001010
	//int b = 20;  // 0000000000010100
	//int c = a ^ b; // 0000000000011110  ~  30 .Ekrana cixardsaq 30 cixacaq

	//// Bu bytlar ile muqayiseni ifade edir. Yuxaridaki reqemin byte'i ile asagidakinin bytler'i tek tek yoxlanilir and ile true ve ya false kimi byte yaradilir.

	//int d = 5; // 0000000000000101
	//int f = 25; // 0000000000011001
	//int g = d ^ f; // 0000000000011100  ~  28 . Eger ekrana cixardsaq 1 cixacaq

	//cout << c << endl;
	//cout << g << endl;

	// XOR  --  eger 0 ve 0  gelse netice 0 olacaq. 1 ve 1 olsa netice 0 olacaq. 0 ve 1 olsa netice 0 olacaq. Prinsipi or ile eynidir sadece eyni bitlerde netice 0 olur.

	// BitWise COMPLIMENT (~) Operator (NOT)

	//int a = 10; // Bitler seviyesinde 10'un tersini tapir ve ortada 0 olduguna gore bir artiginin tersini tapir bu da -11'a beraberdir.

	//// Till operator (~) bize 0 lari 1 elemekle ve 1 leri 0 elemekle onlari bitler seviyesinde tersini tapir.

	//cout << a << endl;// -11 cixacaq.

	//bitset<64> d = ~~a; // Bu bitste kitabxanasinin clasidir bitler ile islemek ucun lazimdir.
	// Qarsisina <64 || 32> ile hansi sisteme gore deyerin binary systemdeki qarsiligini cixardacigini deyecyik.

	// Bitset ile isdediyimiz qeder reqemleri artira bilerik.

	// BitWise left Swipe (<<) Operator

	// <<  => Verilmish deyeri dediyimiz qeder byte sola surursdurur.

	//int a = 15; // 00001111

	//int b = a << 1; // 00011110 . Burada left wipe operatorun yanina 1 verdik deye bizim byte'imizi sola surusdurur.

	//cout << b << endl;

	bitset<90> d = 18446744073709551615;// 64 bitlik sistemde maksimum eded budur lakin biz isdesek bunu bitset ile artira bilerik
	// Meselen :

	bitset<90> q = d << 26;// Burada 26 bit sola surusdurduyumuz ucun 0 larin yerine bir gelir.

	//// d -- 000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111 --  18446744073709551615 18446744073709551615

	//// q -- 111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000 -- 1237940039285380274832015360

	cout << d << endl;
	cout << q << endl;

	// BitWise right Swipe (<<) Operator

	// >>  => Verilmish deyeri dediyimiz qeder byte saga surursdurur.

	//int a = 15; // 00001111

	//int b = a >> 1; // 00000111 . Burada right swipe operatorun yanina 1 verdik deye bizim byte'imizi saga surusdurur. Bu 7'e beraberdir.
	
	//cout << b << endl;
	
		

}