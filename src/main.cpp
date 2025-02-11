#include <stdio.h>
#include <stdlib.h>

#include "timer.h"

int
main (int argc, char* argv[])
{
  timer timer;
  timer.start();

  int seconds = 0;

  for (int i = 0; i < 5; i++)
    {
      timer.sleep(timer::FREQUENCY_HZ);

      ++seconds;
    }
  return 0;
}
