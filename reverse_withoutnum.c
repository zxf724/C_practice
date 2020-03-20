/*
 * 指针实现自负反转，编写函数 reverse_string。
 *  */
#include <stdio.h>
#include <stdint.h>

#define LEN 100

void reverse_string(char *src);

void main(void) {
	char src[LEN] = "0a1b2c3d4e5f6g7";
	printf("%s\n", src);

	reverse_string(src);
	printf("%s\n", src);
}

void reverse_string(char* src) {
  char *p = src;
  uint8_t len = 0; 
    
  while(*p != 0) {   // get len
  	len++;
  	p++;
  }
  printf("%d\n", len);

  char c;	  		// reverse
  uint8_t i=0,j=0;
  while(i<=len/2-1) {
	c = *(src+i);
	*(src+i) = *(src+len-i-1);
	*(src+len-i-1) = c;
	i++;  	
  }
  for(i=0,j=0;i<=len;i++) {
  	if((*(src+i) <'0') || (*(src+i) > '9')) {
  		*(src+j) = *(src+i);
  		j++;
  	}
  }
	*(src+j) = '\0';
}

