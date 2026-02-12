# Mathematical Series Approximation (C++)

This C++ program is designed to calculate the sum of a specific power series involving factorials. It demonstrates the use of **recurrence relations** to efficiently compute successive terms in a series approximation.

###  Mathematical Context
The program approximates a series that shares structural similarities with **Bessel functions of the first kind**. It calculates the sum:
$$S = \sum_{i=0}^{10} U_i$$
where the first term $U_0$ is defined as:
$$U_0 = \frac{1}{0! \cdot (N+0)!} \cdot \left(\frac{x}{2}\right)^{N}$$
Subsequent terms are calculated using an iterative recurrence formula to optimize performance and maintain precision.

This project was developed as part of the computational mathematics curriculum at **Lviv Polytechnic National University**.

###  Key Features
* **Factorial Computation:** Includes a custom implementation for calculating factorials using `long long` to handle large integer values.
* **Recurrence Formula Optimization:** Instead of recalculating powers and factorials for every term, the program derives each new term from the previous one ($U_1 \to U_2$), reducing the number of complex operations.
* **Interactive Input:** Validates the number of terms ($N$) to ensure it is a positive integer before proceeding with calculations.
* **Precision Handling:** Uses `double` for high-precision floating-point arithmetic.

###  Technical Stack
* **Language:** C++
* **Standard Library:** `iostream` (I/O), `cmath` (mathematical functions).
* **Concepts:** Numerical series, Recurrence relations, Iterative loops.

###  How to Use
1. Compile the program using a C++ compiler (e.g., `g++`).
2. Run the executable.
3. Enter the real argument `x`.
4. Enter the integer value `N` (must be greater than 0).
5. The program will output the calculated sum of the series.
