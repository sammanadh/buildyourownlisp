#include <stdio.h>

// creating a stucture
typedef struct {
	float x;
	float y;
} point;


int main(int argc, char** argv) {
	point newPoint;
	newPoint.x = 0.4;
	newPoint.y = 4.3;
	//puts("%d", newPoint.x);
	printf("%f\n", newPoint.x);

	for(int i = 0; i < 5; i++) {
		puts("Hello World");
	}
}

int add_together(int a, int b) {
	return a + b;
}

