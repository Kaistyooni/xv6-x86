#include "types.h"
#include "user.h"
#include "date.h"

/* 
    struct rtcdate {
    uint second;
    uint minute;
    uint hour;
    uint day;
    uint month;
    uint year;
    };
 */

int
main(int argc, char *argv[])
{
  struct rtcdate r;

  if (date(&r)) {
    printf(2, "date failed\n");
    exit();
  }
  // your code to print the time in any format you like...

    printf(1, "%d년 %d월 %d일 %d시 %d분 %d초 UTC\n", r.year, r.month, r.day, r.hour, r.minute, r.second);


  exit();
}
