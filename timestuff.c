#include "timestuff.h"

long int get_current_timezone_seconds (time_t t)
{
	struct tm tmd;
	struct tm* ptm = localtime_r(&t,&tmd);
	if (ptm)
		return ptm -> tm_gmtoff;
	else return 0x80000000;
}
