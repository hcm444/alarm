#include <stdio.h>

#include <time.h>

void showTime(int choice) {
  switch (choice) {
  case 0:
    printf("\n\t _ ");
    printf("\n\t| |");
    printf("\n\t|_|");
    break;
  case 1:
    printf("\n\t  ");
    printf("\n\t |");
    printf("\n\t |");
    break;
  case 2:
    printf("\n\t _ ");
    printf("\n\t _|");
    printf("\n\t|_ ");
    break;
  case 3:
    printf("\n\t _ ");
    printf("\n\t _|");
    printf("\n\t _|");
    break;
  case 4:
    printf("\n\t   ");
    printf("\n\t|_|");
    printf("\n\t  |");
    break;
  case 5:
    printf("\n\t _ ");
    printf("\n\t|_ ");
    printf("\n\t _|");
    break;
  case 6:
    printf("\n\t _ ");
    printf("\n\t|_ ");
    printf("\n\t|_|");
    break;
  case 7:
    printf("\n\t _ ");
    printf("\n\t  |");
    printf("\n\t  |");
    break;
  case 8:
    printf("\n\t _ ");
    printf("\n\t|_|");
    printf("\n\t|_|");
    break;
  case 9:
    printf("\n\t _ ");
    printf("\n\t|_|");
    printf("\n\t _|");
    break;
  }
  return;

}
int main() {
  time_t s, val = 1;
  struct tm * current_time;

  s = time(NULL);

  current_time = localtime( & s);

  int hour = current_time - > tm_hour;
  int minute = current_time - > tm_min;
  int second = current_time - > tm_sec;
  showTime(hour / 10);
  showTime(hour % 10);
  printf("\n\t.");
  printf("\n\t.");
  showTime(minute / 10);
  showTime(minute % 10);
  printf("\n\t.");
  printf("\n\t.");
  showTime(second / 10);
  showTime(second % 10);

  return 0;

}
