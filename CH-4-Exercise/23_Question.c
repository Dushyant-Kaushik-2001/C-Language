/*
Ques.23.Explore following format specifiers on internet - %i, %g, %lf

1. %i

(a) Description = Used for printing or scanning integer values. It behaves similarly to %d but can also recognize integers in octal or 
hexadecimal when used in scanf().

(b) Usage:

int num1 = 42;
int num2;
printf("Using %%i: %i\n", num1);                           // Prints 42
printf("Enter a number (decimal, octal, or hex): ");
scanf("%i", &num2);                         // Accepts input in decimal, octal (e.g., 042), or hex (e.g., 0x2A)
printf("You entered: %i\n", num2);

(c) Key Point = %i and %d are identical in printf(), but %i has extended functionality in scanf().


2. %g

(a) Description: Used for floating-point numbers. It automatically selects the more concise representation between fixed-point (%f) and 
exponential (%e) formats, depending on the value's magnitude.

(b) Usage:

double num1 = 123.456;
double num2 = 0.0000123456;

printf("Using %%g for 123.456: %g\n", num1);                             // Prints: 123.456
printf("Using %%g for 0.0000123456: %g\n", num2);                        // Prints: 1.23456e-05

(c) Key Point = %g is helpful when you don’t know beforehand whether a fixed or scientific representation is better.
It suppresses trailing zeros and uses exponential notation for very small or large numbers.


3. %lf

(a) Description= Used for double values in printf() or scanf().

(b) In printf(), %lf behaves the same as %f because printf() automatically promotes float to double.

(c) In scanf(), %lf is necessary to specify a double value.

(d) Usage:

double pi = 3.141592653589793;

printf("Using %%lf: %lf\n", pi);                         // Prints: 3.141593 (default precision)

printf("Enter a double value: ");
scanf("%lf", &pi); // Reads a double value
printf("You entered: %lf\n", pi);

(e) Key Point = %lf ensures compatibility with double in scanf().
Use it with printf() for clarity, even though %f works similarly.

Summary Table:
Specifier	           Data Type	                                         Description
%i	                     int	                      Prints/Scans integers; detects octal/hex input in scanf()
%g	                    float/double	              Automatically selects between %f and %e for a concise representation
%lf	                     double	                      Prints/Scans double values; needed for scanf(), optional for printf()

These specifiers allow more flexible handling of numeric data and are valuable in various scenarios like user input, formatted output, and 
scientific computations.


*/




