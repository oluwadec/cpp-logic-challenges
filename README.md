# C++ Beginner Exercises

Eight small console programs that practise the basics of C++: variables, user input, arithmetic, formatting output, conditionals and loops. Each file is one self-contained program with a short comment at the top explaining what it does.

## Programs

| # | File | What it does | Concepts |
|---|------|--------------|----------|
| 1 | `01_rectangle_area.cpp` | Calculates the area of a rectangle | input, `double`, multiplication |
| 2 | `02_circle_circumference.cpp` | Calculates the circumference of a circle | constants, formulas |
| 3 | `03_shopping_total_cost.cpp` | Totals the cost of an item bought in some quantity | `string`, `getline`, output formatting |
| 4 | `04_average_of_three_scores.cpp` | Averages three scores | integer vs decimal division |
| 5 | `05_celsius_to_fahrenheit.cpp` | Converts Celsius to Fahrenheit | conversion formulas |
| 6 | `06_seconds_to_minutes.cpp` | Splits seconds into minutes and seconds | `/` and `%` operators |
| 7 | `07_age_access_check.cpp` | Grants or denies access based on age | `if` / `else` |
| 8 | `08_ten_number_calculator.cpp` | Sums ten numbers, or prints the negative sum | loops, `char` input, `if` / `else if` |

## How to build and run

You need a C++ compiler such as `g++` (or Visual Studio on Windows).

```bash
g++ -std=c++17 -Wall -o rectangle_area 01_rectangle_area.cpp
./rectangle_area
```

Replace the file name with any program in the table.
