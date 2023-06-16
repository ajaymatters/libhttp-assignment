//square, cube, hello, prime, pingpong
#include <math.h>
#include <string.h>
#include "functions.h"

int square (int num) {
	return num * num;
}

int cube (int num) {
	return num * num * num;
}

char *hello (char *name) {
	char *hello_msg = "hello";
	strcat(hello_msg, name);
	return hello_msg;
}

int prime (int num) {
	if ( num == 1 || num == 0) {
		return 0;
	}

	if ( num == 2 || num == 3) {
		return 0;
	}

	for (int i = 2; i <= num/2; i++) {
		if (num % i == 0) {
			return 0; //num is not prime
		}
	}
	return 1; //num is prime
}

char *pingpong ( char *ping) {
	return ping;
}

