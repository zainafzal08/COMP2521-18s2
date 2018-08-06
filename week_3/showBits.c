#include <stdio.h>
#include <stdlib.h>

typedef uint32_t Word;

void showBits(Word w) {
	// first form a mask, this is a byte
	// that when "AND"'ed with a byte replaces
	// all bits except the bit's we want to examine with 0
	//     number : 0110101
	//       mask : 1000100   <-- mask to isolate 3rd bit and last bit
	//       ---------------
	//              0000100     everything but last and 3rd is 0,
	//                          last and 3rd and copied from number


	// 00000000 00000000 00000000 00000001 << 31 = 10000000 00000000 00000000 00000000
	Word mask = 1;
	mask = mask << 31;

	int i = 0;
	for(i=31; i>=0; i--) {
		// use the mask to isolate bit
		Word oneBit = mask & w;
		// move bit to the end so we can produce either a 1 or a 0
		oneBit = oneBit >> i;
		// print the bit
		printf("%u",oneBit);
		// if we have printed 8 bits print a space
		if (i%8 == 0) printf(" ");
		// move the mask to isolate the next bit
		mask = mask >> 1;
	}
	printf("\n");
}

// minimal version (for fun)
void showBitsMinified(Word w) {
	Word m = ((Word)1)<<31;
	for(; m!=0; m>>=1)
		if (m!=1) printf((m==16777216 || m==65536 || m == 256)?"%u ":"%u",(m & w)?1:0)
		else printf("%u\n",(m & w)?1:0);
}

int main(int argc, char* argv[]) {
	showBits(0);
	showBits(1);
	showBits(8);
	showBits(6);
	// 2^30
	showBits(1073741824);
}
