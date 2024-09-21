#include <stdio.h>

int main(int argc, char** argv) {
  int* a = new int[10];
  a[5] = 1;
  if (a[0]) {
	  printf("xx\n");
  } 
  return 0;
}
