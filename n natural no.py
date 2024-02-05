# Input from the user
n = int(input("Enter a positive integer (n): "))
if n <= 0:
print("Please enter a positive integer.")
else:
# Calculate the sum of the first n natural numbers
sum_of_numbers = (n * (n + 1)) // 2
# Calculate the average of the first n natural numbers
average = sum_of_numbers / n
print(f"The sum of the first {n} natural numbers is: {sum_of_numbers}")
print(f"The average of the first {n} natural numbers is: {average:.2f}")
