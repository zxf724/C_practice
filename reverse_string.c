/*
 * 指针实现自负反转，编写函数 reverse_string。
 *  */
#include <stdio.h>
#include <stdint.h>

#define LEN 100

void main(void) {
	char src[LEN] = "abcdef";
	printf("%s\n", src);

	reverse_string(src);
	printf("%s\n", src);
}

reverse_string(char* src) {
  char *p = src;
  uint8_t len = 0; 
    
  while(*p != 0) {   // get len
  	len++;
  	p++;
  }
  printf("%d\n", len);

  char c;	  		// reverse
  uint8_t i=0;
  while(i<=len/2-1) {
	c = *(p+i);
	*(p+i) = *(p+len-i-1);
	*(p+len-i-1) = c;
	i++;  	
  }
}

