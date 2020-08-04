#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h>
static char*
asprintf_str(const char* fmt, ...)
{
	char* s;
	va_list ap;
	va_start(ap, fmt);
	int n = vasprintf(&s, fmt, ap);
	va_end(ap);
	if (n < 0)
		return NULL;
	return s;
}
int main()
{
	printf("%x, %x\n", 6, -6);
}

