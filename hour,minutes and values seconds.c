#include <stdio.h>
// Structure to represent time
struct Time {
int hours;
int minutes;
int seconds;
};
// Function to display time
void displayTime(struct Time t) {
printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}
// Function to add two times
struct Time addTimes(struct Time t1, struct Time t2) {
struct Time result;

// Add seconds
result.seconds = t1.seconds + t2.seconds;
// Handle carry to minutes
result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
result.seconds %= 60;
// Handle carry to hours
result.hours = t1.hours + t2.hours + result.minutes / 60;
result.minutes %= 60;
return result;
}
// Function to subtract two times
struct Time subtractTimes(struct Time t1, struct Time t2) {
struct Time result;
// Convert everything to seconds
int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
// Perform subtraction
int diffSeconds = totalSeconds1 - totalSeconds2;
// Handle negative results
if (diffSeconds < 0) {
diffSeconds = -diffSeconds;
result.hours = diffSeconds / 3600;
diffSeconds %= 3600;
result.minutes = diffSeconds / 60;
result.seconds = diffSeconds % 60;
} else {
result.hours = diffSeconds / 3600;
diffSeconds %= 3600;
result.minutes = diffSeconds / 60;
result.seconds = diffSeconds % 60;
}
return result;
}
int main() {
struct Time time1, time2, sum, difference;
// Input for the first time
printf("Enter first time (hh:mm:ss): ");

scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
// Input for the second time
printf("Enter second time (hh:mm:ss): ");
scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
// Display the entered times
printf("\nEntered times:\n");
printf("Time 1: ");
displayTime(time1);
printf("Time 2: ");
displayTime(time2);
// Add and display the times
sum = addTimes(time1, time2);
printf("\nSum of times:\n");
displayTime(sum);
// Subtract and display the times
difference = subtractTimes(time1, time2);
printf("\nDifference of times:\n");
displayTime(difference);
return 0;
}
