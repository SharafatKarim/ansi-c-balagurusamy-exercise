# ANSI C (E. Balagurusamy)
Excersise solutions for the book "Programming in ANSI C" by E. Balagurusamy (eight edition). 
<!-- badges -->

![](https://img.shields.io/bower/l/bootstrap)
[![readme_gen.py - readme building](https://github.com/SharafatKarim/ansi-c-balagurusamy-exercise/actions/workflows/action.yml/badge.svg)](https://github.com/SharafatKarim/ansi-c-balagurusamy-exercise/actions/workflows/action.yml)
![](https://img.shields.io/github/forks/SharafatKarim/ansi-c-balagurusamy-exercise?style=social)
![](https://img.shields.io/github/contributors/SharafatKarim/ansi-c-balagurusamy-exercise)

<!-- tip -->
> **Tip:** To quickly access the exercise, click on the exercise number in the table of contents below.
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

1. Write a program to display the equation of a line in the form `ax + by = c` 
for `a = 5, b = 8 and c = 18`.
- [monir](solutions/monir/2/1.c)
- [rusni](solutions/rusni/2/1.c)

2. Write a C program that uses an in-built function to draw a 3D bar.

3. Write a program to output the following multiplication table
```
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```
- [monir](solutions/monir/2/3.c)
- [rusni](solutions/rusni/2/3.c)

4. Given the values of three variables a, b and c, write a program to compute and display the value of x,
where `x = a / ( b - c )` 
Execute your program for the following values:
```
(a) a = 250, b = 85, c = 25
(b) a = 300, b = 70, c = 70
```
Comment on the output in each case.
- [monir](solutions/monir/2/4.c)
- [rusni](solutions/rusni/2/4.c)

5. Write a C program that reads the value of distance travelled by a car and the time taken for the same.
Next, compute the speed at which the car travelled.
- [monir](solutions/monir/2/5.c)
- [rusni](solutions/rusni/2/5.c)

6. Write a C program to print the current system date.
- [monir](solutions/monir/2/6.c)

7. Given two integers 20 and 10, write a program that uses a function add( ) to add these two numbers
and sub( ) to find the difference of these two numbers and then display the sum and difference in
the following form:
```
20 + 10 = 30
20 – 10 = 10
```
- [monir](solutions/monir/2/7.c)

8. Modify the above program to provide border lines to the address.

9. Write a program using one print statement to print the pattern of asterisks as shown below:
```
        *
        *  *
        *  *  *
        *  *  *  * 
```
- [monir](solutions/monir/2/9.c)

10. Write a program that will print the following figure using suitable characters.
```
        ---------              ---------
        |       |              |       |
        |       |    ----->    |       |
        |       |              |       |
        ---------              ---------
```

11. Area of a triangle is given by the formula
```
         A = sqrt(s*(s-a)*(S-b)*(s-c))
```
Where a, b and c are sides of the triangle and `2S = a + b + c`. Write a program to compute the area of
the triangle given the values of a, b and c.
- [monir](solutions/monir/2/11.c)

12. Write a program to display the following simple arithmetic calculator
```
       x=                  y=
       sum                 Difference=
       Product=            Division=
```

13. Distance between two points (x 1, y 1) and (x 2, y 2) is governed by the formula
```
D2 = ( x2 – x1 )^2 + ( y2 – y1 )^2
```
Write a program to compute D given the coordinates of the points.
- [monir](solutions/monir/2/13.c)

14. A point on the circumference of a circle whose center is (o, o) is (4,5). Write a program to compute
perimeter and area of the circle. 
`(Hint: use the formula given in the Ex. 2.11)`
- [monir](solutions/monir/2/14.c)

15. The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is the diameter of
the circle. Write a program to compute the area of the circle.
- [monir](solutions/monir/2/15.c)

## Chapter 3 

1. Write a program to determine and print the sum of the following harmonic series for a given value of n:
```
1+ 1/2 +1/3 +....+ 1/n
```
The value of n should be given interactively through the terminal.
- [monir](solutions/monir/3/1.c)

2. The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values
from the user and display the prices as follows:
```
      *** LIST OF ITEMS***
      Item          Price
      Rich          Rs 16.75
      Sugar         Rs 15.00
```
- [monir](solutions/monir/3/2.c)

3. Write program to count and print the number of negative and positive numbers in a given set of numbers.
Test your program with a suitable set of numbers. Use scanf to read the numbers. Readingshould be 
terminated when the value 0 is
encountered.
- [monir](solutions/monir/3/3.c)

4. Write a program to do the following:
```
(a) Declare x and y as integer variables and z as a short integer variable.
(b) Assign two 6 digit numbers to x and y
(c) Assign the sum of x and y to z
(d) Output the values of x, y and z
```
Comment on the output.
- [monir](solutions/monir/3/4.c)

5. Write a program to illustrate the use of typedef declaration in a program.
- [monir](solutions/monir/3/5.c)

6. Write a program to illustrate the use of symbolicconstants in a real-life application.
- [monir](solutions/monir/3/6.c)

7. Write a C program to input an integer and print its table.
- [monir](solutions/monir/3/7.c)

8. Write a C program to print the square of a number.
- [monir](solutions/monir/3/8.c)

9. Write a C program to input an integer between 0 and 128 and print its ASCII character.
- [monir](solutions/monir/3/9.c)

10. Write a C program to input the value of days and convert it into years, weeks and days.
- [monir](solutions/monir/3/10.c)

11. Write a C program to input the distance travelled by a car and the fuel consumed. Next,
compute the mileage of the car.
- [monir](solutions/monir/3/11.c)

12. Write a C program to input the amount value and break it into the smallest possible 
Indian currency notes.
- [monir](solutions/monir/3/12.c)

## Chapter 4 

1. Write a program that reads a floating-point number and then displays the right-most digit of the integral
part of the number.
- [sharafat](solutions/sharafat/4/1.c)
- [sadman](solutions/sadman/4/1.c)

2. Modify the above program to display the two right most digits of the integral part of the number.
- [sharafat](solutions/sharafat/4/2.c)
- [sadman](solutions/sadman/4/2.c)

3. Given an integer number, write a program that displays the number as follows:
```
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
```
- [sharafat](solutions/sharafat/4/3.c)
- [sadman](solutions/sadman/4/3.c)

4. The straight-line method of computing the yearly depreciation of the value of an item is given by
```
  Depreciation = (Purchase Price - Salvage Value) / Years of Service
```
Write a program to determine the salvage value of an item when the purchase price, years of service,
and the annual depreciation are given.
- [sharafat](solutions/sharafat/4/4.c)
- [sadman](solutions/sadman/4/4.c)

5. Write a program that will read a real number from the keyboard and print the following output in one
line:
```
Smallest integer            The given               Lergest integer
not less than                number                 not greater than
the number                                          the number
```
- [sharafat](solutions/sharafat/4/5.c)
- [sadman](solutions/sadman/4/5.c)

6. The total distance travelled by a vehicle in t seconds is given by
```
distance = ut + ( a t*2 ) / 2
```
> Where u is the initial velocity (metres per second), a is the acceleration (metres per second 2 ). Write a
program to evaluate the distance travelled at regular intervals of time, given the values of u and a.
> The program should provide the flexibility to the user to select his own time intervals and repeat the
calculations for different values of u and a .
- [sharafat](solutions/sharafat/4/6.c)
- [sadman](solutions/sadman/4/6.c)

7. In inventory management, the Economic Order Quantity for a single item is given by
```
EOQ = sqrt((2*setup costs) / (demand rate * holding cost per unit time))
```
and the optimal Time Between Orders
```
TBO = sqrt ((2* setup costs) / (demand rate * holding cost per unit time))
```
Write a program to compute EOQ and TBO, given demand rate (items per unit time), setup costs (per
order), and the holding cost (per item per unit time).
- [sharafat](solutions/sharafat/4/7.c)
- [sadman](solutions/sadman/4/7.c)

8. For a certain electrical circuit with an inductance L and resistance R, the damped natural
frequency is given by
```
Frequency = sqrt ((1 / L*C )- (R*R / 4*C*C)
```
It is desired to study the variation of this frequency with C (capacitance). Write a program to calculate
the frequency for different values of C starting from 0.01 to 0.1 in steps of 0.01.
- [sharafat](solutions/sharafat/4/8.c)
- [sadman](solutions/sadman/4/8.c)

9. Write a program to read a four digit integer and print the sum of its digits.
Hint: Use / and % operators.
- [sharafat](solutions/sharafat/4/9.c)
- [sadman](solutions/sadman/4/9.c)

10. Given three values, write a program to read three values from keyboard and print out the largest of
them without using if statement.
- [sharafat](solutions/sharafat/4/10.c)
- [sadman](solutions/sadman/4/10.c)

11. Write a program to read two integer values m and n and to decide and print whether m is a multiple of n.
- [sharafat](solutions/sharafat/4/11.c)
- [sadman](solutions/sadman/4/11.c)

12. Write a program to read three values using scanf statement and print the following results:
```
(a) Sum of the values
(b) Average of the three values
(c) Largest of the three
(d) Smallest of the three
```
- [sharafat](solutions/sharafat/4/12.c)
- [sadman](solutions/sadman/4/12.c)

13. The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 100
  calls. Write a program to read customer codes and calls made and print the bill for each customer.
- [sharafat](solutions/sharafat/4/13.c)
- [sadman](solutions/sadman/4/13.c)

14. Write a program to print a table of sin and cos functions for the interval from 0 to 180
degrees in increments of 15 a shown here.
>
| x (degrees) | sin(x) | cos(x) |
| ----------- | ------ | ------ |
| 0           | ...    | ...    |
| ...         | ...    | ...    |
| ...         | ...    | ...    |
| 180         | ...    | ...    |
- [sharafat](solutions/sharafat/4/14.c)
- [sadman](solutions/sadman/4/14.c)

15.  Write a program to compute the values of square roots and squares of the numbers 0 to 100 in steps
10 and print the output in a tabular form as shown below.
>
| Number | Square Root | Square |
| ------ | ----------- | ------ |
| 0      | 0           | 0      |
| 100    | 10          | 10000  |
- [sharafat](solutions/sharafat/4/15.c)
- [sadman](solutions/sadman/4/15.c)

16.   Write a program to illustrate the use of cast operator in a real life situation.
- [sharafat](solutions/sharafat/4/16.c)
- [sadman](solutions/sadman/4/16.c)

17.   Write a C program to shift the given data by two bits to the left.
- [sharafat](solutions/sharafat/4/17.c)
- [sadman](solutions/sadman/4/17.c)

18.   Write a C program to compute the value of the expression `x=a-b/3+c*2-1`.
- [sharafat](solutions/sharafat/4/18.c)
- [sadman](solutions/sadman/4/18.c)

19.   Write a C program to input a date value and determine whether the entered day, month, and
year values are valid.
- [sharafat](solutions/sharafat/4/19.c)
- [sadman](solutions/sadman/4/19.c)

20.   Write a C program to input the sides of a triangle and determine whether the triangle is isoceles or
not.
- [sharafat](solutions/sharafat/4/20.c)
- [sadman](solutions/sadman/4/20.c)

21.   Write a C program that reads two numbers and performs their division. If the division is not
possible, then an error messgage, ‘Division not possible’ is displayed.
- [sharafat](solutions/sharafat/4/21.c)
- [sadman](solutions/sadman/4/21.c)

22.   Input the value of 4 variables a, b, c and d and compute the resultant value of following
expressions:
```
(a + b) * (c / d)
(a + b) * c / d
a + (b * c) / d
```
- [sharafat](solutions/sharafat/4/22.c)
- [sadman](solutions/sadman/4/22.c)

## Chapter 5 

1. Given the string “WORDPROCESSING”, write a program to read the string from the terminal and
display the same in the following formats:
```
(a) WORD PROCESSING
(b) WORD
PROCESSING
(c) W.P.
```
- [sharafat](solutions/sharafat/5/1.c)
- [NAYEMA](solutions/NAYEMA/5/1.c)
- [sadman](solutions/sadman/5/1.c)

2. Write a program to read the values of x and y and
print the results of the following expressions in one
line:
```
(a) (x+y) / (x-y)
(b) (x+y) /2
(c) (x+y)(x–y)
```
- [sharafat](solutions/sharafat/5/2.c)
- [NAYEMA](solutions/NAYEMA/5/2.c)
- [sadman](solutions/sadman/5/2.c)

3. Write a program to read the following numbers, round them off to the nearest integers and print out
the results in integer form: 35.7 50.21 – 23.73 – 46.45
- [sharafat](solutions/sharafat/5/3.c)
- [NAYEMA](solutions/NAYEMA/5/3.c)
- [sadman](solutions/sadman/5/3.c)

4. Write a program that reads 4 floating point values in the range, 0.0 to 20.0, and prints a horizontal bar
chart to represent these values using the character * as the fill character. For the purpose of the chart,
the values may be rounded off to the nearest integer. For example, the value 4.36 should be
represented as follows.
```
            *      *     *        *
            *      *     *        *         4.36
            *      *     *        *
```
> Note that the actual values are shown at the end of each bar.
- [sharafat](solutions/sharafat/5/4.c)
- [NAYEMA](solutions/NAYEMA/5/4.c)
- [sadman](solutions/sadman/5/4.c)

5. Write an interactive program to demonstrate the process of multiplication. The program should ask
the user to enter two two-digit integers and print the product of integers as shown below.
```
                      45
                  x   37
    ________________________
     7 x 45 is       315
     3 x 45 is       135
     ______________________
     Add them       1665
            _______________
```
- [sharafat](solutions/sharafat/5/5.c)
- [NAYEMA](solutions/NAYEMA/5/5.c)
- [sadman](solutions/sadman/5/5.c)

6. Write a program to read three integers from the keyboard using one scanf statement and output
them on one line using:
```
(a) three printf statements,
(b) only one printf with conversion specifiers, and
(c) only one printf without conversion specifiers.
```
- [sharafat](solutions/sharafat/5/6.c)
- [NAYEMA](solutions/NAYEMA/5/6.c)
- [sadman](solutions/sadman/5/6.c)

7. Write a program that prints the value 10.45678 in exponential format with the following specifications:
```
(a) correct to two decimal places;
(b) correct to four decimal places; and
(c) correct to eight decimal places.
```
- [sharafat](solutions/sharafat/5/7.c)
- [NAYEMA](solutions/NAYEMA/5/7.c)
- [sadman](solutions/sadman/5/7.c)

8. Write a program to print the value 345.6789 in fixed-point format with the following specifications:
```
(a) correct to two decimal places;
(b) correct to five decimal places; and
(c) correct to zero decimal places.
```
- [sharafat](solutions/sharafat/5/8.c)
- [NAYEMA](solutions/NAYEMA/5/8.c)
- [sadman](solutions/sadman/5/8.c)

9. Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf statement and
to display the same in the following format using the printf statement.
```
(a) ANIL K. GUPTA
(b) A.K. GUPTA
(c) GUPTA A.K.
```
- [sharafat](solutions/sharafat/5/9.c)
- [NAYEMA](solutions/NAYEMA/5/9.c)
- [sadman](solutions/sadman/5/9.c)

10. Write a program to read and display the following table of data.
```
          Name            Code             Price
          Fan             67831            1234.50
          Motor           450              5786.70
```
> The name and code must be left-justified and price must be right justified.
- [sharafat](solutions/sharafat/5/10.c)
- [NAYEMA](solutions/NAYEMA/5/10.c)
- [sadman](solutions/sadman/5/10.c)

11. Write a C program to print inventory stock report using some sample data. The report should show
item code, quantity and inventory location as formatted output.
- [sharafat](solutions/sharafat/5/11.c)
- [NAYEMA](solutions/NAYEMA/5/11.c)
- [sadman](solutions/sadman/5/11.c)

12. Write a C program to display the Pascal’s triangle.
- [sharafat](solutions/sharafat/5/12.c)
- [NAYEMA](solutions/NAYEMA/5/12.c)
- [sadman](solutions/sadman/5/12.c)

13. Write a C program to input a currency value in Dollars and display its equivalent Euro and
INR amounts. You may use current exchange rate for conversion purpose.
- [sharafat](solutions/sharafat/5/13.c)
- [NAYEMA](solutions/NAYEMA/5/13.c)
- [sadman](solutions/sadman/5/13.c)

14. Write a C program to display the following pattern.
```
            5 4 3 2 1
              4 3 2 1
                3 2 1
                  2 1
                    1
```
- [NAYEMA](solutions/NAYEMA/5/14.c)
- [sadman](solutions/sadman/5/14.c)

15. Write a C program to input an investment amount and compute its fixed deposit cumulative return
after 10 years at arate of interest of 8.75%.
- [sharafat](solutions/sharafat/5/15.c)
- [NAYEMA](solutions/NAYEMA/5/15.c)
- [sadman](solutions/sadman/5/15.c)

## Chapter 6 

1. Write a program to determine whether a given number is ‘odd’ or ‘even’ and print the message
```
NUMBER IS EVEN 
or 
NUMBER IS ODD
	(a) without using else option and
	(b) with else option.
```
- [sharafat](solutions/sharafat/6/1.c)
- [sadman](solutions/sadman/6/1.c)

2. Write a program to find the number of and sum of all integers greater than 100 and less than 200 that
are divisible by 7.
- [sharafat](solutions/sharafat/6/2.c)
- [NAYEMA](solutions/NAYEMA/6/2.c)
- [sadman](solutions/sadman/6/2.c)

3. A set of two linear equations with two unknowns x1 and x2 is given below:
```
ax 1 + bx 2 = m
cx 1 + dx 2 = n
```
The set has a unique solution
```
	x1 = (m*d - b*n) / (a*d - c*d)
	x2 = (n*a - m*c) / (a*d - c*b)
```
provided the denominator `ad – cb` is not equal to zero.
Write a program that will read the values of constants a, b, c, d, m, and n and compute the values of x 1 and x 2. An appropriate message should be printed if ad – cb = 0.
- [sharafat](solutions/sharafat/6/3.c)
- [NAYEMA](solutions/NAYEMA/6/3.c)

4. Given a list of marks ranging from 0 to 100, write a program to compute and print the number of
students:
```
(a) who have obtained more than 80 marks,
(b) who have obtained more than 60 marks,
(c) who have obtained more than 40 marks,
(d) who have obtained 40 or less marks,
(e) in the range 81 to 100,
(f) in the range 61 to 80,
(g) in the range 41 to 60, and
(h) in the range 0 to 40.
```
The program should use a minimum number of if statements.
- [sharafat](solutions/sharafat/6/4.c)
- [NAYEMA](solutions/NAYEMA/6/4.c)
- [sadman](solutions/sadman/6/4.c)

5. Admission to a professional course is subject to the following conditions:
```
(a) Marks in Mathematics >= 60
(b) Marks in Physics >= 50
(c) Marks in Chemistry >= 40
(d) Total in all three subjects >= 200
```
or,
Total in Mathematics and Physics >= 150 Given the marks in the three subjects, write a
program to process the applications to list the eligible candidates.
- [sharafat](solutions/sharafat/6/5.c)
- [NAYEMA](solutions/NAYEMA/6/5.c)
- [sadman](solutions/sadman/6/5.c)

6. Write a program to print a two-dimensional Square Root Table as shown below, to provide the square
root of any number from 0 to 9.9. For example, the value x will give the square root of 3.2 and y the
square root of 3.9.
> Square Root Table
>
| number | 0.0 | 0.1 | 0.2 | ... | 0.9 |
|--------|-----|-----|-----|-----|-----|
| 0.0    |     |     |     |     |     |
| 0.1    |     |     |     |     |     |
| 0.2    |     |     |     |     |     |
| 0.3    |     |     |  x  |     |  y  |
| ...    |     |     |     |     |     |
| 0.9    |     |     |     |     |     |
- [sharafat](solutions/sharafat/6/6.c)
- [NAYEMA](solutions/NAYEMA/6/6.c)
- [sadman](solutions/sadman/6/6.c)

7. Shown below is a Floyd’s triangle.
```
1
2 3
4 5 6
7 8 9 10
11 .. .. .. 15
.
.
79 .. .. .. .. .. .. 91
	(a) Write a program to print this triangle.
	(b) Modify the program to produce the following form of Floyd’s triangle.
		1
		0 1
		1 0 1
		0 1 0 1
		1 0 1 0 1
```
- [sharafat](solutions/sharafat/6/7.c)
- [NAYEMA](solutions/NAYEMA/6/7.c)
- [sadman](solutions/sadman/6/7.c)

8. A cloth showroom has announced the following seasonal discounts on purchase of items:
>
| Purchase amount | Discount   |                |
|-----------------|------------|----------------|
|                 | Mill cloth | Handloom items |
| 0 - 100         | ...        | 5%             |
| 101 - 200       | 5%         | 7.5%           |
| 201 - 300       | 7.5%       | 10%            |
| Above 300       | 10%        | 15%            |
>
Write a program using switch and if statements to compute the net amount to be paid by a customer
- [sharafat](solutions/sharafat/6/8.c)
- [NAYEMA](solutions/NAYEMA/6/8.c)
- [sadman](solutions/sadman/6/8.c)

9. Write a program that will read the value of x and evaluate the following function,
```
		    1  for x>0
		y=  0  for x=0
		   -1  for x<0
```
using,
```
	(a) nested if statements,
	(b) else if statements, and
	(c) conditional operator ? :
```
- [sharafat](solutions/sharafat/6/9.c)
- [NAYEMA](solutions/NAYEMA/6/9.c)
- [sadman](solutions/sadman/6/9.c)

10. Write a program to compute the real roots of a quadratic equation
```
				ax 2 + bx + c = 0
```
The roots are given by the equations
```
		x1 = -b + sqrt ( b*b - 4*a*c) / 2*a
		x2 = -b - sqrt (b*b + 4*a*c) / 2*a
```
The program should request for the values of the
constants a, b and c and print the values of x 1 and x 2.
 Use the following rules:
```
(a) No solution, if both a and b are zero
(b) There is only one root, if a = 0 (x = –c/b)
(c) There are no real roots, if b 2 – 4 ac is negative
(d) Otherwise, there are two real roots
```
Test your program with appropriate data so that all logical paths are working as per your design.
Incorporate appropriate output messages.
- [sharafat](solutions/sharafat/6/10.c)
- [sadman](solutions/sadman/6/10.c)

11. Write a program to read three integer values from the keyboard and displays the output stating that
they are the sides of right-angled triangle.
- [sharafat](solutions/sharafat/6/11.c)
- [sadman](solutions/sadman/6/11.c)

12. An electricity board charges the following rates for the use of electricity:
```
For the first 200 units: 80 P per unit
For the next 100 units: 90 P per unit
Beyond 300 units: Rs 1.00 per unit
```
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs.400, 
then an additional surcharge of 15% of total amount is charged.
Write a program to read the names of users and number of units consumed and print out the
charges with names.
- [sharafat](solutions/sharafat/6/12.c)
- [sadman](solutions/sadman/6/12.c)

13. Write a program to compute and display the sum of all integers that are divisible by 6 but not divisible
by 4 and lie between 0 and 100. The program should also count and display the number of such
values.
- [sharafat](solutions/sharafat/6/13.c)
- [sadman](solutions/sadman/6/13.c)

14. Write an interactive program that could read a positive integer number and decide whether the
number is a prime number and display the output accordingly.
Modify the program to count all the prime numbers that lie between 100 and 200.
> NOTE : A prime number is a positive integer that is divisible only by 1 or by itself.
- [sharafat](solutions/sharafat/6/14.c)
- [sadman](solutions/sadman/6/14.c)

15. Write a program to read a double-type value x that represents angle in radians and a character-type
variable T that represents the type of trigonometric function and display the value of
```
(a) sin(x), if s or S is assigned to T,
(b) cos (x), if c or C is assigned to T, and
(c) tan (x), if t or T is assigned to T
```
using, (i) if......else statement , and (ii) switch statement.
- [sharafat](solutions/sharafat/6/15.c)
- [sadman](solutions/sadman/6/15.c)

16. Write a C program to input the numeric week day value (starting from Monday as 1) and display the
corresponding name of the week day.
- [sharafat](solutions/sharafat/6/16.c)
- [sadman](solutions/sadman/6/16.c)

17. Write a C program to input two numbers a and b and display whether
```
(a) a is greater than b
(b) b is greater than b
(c) or, a and b are equal
```
- [sharafat](solutions/sharafat/6/17.c)
- [sadman](solutions/sadman/6/17.c)

18. Write a C program to input the total percentage of marks of a student and display its Division using
below rules:
```
(a) Greater than or equal to 80 percent - “First Division”
(b) Greater than or equal to 60 percent and less than 80 per cent - “Second Division”
(c) Less than 60 percent - “Third Division"
```
- [sharafat](solutions/sharafat/6/18.c)
- [sadman](solutions/sadman/6/18.c)

19. Using Switch case block, input the name of the month from the user and display the corresponding
number of days in that month.
- [sharafat](solutions/sharafat/6/19.c)
- [sadman](solutions/sadman/6/19.c)

20. Write a C program that inputs a string and counts the number of capital and small alphabets in that
string.
- [sharafat](solutions/sharafat/6/20.c)
- [NAYEMA](solutions/NAYEMA/6/20.c)
- [sadman](solutions/sadman/6/20.c)

## Chapter 7 

1. Given a number, write a program using while loop to reverse the digits of the number. For example,
the 
```
number 
	12345 
should be written as 
	54321
```
> ( Hint: Use modulus operator to extract the last digit and the integer division by 10 to get the n–1
digit number from the n digit number.)
- [sharafat](solutions/sharafat/7/1.c)
- [sadman](solutions/sadman/7/1.c)

2. Write a program to compute the sum of the digits of a given integer number.
- [sharafat](solutions/sharafat/7/2.c)
- [sadman](solutions/sadman/7/2.c)

3. The numbers in the sequence
```
	1 1 2 3 5 8 13 21 .......
```
are called Fibonacci numbers. Write a program using a do....while loop to calculate and print the first m
Fibonacci numbers.
> ( Hint: After the first two numbers in the series, each number is the sum of the two preceding numbers.)
- [sharafat](solutions/sharafat/7/3.c)
- [sadman](solutions/sadman/7/3.c)

4. Write a program to evaluate the following investment equation
```
				V = P(1+r) n
```
and print the tables which would give the value of V for various combination of the following values 
of P, r, and n.
```
P : 1000, 2000, 3000,........, 10,000
r : 0.10, 0.11, 0.12, ......., 0.20
n : 1, 2, 3, ...., 10
```
> ( Hint: P is the principal amount and V is the value of money at the end of n years. This equation can
be recursively written as
```
	V = P(1+r)
	P = V
```
That is, the value of money at the end of first year becomes the principal amount for the next year and
so on.)
- [sharafat](solutions/sharafat/7/4.c)
- [sadman](solutions/sadman/7/4.c)

5. Write programs to print the following outputs using for loops.
```
	(a) 			(b)
        1                       * * * * * 
        2 2                       * * * *
        3 3 3                       * * *
        4 4 4 4                       * *
        5 5 5 5 5                       *
```
- [sharafat](solutions/sharafat/7/5.c)
- [sadman](solutions/sadman/7/5.c)

6. Write a program to read the age of 100 persons and count the number of persons in the age group 50 to
60. Use for and continue statements.
- [sharafat](solutions/sharafat/7/6.c)
- [sadman](solutions/sadman/7/6.c)

7. Rewrite the program of case study 7.4 (plotting of two curves) using else...if constructs instead of
continue statements.
- [sharafat](solutions/sharafat/7/7.c)
- [sadman](solutions/sadman/7/7.c)

8. Write a program to print a table of values of the function
```
y = exp (-x)
```
for x varying from 0.0 to 10.0 in steps of 0.10. The table should appear as follows:
> Table for Y = EXP(–X)
>
| X | 0.1 | 0.2 | 0.3 | ... | 0.9 |
|---|-----|-----|-----|-----|-----|
|0.0|	  |     |     |     |     |
|1.0|	  |     |     |     |     |
|2.0|	  |     |     |     |     |
|3.0|	  |     |     |     |     |
| . |	  |     |     |     |     |
| . |	  |     |     |     |     |
| . |	  |     |     |     |     |
|9.0|	  |     |     |     |     |
- [sharafat](solutions/sharafat/7/8.c)
- [sadman](solutions/sadman/7/8.c)

9. Write a program using for and if statement to display the capital letter S in a grid of 15 rows and
18 columns as shown below.
```
******************
**--------------**
*********-------**
****
****
****
*****---------****
--------------****
--------------****
--------------****
--------------****
--------------****
--------------****
****----------****
***-----------****
**------------****
```
- [sharafat](solutions/sharafat/7/9.c)
- [sadman](solutions/sadman/7/9.c)

10. Write a program to compute the value of Euler’s number e, that is used as the base of natural
logarithms. Use the following formula.
```
		e = 1 + 1/1! + 1 /2! + 1 /3! + . . . . . + 1/n!
```
Use a suitable loop construct. The loop must terminate when the difference between two
successive values of e is less than 0.00001.
- [sharafat](solutions/sharafat/7/10.c)
- [sadman](solutions/sadman/7/10.c)

11. Write programs to evaluate the following functions to 0.0001% accuracy.
```
(a) sinx = x – x 3 /3! + x 5 /5! – x 7 /7! + . . . . . .
(b) cosx = 1 – x 2 /2! + x 4 /4! – x 6 /6! + . . . . .
(c) SUM = 1 + (1/2) 2 + (1/3) 3 + (1/4) 4 + … …
```
- [sharafat](solutions/sharafat/7/11.c)
- [sadman](solutions/sadman/7/11.c)

12. The present value (popularly known as book value) of an item is given by the relationship.
```
				P = pow( (c*(1–d)),n)
	where
		   c= original cost
		   d= rate of depreciation (per year)
		   n= number of years
		   p= present value after y years.
```
If P is considered the scrap value at the end of useful life of the item, write a program to compute
the useful life in years given the original cost, depreciation rate, and the scrap value.
The program should request the user to input the data interactively.
- [sharafat](solutions/sharafat/7/12.c)
- [sadman](solutions/sadman/7/12.c)

13. Write a program to print a square of size 5 by using the character N as shown below:
```
	 (a)								(b)
		n n n n n 							n n n n n
		n n n n n							n       n 
 		n n n n n							n       n 
		n n n n n 							n       n
		n n n n n							n n n n n 	
```
> n is used insted of S in the above figure LOL.
- [sharafat](solutions/sharafat/7/13.c)
- [sadman](solutions/sadman/7/13.c)

14. Write a program to graph the function
```
			y = sin (x)
```
in the interval 0 to 180 degrees in steps of 15 degrees. Use the concepts discussed in the Case Study 4 in Chapter 7.
- [sharafat](solutions/sharafat/7/14.c)
- [sadman](solutions/sadman/7/14.c)

15. Modify the program of Exercise 7.16 to print the character S instead of N at the center of the square as shown below.
```
				n n n n n 							
				n n n n n						 
 				n n s n n							
				n n n n n 						
				n n n n n	
```
> n is used insted of S in the above figure LOL.
- [sharafat](solutions/sharafat/7/15.c)
- [sadman](solutions/sadman/7/15.c)

16. Given a set of 10 two-digit integers containing both positive and negative values, write a program using for loop to compute the sum of all positive values and print the sum and the number of values added.
The program should use scanf to read the values and terminate when the sum exceeds 999. Do not use goto statement.
- [sharafat](solutions/sharafat/7/16.c)
- [sadman](solutions/sadman/7/16.c)

17. Write a C program to display a coloured line.
- [sharafat](solutions/sharafat/7/17.c)
- [sadman](solutions/sadman/7/17.c)

18. Write a C program to display the following pattern.
```
            1
           A B
          2 3 4
         C D E F
        5 6 7 8 9
```
- [sharafat](solutions/sharafat/7/18.c)
- [sadman](solutions/sadman/7/18.c)

19. Write a C program to display the following pattern:
```
              1
            1 2 1
          1 2 3 2 1
            1 2 1
              1
```
- [sharafat](solutions/sharafat/7/19.c)
- [sadman](solutions/sadman/7/19.c)

20. Write a C program to display the following pattern:
```
		1
		0 1
		1 0 1
		0 1 0 1
```
- [sharafat](solutions/sharafat/7/20.c)

## Chapter 8 

1. Write a program for fitting a straight line through a set of points 
```
(xi, yi ), i = 1,....,n.
```
The straight line equation is
```
y = mx + c
```
and the values of m and c are given y the following equations:
> All summations are from 1 to n.
- [sharafat](solutions/sharafat/8/1.c)
- [sadman](solutions/sadman/8/1.c)

2. The daily maximum temperatures recorded in 10 cities during the month of January (for all 31 days) have been tabulated.
Write a program to read the table elements into a two-dimensional array temperature , and to find the city and day corresponding to
```
(a) the highest temperature and
(b) the lowest temperature.
```
- [sharafat](solutions/sharafat/8/2.c)
- [sadman](solutions/sadman/8/2.c)

3. An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate number on the ballot paper. Write a program to read the ballots and count the votes cast for each candidate using an array variable count . In case, a number read is outside the range 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the program should also count the number of spoilt ballots.
- [sharafat](solutions/sharafat/8/3.c)
- [sadman](solutions/sadman/8/3.c)

4. The following set of numbers is popularly known as Pascal’s triangle.
```
1
1  2  1
1  3  3  1
1  4  6  4  1
_   _  _  _  _  _  _  _  _
_  _  _  _  _  _   _  _  _   _  _  _				
```
If we denote rows by i and columns by j, then any element
(except the boundary elements) in the triangle is given by,
```
p ij = p i–1 ,j–1 + p i–1 ,j
```
Write a program to calculate the elements of the Pascal triangle for 10 rows and print the results.
- [sharafat](solutions/sharafat/8/4.c)
- [sadman](solutions/sadman/8/4.c)

5. The annual examination results of 100 students are tabulated as follows:
>
| Roll No. | Subject 1 | Subject 2 | Subject 3 | 
|:--------:|:---------:|:---------:|:---------:|
| .        |           |          |           |
| .        |           |          |           |
| .        |           |          |           |
>
Write a program to read the data and determine the following:
```
(a) Total marks obtained by each student.
(b) The highest marks in each subject and the Roll No. of the student who secured it.
(c) The student who obtained the highest total marks.
```
- [sharafat](solutions/sharafat/8/5.c)
- [sadman](solutions/sadman/8/5.c)

6. Given are two one-dimensional arrays A and B which are sorted in ascending order. Write a program to merge them into a single sorted array that contains every item from arrays A and B, in ascending order.
- [sharafat](solutions/sharafat/8/6.c)
- [sadman](solutions/sadman/8/6.c)

7. Two matrices that have the same number of rows and columns can be multiplied to produce a third matrix. Consider the following two matrices.
The product of A and B is a third matrix C of size n¥ n where each element of C is given by the following equation.
```
multiplied_matrix[i][j] += first_matrix[i][k] * second_matrix[k][j];
```
Write a program that will read the values of elements of A and B and produce the product matrix C.
- [sharafat](solutions/sharafat/8/7.c)
- [sadman](solutions/sadman/8/7.c)

8. Write a program that fills a five-by-five matrix as follows:
```
- Upper left triangle with +1s
- Lower right triangle with –1s
- Right to left diagonal with zeros
Display the contents of the matrix using not more than two printf statements.
```
- [sharafat](solutions/sharafat/8/8.c)
- [sadman](solutions/sadman/8/8.c)

9. Selection sort is based on the following idea: Selecting the largest array element and swapping it with the last array element leaves an unsorted list whose size is 1 less than the size of the original list. If we repeat this step again on the unsorted list we will have an ordered list of size 2 and an unordered list size n–2 . When we repeat this until the size of the unsorted list becomes one, the result will be a sorted list. Write a program to implement this algorithm.
- [sharafat](solutions/sharafat/8/9.c)
- [sadman](solutions/sadman/8/9.c)

10. Develop a program to implement the binary search algorithm. This technique compares the search key value with the value of the element that is midway in a “sorted” list. Then;
```
(a) If they match, the search is over.
(b) If the search key value is less than the middle value, then the first half of the list contains the key value.
(c) If the search key value is greater than the middle value, then the second half contains the key value.
```
Repeat this “divide-and-conquer” strategy until we have a match. If the list is reduced to one nonmatching element, then the list does not contain the key value.
Use the sorted list created in Exercise 8.9 or use any other sorted list.
- [sharafat](solutions/sharafat/8/10.c)
- [sadman](solutions/sadman/8/10.c)

11. Write a program that will compute the length of a given character string.
- [sharafat](solutions/sharafat/8/11.c)
- [sadman](solutions/sadman/8/11.c)

12. Write a program that will count the number occurrences of a specified character in a given line of text. Test your program.
- [sharafat](solutions/sharafat/8/12.c)
- [sadman](solutions/sadman/8/12.c)

13. Write a program to read a matrix of size m ¥ n and print its transpose.
- [sharafat](solutions/sharafat/8/13.c)
- [sadman](solutions/sadman/8/13.c)

14. Every book published by international publishers should carry an International Standard Book Number (ISBN). It is a 10 character 4 part number as shown below.
```
				0-07-041183-2
```
The first part denotes the region, the second represents publisher, the third identifies the book and the fourth is the check digit. The check digit is computed as follows:
```
Sum = (1 × first digit) + (2 × second digit) + (3 ×third digit) + - - - - + (9 × ninth digit).
```
Check digit is the remainder when sum is divided by 11. Write a program that reads a given ISBN number and checks whether it represents a valid ISBN.
- [sharafat](solutions/sharafat/8/14.c)
- [sadman](solutions/sadman/8/14.c)

15. Write a program to read two matrices A and B and print the following:
```
(a) A + B; and
(b) A – B.
```
- [sharafat](solutions/sharafat/8/15.c)
- [sadman](solutions/sadman/8/15.c)

16. Write a C program to compute the sum of elements of two one-dimensional arrays and store the corresponding result in another array.
- [sharafat](solutions/sharafat/8/16.c)
- [sadman](solutions/sadman/8/16.c)

17. Write a C program to identify and count all the odd numbers in an array and calculate their sum.
- [sharafat](solutions/sharafat/8/17.c)
- [sadman](solutions/sadman/8/17.c)

18. Write a C program to input an amount in Indian currency and deduce the minimum currency denomination for that amount.
- [sharafat](solutions/sharafat/8/18.c)
- [sadman](solutions/sadman/8/18.c)

19. Write a C program to input a Roman number and compute its decimal equivalent.
- [sharafat](solutions/sharafat/8/19.c)

20. Write a C program to input two NXN matrices and deduce their sum and product.
- [sharafat](solutions/sharafat/8/20.c)
- [sadman](solutions/sadman/8/20.c)

## Chapter 9 

1. Write a program, which reads your name from the keyboard and outputs a list of ASCII codes, which represent your name.
- [sharafat](solutions/sharafat/9/1.c)
- [NAYEMA](solutions/NAYEMA/9/1.c)
- [sadman](solutions/sadman/9/1.c)

2. Write a program to do the following:
```
(a) To output the question “Who is the inventor of C ?”
(b) To accept an answer.
(c) To print out “Good” and then stop, if the answer is correct.
(d) To output the message ‘try again’, if the answer is wrong.
(e) To display the correct answer when the answer is wrong even at the third attempt and stop.
```
- [sharafat](solutions/sharafat/9/2.c)
- [NAYEMA](solutions/NAYEMA/9/2.c)
- [sadman](solutions/sadman/9/2.c)

3. Write a program to extract a portion of a character string and print the extracted string. Assume that m characters are extracted, starting with the nth character.
- [sharafat](solutions/sharafat/9/3.c)
- [NAYEMA](solutions/NAYEMA/9/3.c)
- [sadman](solutions/sadman/9/3.c)

4. Write a program which will read a text and count all occurrences of a particular word.
- [sharafat](solutions/sharafat/9/4.c)
- [NAYEMA](solutions/NAYEMA/9/4.c)
- [sadman](solutions/sadman/9/4.c)

5. Write a program which will read a string and rewrite it in the alphabetical order. For example, the word STRING should be written as GINRST.
- [sharafat](solutions/sharafat/9/5.c)
- [NAYEMA](solutions/NAYEMA/9/5.c)
- [sadman](solutions/sadman/9/5.c)

6. Write a program to replace a particular word by another word in a given string. For example, the word “PASCAL” should be replaced by “C” in the text “It is good to program in PASCAL language.”
- [sharafat](solutions/sharafat/9/6.c)
- [NAYEMA](solutions/NAYEMA/9/6.c)
- [sadman](solutions/sadman/9/6.c)

7. A Maruti car dealer maintains a record of
sales of various vehicles in the following form:
```
	Vehicle types   Month of sacles     Price
	MARUTI-800        02/01             210000
	MARUTI-DX         07/01             265000
	GYPSY             04/02             315750
	MARUTI-VAN        08/02             240000
```
Write a program to read this data into a table of strings and output the details of a particular vehicle sold during a specified period. The program should request the user to input the vehicle type and the period 
(starting month, ending month).
- [sadman](solutions/sadman/9/7.c)

8. Write a program that reads a string from the keyboard and determines whether the string is a palindrome or not. (A string is a palindrome if it can be read from left and right with the same meaning. For example, Madam and Anna are palindrome strings. Ignore capitalization).
- [sharafat](solutions/sharafat/9/8.c)
- [sadman](solutions/sadman/9/8.c)

9. Write program that reads the cost of an item in the form RRRR.PP (Where RRRR denotes Rupees and PP denotes Paise) and converts the value to a string of words that expresses the numeric value in words.
For example, if we input 125.75, the output should be “ONE HUNDRED TWENTY FIVE AND PAISE SEVENTY FIVE”.
- [sharafat](solutions/sharafat/9/9.c)

10. Develop a program that will read and store the details of a list of students in the format
```
    Roll No      Name           Marks obtained
    ........     ......         .........
    ........     ......         .........
    ........     ......         .........
```
and produce the following output list:
```
	(a) Alphabetical list of names, roll numbers and marks obtained.
	(b) List sorted on roll numbers.
	(c) List sorted on marks (rank-wise list)
```
- [sharafat](solutions/sharafat/9/10.c)
- [sadman](solutions/sadman/9/10.c)

11. Write a program to read two strings and compare them using the function strncmp( ) and print a message that the first string is equal, less, or
greater than the second one.
- [sharafat](solutions/sharafat/9/11.c)
- [sadman](solutions/sadman/9/11.c)

12. Write a program to read a line of text from the keyboard and print out the number of occurrences of a given substring using the function strstr ( ).
- [sharafat](solutions/sharafat/9/12.c)
- [sadman](solutions/sadman/9/12.c)

13. Write a program that will copy m consecutive characters from a string s1 beginning at position n into another string s2.
- [sharafat](solutions/sharafat/9/13.c)
- [sadman](solutions/sadman/9/13.c)

14. Write a program to create a directory of students with roll numbers. The program should display the roll number for a specified name and vice-versa.
- [sharafat](solutions/sharafat/9/14.c)
- [sadman](solutions/sadman/9/14.c)

15. Given a string
```
	char str [ ] = “123456789” ;
```
Write a program that displays the following:
```
              1
            2 3 2
          3 4 5 4 3
        4 5 6 7 6 5 4
      5 6 7 8 9 8 7 6 5
```
- [sharafat](solutions/sharafat/9/15.c)
- [sadman](solutions/sadman/9/15.c)

16. Write a C program to compare two strings without using any string function.
- [sharafat](solutions/sharafat/9/16.c)
- [sadman](solutions/sadman/9/16.c)

17. Write a C program to find the largest and smallest sized word in a string.
- [sharafat](solutions/sharafat/9/17.c)
- [sadman](solutions/sadman/9/17.c)

18. Write a C program to replace all the white spaces in a string with double white spaces.
- [sharafat](solutions/sharafat/9/18.c)
- [sadman](solutions/sadman/9/18.c)

19. Write a C program to enter multiple strings and display them in lexicographical order.
- [sharafat](solutions/sharafat/9/19.c)
- [sadman](solutions/sadman/9/19.c)

20. Write a C program to concatenate two strings without using any string function.
- [sharafat](solutions/sharafat/9/20.c)
- [sadman](solutions/sadman/9/20.c)

## Chapter 10 

1. Write a function exchange to interchange the values of two variables, say x and y. Illustrate the use of this function, in a calling function. Assume that x and y are defined as global variables.
- [sharafat](solutions/sharafat/10/1.c)
- [Hridoy](solutions/Hridoy/10/1.c)
- [sadman](solutions/sadman/10/1.c)

2. Write a function space(x) that can be used to provide a space of x positions between two output numbers. Demonstrate its application.
- [sharafat](solutions/sharafat/10/2.c)
- [sadman](solutions/sadman/10/2.c)

3. Use recursive function calls to evaluate
```
	f(x) = x - pow(x,3)/3! + pow(x,5)/5! - pow(x,7)/7! + .....
```
- [sharafat](solutions/sharafat/10/3.c)
- [sadman](solutions/sadman/10/3.c)

4. An n_order polynomial can be evaluated as follows:
```
	P = (.....(((a 0 x+a 1 )x+a 2 )x+a 3 )x+...+a n)
```
Write a function to evaluate the polynomial, using an array variable. Test it using a main program.
- [sharafat](solutions/sharafat/10/4.c)
- [sadman](solutions/sadman/10/4.c)

5. The Fibonacci numbers are defined recursively as follows:
```
				F1 = 1
				F2 = 1
				Fn = Fn-1 + Fn-2 , n>2
```
Write a function that will generate and print the first n Fibonacci numbers. Test the function for n = 5, 10, and 15.
- [sharafat](solutions/sharafat/10/5.c)
- [sadman](solutions/sadman/10/5.c)

6. Write a function that will round a floating-point number to an indicated decimal place. For example the number 17.457 would yield the value 17.46 when it is rounded off to two decimal places.
- [sharafat](solutions/sharafat/10/6.c)
- [sadman](solutions/sadman/10/6.c)

7. Write a function prime that returns 1 if its argument is a prime number and returns zero otherwise.
- [sharafat](solutions/sharafat/10/7.c)
- [sadman](solutions/sadman/10/7.c)

8. Write a function that will scan a character string passed as an argument and convert all lowercase characters into their uppercase equivalents.
- [sharafat](solutions/sharafat/10/8.c)
- [sadman](solutions/sadman/10/8.c)

9. Develop a top_down modular program to implement a calculator. The program should request the user to input two numbers and display one of the following as per the desire of the user:
```
(a) Sum of the numbers
(b) Difference of the numbers
(c) Product of the numbers
(d) Division of the numbers
```
Provide separate functions for performing various tasks such as reading, calculating and displaying. Calculating module should call second level modules to perform the individual mathematical operations. The main function should have only function calls.
- [sharafat](solutions/sharafat/10/9.c)
- [sadman](solutions/sadman/10/9.c)

10. Develop a modular interactive program using functions that reads the values of three sides of a triangle and displays either its area or its perimeter as per the request of the user. Given the three sides a, b and c.
```
		Perimeter = a + b + c
		Area      = sqrt ((s-a)*(s-b)*(s-c))
	where   s 	    - (a+b+c)/2
```
- [sharafat](solutions/sharafat/10/10.c)
- [sadman](solutions/sadman/10/10.c)

11. Write a function that can be called to find the largest element of an m by n matrix.
- [sharafat](solutions/sharafat/10/11.c)
- [sadman](solutions/sadman/10/11.c)

12. Write a function that can be called to compute the product of two matrices of size m by n and n by m. The main function provides the values for m and n and two matrices.
- [sharafat](solutions/sharafat/10/12.c)
- [sadman](solutions/sadman/10/12.c)

13. Design and code an interactive modular program
that will use functions to a matrix of m by n size,
compute column averages and row averages, and
then print the entire matrix with averages shown in
respective rows and columns.
- [sharafat](solutions/sharafat/10/13.c)
- [sadman](solutions/sadman/10/13.c)

14. Develop a top-down modular program that will perform the following tasks:
```
(a) Read two integer arrays with unsorted elements.
(b) Sort them in ascending order
(c) Merge the sorted arrays
(d) Print the sorted list
```
Use functions for carrying out each of the above tasks. The main function should have only function calls.
- [sharafat](solutions/sharafat/10/14.c)
- [sadman](solutions/sadman/10/14.c)

15. Develop your own functions for performing following operations on strings:
```
(a) Copying one string to another
(b) Comparing two strings
(c) Adding a string to the end of another string
```
Write a driver program to test your functions.
- [sharafat](solutions/sharafat/10/15.c)
- [sadman](solutions/sadman/10/15.c)

16. Write a program that invokes a function called
find( ) to perform the following tasks:
```
(a) Receives a character array and a single character.
(b) Returns 1 if the specified character is found in the array, 0 otherwise.
```
- [sharafat](solutions/sharafat/10/16.c)
- [sadman](solutions/sadman/10/16.c)

17. Design a function locate ( ) that takes two character arrays s1 and s2 and one integer value m as parameters and inserts the string s2 into s1
immediately after the index m .
Write a program to test the function using a real-life situation. (Hint: s2 may be a missing word in s1 that represents a line of text).
- [sharafat](solutions/sharafat/10/17.c)

18. Write a function that takes an integer parameter m representing the month number of the year and returns the corresponding name of the month. For instance, if m = 3, the month is March. Test your program.
- [sharafat](solutions/sharafat/10/18.c)
- [sadman](solutions/sadman/10/18.c)

19. In preparing the calendar for a year we need to know whether that particular year is leap year or not. Design a function leap( ) that receives the year as a parameter and returns an appropriate message.
What modifications are required if we want to use the function in preparing the actual calendar?
- [sharafat](solutions/sharafat/10/19.c)
- [sadman](solutions/sadman/10/19.c)

20. Write a function that receives a floating point value x and returns it as a value rounded to two nearest decimal places. For example, the value
123.4567 will be rounded to 123.46 (Hint: Seek help of one of the math functions available in math library).
- [sharafat](solutions/sharafat/10/20.c)
- [sadman](solutions/sadman/10/20.c)

## Chapter 11 

1. Define a structure data type called *time_struct*
containing three members integer *hour*, integer
*minute* and integer *second* . Develop a program
that would assign values to the individual members
and display the time in the following form:
```
		16:40:51
```
- [sharafat](solutions/sharafat/11/1.c)
- [sadman](solutions/sadman/11/1.c)

2. Modify the above program such that a function is
used to input values to the members and another
function to display the time.
- [sharafat](solutions/sharafat/11/2.c)
- [sadman](solutions/sadman/11/2.c)

3. Design a function *update* that would accept the
data structure designed in Exercise 11.1 and
increments time by one second and returns the new
time. (If the increment results in 60 seconds, then
the second member is set to zero and the minute
member is incremented by one. Then, if the result is
60 minutes, the minute member is set to zero and
the hour member is incremented by one. Finally
when the hour becomes 24, it is set to zero.)
- [sharafat](solutions/sharafat/11/3.c)
- [sadman](solutions/sadman/11/3.c)

4. Define a structure data type named *date* containing three 
integer members *day* , *month* , and *year*. Develop an interactive
modular program to perform the following tasks:
```
(a) To read data into structure mem bers by a function
(b) To validate the date entered by another function
(c) To print the date in the format
		April 29, 2002
by a third function.
```
The input data should be three integers like 29, 4,
and 2002 corresponding to day, month, and year.
Examples of invalid data:
```
	31, 4, 2002 – April has only 30 days
	29, 2, 2002 – 2002 is not a leap year
```
- [sharafat](solutions/sharafat/11/4.c)
- [sadman](solutions/sadman/11/4.c)

5. Design a function *update* that accepts the *date*
structure designed in Exercise 11.4 to increment the
date by one day and return the new date. The
following rules are applicable:
```
(a) If the date is the last day in a month, month should
 be incremented
(b) If it is the last day in December, the year should
be incremented
(c) There are 29 days in February of a leap year
```
- [sharafat](solutions/sharafat/11/5.c)
- [sadman](solutions/sadman/11/5.c)

6. Modify the input function used in Exercise 11.4 such
that it reads a value that represents the date in the
form of a long integer, like 19450815 for the date
15-8-1945 (August 15, 1945) and assigns suitable
values to the members day, month , and year.
> Use suitable algorithm to
convert the long integer 19450815 into year, month
and day.
- [sharafat](solutions/sharafat/11/6.c)
- [sadman](solutions/sadman/11/6.c)

7. Add a function called nextdate to the program
designed in Exercise 11.4 to perform the following
task:
```
(a) Accepts two arguments, one of the structure data
containing the present date and the second an
integer that represents the number of days to be
added to the present date.
(b) Adds the days to the present date and returns the
structure containing the next date correctly.
Note that the next date may be in the next month or
even the next year.
```
- [sharafat](solutions/sharafat/11/7.c)
- [sadman](solutions/sadman/11/7.c)

8. Use the *date* structure defined in Exercise 11.4 to
store two dates. Develop a function that will take
these two dates as input and compares them.
```
(a) It returns 1, if the *date1* is earlier than *date2*
(b) It returns 0, if *date1* is later date
```
- [sharafat](solutions/sharafat/11/8.c)
- [sadman](solutions/sadman/11/8.c)

9. Define a structure to represent a vector (a series of
integer values) and write a modular program to
perform the following tasks:
```
(a) To create a vector
(b) To modify the value of a given element
(c) To multiply by a scalar value
(d) To display the vector in the form 
(10, 20, 30, . . . . . ..)
```
- [sharafat](solutions/sharafat/11/9.c)
- [sadman](solutions/sadman/11/9.c)

10. Add a function to the program of Exercise 11.9 that
accepts two vectors as input parameters and return
the addition of two vectors.
- [sharafat](solutions/sharafat/11/10.c)
- [sadman](solutions/sadman/11/10.c)

11. Create two structures named *metric* and *British* which store
the values of distances. The *metric* structure stores
the values in metres and centimetres and the British
structure stores the values in feet and inches. Write
a program that reads values for the structure
variables and adds values contained in one variable
of *metric* to the contents of another variable of
*British*. The program should display the result in the
format of feet and inches or metres and centimetres
as required.
- [sharafat](solutions/sharafat/11/11.c)
- [sadman](solutions/sadman/11/11.c)

12. Define a structure named *census* with the
following three members:
```
(a) A character array city [ ] to store names
(b) A long integer to store population of the city
(c) A float member to store the literacy level
```
Write a program to do the following:
```
(a) To read details for 5 cities randomly using an
array variable
(b) To sort the list alphabetically
(c) To sort the list based on literacy level
(d) To sort the list based on population
(e) To display sorted lists
```
- [sharafat](solutions/sharafat/11/12.c)
- [sadman](solutions/sadman/11/12.c)

13. Define a structure that can describe an hotel. It
should have members that include the name,
address, grade, average room charge, and number
of rooms.
Write functions to perform the following operations:
```
(a) To print out hotels of a given grade in order of
charges.
(b) To print out hotels with room charges less than a
given value.
```
- [sharafat](solutions/sharafat/11/13.c)
- [sadman](solutions/sadman/11/13.c)

14. Define a structure called *cricket* that will describe
the following information:
```
	player name
	team name
	batting average
```
Using *cricket*, declare an array *player* with 50
elements and write a program to read the
information about all the 50 players and print a
team-wise list containing names of players with their
batting average.
- [sharafat](solutions/sharafat/11/14.c)
- [sadman](solutions/sadman/11/14.c)

15. Design a structure *student_record* to contain
name, date of birth, and total marks obtained. Use
the *date* structure designed in Exercise 11.4 to
represent the date of birth.
Develop a program to read data for 10 students in a
class and list them rank-wise.
- [sharafat](solutions/sharafat/11/15.c)
- [sadman](solutions/sadman/11/15.c)

16. Write a C program that prints the size of a
structure data type.
- [sharafat](solutions/sharafat/11/16.c)
- [sadman](solutions/sadman/11/16.c)

17. Write a C program that prints the size of a
structure and union data type that have same
number and type of members.
- [sharafat](solutions/sharafat/11/17.c)
- [sadman](solutions/sadman/11/17.c)

18. Write a C program for demonstrating operations on
individual structure members using pointer notation.
- [sharafat](solutions/sharafat/11/18.c)
- [sadman](solutions/sadman/11/18.c)

## Chapter 12 

1. Write a program using pointers to read in an array of
integers and print its elements in reverse order.
- [sharafat](solutions/sharafat/12/1.c)
- [sadman](solutions/sadman/12/1.c)

2. We know that the roots of a quadratic
equation of the form
	ax 2 + bx + c = 0
are given by the following equations:
	x1 = -b + sqrt(b*b-4*a*c)/2*a
	x2 = -b - sqrt(b*b-4*a*c)/2*a
Write a function to calculate the roots. The function
must use two pointer parameters, one to receive the
coefficients a, b, and c, and the other to send the
roots to the calling function.
- [sharafat](solutions/sharafat/12/2.c)
- [sadman](solutions/sadman/12/2.c)

3. Write a function that receives a sorted array of
integers and an integer value, and inserts the value
in its correct place.
- [sharafat](solutions/sharafat/12/3.c)
- [sadman](solutions/sadman/12/3.c)

4. Write a function using pointers to add two matrices
and to return the resultant matrix to the calling
function.
- [sharafat](solutions/sharafat/12/4.c)
- [sadman](solutions/sadman/12/4.c)

5. Using pointers, write a function that receives a
character string and a character as argument and
deletes all occurrences of this character in the string.
The function should return the corrected string with
no holes.
- [sharafat](solutions/sharafat/12/5.c)
- [sadman](solutions/sadman/12/5.c)

6. Write a function day_name that receives a number
n and returns a pointer to a character string
containing the name of the corresponding day. The
day names should be kept in a static table of
character strings local to the function.
- [sharafat](solutions/sharafat/12/6.c)
- [sadman](solutions/sadman/12/6.c)

7. Write a program to read in an
array of names and to sort them in alphabetical
order. Use sort function that receives pointers to the
functions strcmp and swap.sort in turn should call
these functions via the pointers.
- [sharafat](solutions/sharafat/12/7.c)
- [sadman](solutions/sadman/12/7.c)

8. Given an array of sorted list of integer numbers,
write a function to search for a particular item, using
the method of binary search. And also show how this
function may be used in a program. Use pointers and
pointer arithmetic.
(Hint: In binary search, the target value is compared
with the array’s middle element. Since the table is
sorted, if the required value is smaller, we know that
all values greater than the middle element can be
ignored. That is, in one attempt, we eliminate one
half the list. This search can be applied recursively
till the target value is found.)
- [sharafat](solutions/sharafat/12/8.c)
- [sadman](solutions/sadman/12/8.c)

9. Write a function (using a pointer parameter) that
reverses the elements of a given array.
- [sharafat](solutions/sharafat/12/9.c)
- [sadman](solutions/sadman/12/9.c)

10. Write a function (using pointer
parameters) that compares two integer arrays to see
whether they are identical. The function returns 1 if
they are identical, 0 otherwise.
- [sharafat](solutions/sharafat/12/10.c)
- [sadman](solutions/sadman/12/10.c)

11. Write a C program to insert a substring into another
string by using function and pointers.
- [sadman](solutions/sadman/12/11.c)

12. Write a C program that uses the pointer increment
operations to demonstrate the scale factor.
- [sadman](solutions/sadman/12/12.c)

13. Write a C program that displays the
addresses and values pointed by an array of
pointers.
- [sadman](solutions/sadman/12/13.c)

14. Write a C program that uses pointers to
demonstrate initialization of structure members.
- [sadman](solutions/sadman/12/14.c)

## Chapter 13 

1. Write a program to copy the contents of one file into
another.
- [sharafat](solutions/sharafat/13/1.c)

2. Two files DATA1 and DATA2 contain sorted lists of
integers. Write a program to produce a third file
DATA which holds a single sorted, merged list of
these two lists. Use command line arguments to
specify the file names.
- [sharafat](solutions/sharafat/13/2.c)

3. Write a program that compares two files and returns
0 if they are equal and 1 is they are not.
- [sharafat](solutions/sharafat/13/3.c)

4. Write a program that appends one file at the end of
another.
- [sharafat](solutions/sharafat/13/4.c)

5. Write a program that reads a file containing integers
and appends at its end the sum of all the integers.
- [sharafat](solutions/sharafat/13/5.c)

6. Write a program that prompts the user
for two files, one containing a line of text known as
source file and other, an empty file known as target
file and then copies the contents of source file into
target file.
Modify the program so that a specified character is
deleted from the source file as it is copied to the
target file.
- [sharafat](solutions/sharafat/13/6.c)

7. Write a program that requests for a file name and
an integer, known as offset value. The program then
reads the file starting from the location specified by
the offset value and prints the contents on the
screen.
Note: If the offset value is a positive integer, then
printing skips that many lines. If it is a negative
number, it prints that many lines from the end of
the file. An appropriate error message should be
printed, if anything goes wrong.
- [sharafat](solutions/sharafat/13/7.c)

8. Write a program to create a sequential file that
could store details about five products. Details
include product code, cost and number of items
available and are provided through keyboard.
- [sharafat](solutions/sharafat/13/8.c)

9. Write a program to read the file
created in Exercise 13.8 and compute and print the
total value of all the five products.
- [sharafat](solutions/sharafat/13/9.c)

10. Rewrite the program developed in Exercise 13.8 to
store the details in a random access file and print
the details of alternate products from the file.
Modify the program so that it can output the details
of a product when its code is specified interactively.
- [sharafat](solutions/sharafat/13/10.c)

11. Write a C program that uses file
handling methods to store records of mixed data in
a file.
- [sharafat](solutions/sharafat/13/11.c)

12. Write a C program that uses getw function to read
integer values from one file. Subsequently, it uses
the putw function to write the integer values in
reverse order in another file.
- [sharafat](solutions/sharafat/13/12.c)

13. Write a C program that reads characters from a file
and prints their ASCII codes.
- [sharafat](solutions/sharafat/13/13.c)

14. Write a C program that concatenates the contents
of two files and writes then in the third file.
- [sharafat](solutions/sharafat/13/14.c)

15. Write a C program that uses fscanf
function to read integer values from a file, computes
the square of each integer value and places the
resultant values in a different file.
- [sharafat](solutions/sharafat/13/15.c)

## Chapter 14 

1. In Worked-Out Problem 14.4, we have used print()
in recursive mode. Rewrite this function using
iterative technique in for loop.

2. Write a menu driven program to create a linked list
of a class of students and perform the following
operations:
(a) Write out the contents of the list.
(b) Edit the details of a specified student.
(c) Count the number of students above a specified
age and weight.
Make use of the header file defined in Review
Question 14.8.
- [Pasquale](solutions/Pasquale/14/2.c)

3. Write recursive and non-recursive functions for
reversing the elements in a linear list. Compare the
relative efficiencies of them.

4. Write an interactive program to create linear linked
lists of customer names and their telephone
numbers. The program should be menu driven and
include features for add ing a new customer and
deleting an existing customer.
- [Pasquale](solutions/Pasquale/14/4.c)

5. Modify the above program so that the list is always
maintained in the alphabetical order of customer
names.
- [Pasquale](solutions/Pasquale/14/5.c)

6. Develop a program to combine two sorted lists to
produce a third sorted lists which contains one
occurrence of each of the elements in the original
lists.

7. Write a program to create a circular linked list so
that the input order of data item is maintained. Add
function to carry out the following operations on
circular linked list.
a. Count the number of nodes
b. Write out contents
c. Locate and write the contents of a given node

8. Write a program to construct an ordered doubly
linked list and write out the contents of a specified
node.

9. Write a function that would traverse a linear singly
linked list in reverse and write out the contents in
reverse order.

10. Given two ordered singly linked lists, write a
function that will merge them into a third ordered
list.
- [Pasquale](solutions/Pasquale/14/10.c)

11. Write a function that takes a pointer to the first
node in a linked list as a parameter and returns a
pointer to the last node. NULL should be returned if
the list is empty.
- [Pasquale](solutions/Pasquale/14/11.c)

12. Write a function that counts and returns the total
number of nodes in a linked list.
- [Pasquale](solutions/Pasquale/14/12.c)

13. Write a function that takes a specified node of a
linked list and makes it as its last node.

14. Write a function that computers and
returns the length of a circular list.

15. Write functions to implement the following tasks
for a doubly linked list.
a. To insert a node.
b. To delete a node.
c. To find a specified node.

## Chapter 15 

1. Define a macro PRINT_VALUE that can be used to
print two values of arbitrary type.

2. Write a nested macro that gives the minimum of
three values.

3. Define a macro with one parameter to compute the
volume of a sphere. Write a program using this
macro to compute the volume for spheres of radius
5, 10 and 15 metres.

4. Define a macro that receives an array and the
number of elements in the array as arguments. Write
a program using this macro to print out the elements
of an array.

5. Using the macro defined in the exercise 15.4, write a
program to compute the sum of all elements in an
array.

6. Write symbolic constants for the binary arithmetic
operators +, –, * and /. Write a short program to
illustrate the use of these symbolic constants.

7. Define symbolic constants for { and }
and printing a blank line. Write a small program
using these constants.

8. Write a program to illustrate the use of stringizing
operator.

9. Write a simple C program to demonstrate how a
user-created file in included in a C program.

10. Write a C program that uses the
#error directive to stop the program execution when
an error is encountered.

11. Write a C program that uses macro substitution to
compute the area of a rectangle.

12. Write a C program to implement a macro named
NOTEQUAL that performs logical not operation.

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

## How to contribute

Contribution guide is available [here](CONTRIBUTING.md) or, in the [wiki section](https://github.com/SharafatKarim/ansi-c-balagurusamy-exercise/wiki).

