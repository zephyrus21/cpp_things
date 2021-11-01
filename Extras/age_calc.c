#include <stdio.h>

void calc_age(int cur_date, int cur_month, int cur_year, int birth_date, int birth_month, int birth_year) {
  int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (cur_year % 4 == 0)
    month[1] = 29;

  if (cur_date < birth_date) {
    cur_date = cur_date + month[cur_month - 1];
    cur_month = cur_month - 1;
  }

  if (cur_month < birth_month) {
    cur_year = cur_year - 1;
    cur_month = cur_month + 12;
  }

  int calc_date = cur_date - birth_date;
  int calc_month = cur_month - birth_month;
  int calc_year = cur_year - birth_year;

  printf("%d years, %d months, and %d days old.", calc_year, calc_month, calc_date);
}

int main() {
  int cur_date, cur_month, cur_year, birth_date, birth_month, birth_year;

  printf("Enter your birth date (dd mm yyyy): ");
  scanf("%d %d %d", &birth_date, &birth_month, &birth_year);

  printf("Enter current date (dd mm yyyy): ");
  scanf("%d %d %d", &cur_date, &cur_month, &cur_year);

  calc_age(cur_date, cur_month, cur_year, birth_date, birth_month, birth_year);

  return 0;
}