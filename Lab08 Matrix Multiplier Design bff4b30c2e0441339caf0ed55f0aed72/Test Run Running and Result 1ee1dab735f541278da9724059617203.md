# Test Run: Running and Result

## Build and run

## Terminal result

Note: the newline may not works well. You can change **\n** and **\r** to **\n\r**. Read your Vitis source code.

The result of programming is:

![Test%20Run%20Running%20and%20Result%201ee1dab735f541278da9724059617203/Untitled.png](Test%20Run%20Running%20and%20Result%201ee1dab735f541278da9724059617203/Untitled.png)

- The hardware and software results are the same. Therefore, the matrix multiplication programming is successful.
- The Acceleration Factor is 29.167. It means that the FPGA multiplication is 29.167 times faster than computer software multiplication. It is the result of pipelining into 32 multipliers.