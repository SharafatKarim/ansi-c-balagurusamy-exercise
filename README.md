# ANSI C (E. Balagurusamy)
Excersise solutions for the book "ANSI C" by E. Balagurusamy (eight edition). 

# Index
- [Chapter 2](#chapter-2) 

- [Chapter 3](#chapter-3) 

- [Chapter 4](#chapter-4) 

- [Chapter 5](#chapter-5) 

- [Chapter 6](#chapter-6) 

- [Chapter 7](#chapter-7) 

- [Chapter 8](#chapter-8) 

- [Chapter 9](#chapter-9) 

- [Chapter 10](#chapter-10) 

- [Chapter 11](#chapter-11) 

- [Chapter 12](#chapter-12) 

- [Chapter 13](#chapter-13) 

- [Chapter 14](#chapter-14) 

- [Chapter 15](#chapter-15) 

---
## Chapter 2 

1. Write a program to display the equation of a line in the form ax + by = c
for a = 5, b = 8 and c = 18.

2. Write a C program that uses an in-built function to draw a 3D bar.

3. Write a program to output the following multiplication table

4. Given the values of three variables a, b and c, write a program to compute and display the value of x,
where x = a / ( b - c ) 
Execute your program for the following values:
(a) a = 250, b = 85, c = 25
(b) a = 300, b = 70, c = 70
Comment on the output in each case.

5. Write a C program that reads the value of distance travelled by a car and the time taken for the same.
Next, compute the speed at which the car travelled.

6. Write a C program to print the current system date.

7. Given two integers 20 and 10, write a program that uses a function add( ) to add these two numbers
and sub( ) to find the difference of these two numbers and then display the sum and difference in
the following form:
20 + 10 = 30
20 – 10 = 10

8. Modify the above program to provide border lines to the address.

9. Write a program using one print statement to print the pattern of asterisks as shown below:

*
        *  *
        *  *  *
        *  *  *  *
        
10. Write a program that will print the following figure using suitable characters.

11. Area of a triangle is given by the formula
         A = sqrt(s*(s-a)*(S-b)*(s-c))
Where a, b and c are sides of the triangle and 2S = a + b + c. Write a program to compute the area of
the triangle given the values of a, b and c.

12. Write a program to display the following simple arithmetic calculator
       x=                  y=
       sum                 Difference=
       Product=            Division=

13. Distance between two points (x 1, y 1) and (x 2, y 2) is governed by the formula
D2 = (x 2 – x 1)2 + (y 2 – y 1)2
Write a program to compute D given the coordinates of the points.

14. A point on the circumference of a circle whose center is (o, o) is (4,5). Write a program to compute
perimeter and area of the circle. (Hint: use the formula given in the Ex. 2.11)

15. The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is the diameter of
the circle. Write a program to compute the area of the circle.











## Chapter 3 

1. Write a program to determine and print the sum of the following harmonic series for a given value of n:
                        1+ 1/2 +1/3 +....+ 1/n
The value of n should be given interactively through the terminal.

2. The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values
from the user and display the prices as follows:
      *** LIST OF ITEMS***
      Item          Price
      Rich          Rs 16.75
      Sugar         Rs 15.00

3. Write program to count and print the number of negative and positive numbers in a given set of numbers.
Test your program with a suitable set of numbers. Use scanf to read the numbers. Readingshould be 
terminated when the value 0 is
encountered.

4. Write a program to do the following:
(a) Declare x and y as integer variables and z as a short integer variable.
(b) Assign two 6 digit numbers to x and y
(c) Assign the sum of x and y to z
(d) Output the values of x, y and z
Comment on the output.

5. Write a program to illustrate the use of typedef declaration in a program.

6. Write a program to illustrate the use of symbolicconstants in a real-life application.

7. Write a C program to input an integer and print its table.

8. Write a C program to print the square of a number.

9. Write a C program to input an integer between 0 and 128 and print its ASCII character.

10. Write a C program to input the value of days and convert it into years, weeks and days.

11. Write a C program to input the distance travelled by a car and the fuel consumed. Next,
compute the mileage of the car.

12. Write a C program to input the amount value and break it into the smallest possible 
Indian currency notes.







## Chapter 4 

1. Write a program that reads a floating-point number and then displays the right-most digit of the integral
part of the number.

2. Modify the above program to display the two right most digits of the integral part of the number.

3. Given an integer number, write a program that displays the number as follows:
First line                : all digits
Second line               : all except first digit
Third line                : all except first two digits
.........
Last line                 : The last digit
For example, the number 5678 will be displayed as
              5 6 7 8
              6 7 8
              7 8 
              8
              
4. The straight-line method of computing the yearly depreciation of the value of an item is given by
                  Depreciation = (Purchase Price - Salvage Value) / Years of Service
Write a program to determine the salvage value of an item when the purchase price, years of service,
and the annual depreciation are given.

5. Write a program that will read a real number from the keyboard and print the following output in one
line:
Smallest integer                           The given                   Lergest integer
not less than                               number                     not greater than
the number                                                             the number

6. The total distance travelled by a vehicle in t seconds is given by
distance = ut + ( a t*2 ) / 2
Where u is the initial velocity (metres per second), a is the acceleration (metres per second 2 ). Write a
program to evaluate the distance travelled at regular intervals of time, given the values of u and a.
The program should provide the flexibility to the user to select his own time intervals and repeat the
calculations for different values of u and a .

7. In inventory management, the Economic Order Quantity for a single item is given by
         EOQ = sqrt((2*setup costs) / (demand rate * holding cost per unit time))
  and the optimal Time Between Orders
         TBO = sqrt ((2* setup costs) / (demand rate * holding cost per unit time))
  Write a program to compute EOQ and TBO, given demand rate (items per unit time), setup costs (per
order), and the holding cost (per item per unit time).

8. For a certain electrical circuit with an inductance L and resistance R, the damped natural
frequency is given by
            Frequency = sqrt ((1 / L*C )- (R*R / 4*C*C)
It is desired to study the variation of this frequency with C (capacitance). Write a program to calculate
the frequency for different values of C starting from 0.01 to 0.1 in steps of 0.01.

9. Write a program to read a four digit integer and print the sum of its digits.
Hint: Use / and % operators.

10. Given three values, write a program to read three values from keyboard and print out the largest of
them without using if statement.

11. Write a program to read two integer values m and n and to decide and print whether m is a multiple of n.

12. Write a program to read three values using scanf statement and print the following results:
(a) Sum of the values
(b) Average of the three values
(c) Largest of the three
(d) Smallest of the three

13. The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 100
  calls. Write a program to read customer codes and calls made and print the bill for each customer.
  
14. Write a program to print a table of sin and cos functions for the interval from 0 to 180
degrees in increments of 15 a shown here.

15. Write a program to compute the values of square roots and squares of the numbers 0 to 100 in steps
10 and print the output in a tabular form as shown below.

16. Write a program to illustrate the use of cast operator in a real life situation.

17. Write a C program to shift the given data by two bits to the left.

18. Write a C program to compute the value of the expression x=a-b/3+c*2-1.

19. Write a C program to input a date value and determine whether the entered day, month, and
year values are valid.

20. Write a C program to input the sides of a triangle and determine whether the triangle is isoceles or
not.

21. Write a C program that reads two numbers and performs their division. If the division is not
possible, then an error messgage, ‘Division not possible’ is displayed.

22. Input the value of 4 variables a, b, c and d and compute the resultant value of following
expressions:
(a + b) * (c / d)
(a + b) * c / d
a + (b * c) / d









## Chapter 5 



## Chapter 6 



## Chapter 7 

1)  Given a number, write a program using while loop
to reverse the digits of the number. For example,
the number
12345
should be written as
54321
( Hint: Use modulus operator to extract the last
digit and the integer division by 10 to get the n–1
digit number from the n digit number.)
- [sharafat](solutions/sharafat/7/1.c)

2) Write a program to compute the sum of the digits of
a given integer number.
- [sharafat](solutions/sharafat/7/2.c)

## Chapter 8 



## Chapter 9 



## Chapter 10 



## Chapter 11 



## Chapter 12 



## Chapter 13 



## Chapter 14 



## Chapter 15 



# Contribution

Feel free to contribute. We sincerely appreciate it. Multiple users can contribute to this repository by adding their solutions to the respective folders. The folder structure is as follows:
```
solutions           # Root folder
    name            # Name of the contributor
    ├── 1           # Chapter 1 solutions
    │   ├── 1.c     # Exercise 1.1 solutions
    │   ├── 2.c     # Exercise 1.2 solutions
    │   └── ...     # Other exercises
    ├── 2           # Chapter 2 solutions
    │   ├── 1.c     # Exercise 2.1 solutions
    │   ├── 2.c     # Exercise 2.2 solutions
    │   └── ...     # Other exercises
    └── ...         # Other chapters
``` 
