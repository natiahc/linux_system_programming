// Write system calls

#include <unistd.h>
#include <string.h>

void main()
{
  size_t len;
  int msg_len = 0;
  char buf[100];

  strncpy(buf, "This is writing to creen using system call instead of printing call\n", 99);
  msg_len = strlen(buf);

  len = write(1, buf, msg_len);
}
