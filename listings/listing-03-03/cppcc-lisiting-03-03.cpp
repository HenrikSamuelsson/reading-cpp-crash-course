int main() {
 ClockOfTheLongNow clock;
 ClockOfTheLongNow* clock_ptr = &clock;
 clock_ptr->set_year(2020);
 printf("Address of clock: %p\n", clock_ptr);
 printf("Value of clock's year: %d", clock_ptr->get_year());
}