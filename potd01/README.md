The Problem
You will be writing a program that outputs the amount of time that has passed since Epoch. (Googling Epoch may help)

Write a program that prints out the time that has passed since the Epoch in 1) hours, 2) days, and 3) years, (ignoring leap years, so each year is 365 days) each on a separate line. Integer division is acceptable.

To do this, you will write three functions: int hours(time_t t), int days(time_t t), and int years(time_t t). These functions all take the time since the epoch as input.

The time_t type is used to hold the number of seconds since the epoch; its actual type (int, long, etc.) depends on your system and compiler. You can read more about it here on cppreference.com.

In the provided code, you will find a variable that contains the seconds since epoch called sec_since_epoch.

Testing Your Code
Run the following commands to compile and execute your code:

make
./main
Sample Output
Hours: 412655
Days: 17193
Years: 47

