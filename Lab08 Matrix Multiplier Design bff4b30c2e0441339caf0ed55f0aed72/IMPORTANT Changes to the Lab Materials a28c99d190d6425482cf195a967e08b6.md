# IMPORTANT Changes to the Lab Materials

## Integrated zip file

[Lab08srcs.zip](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/Lab08srcs.zip)

## Common notes

All files contain answers to Lab08. Original files have some FIXME parts, but since we have to make some changes, I attached with including all of the answers.
It may good to implement the FIXMEs on your own first, and then refer to the below files.

## Vitis HLS

[mmult.h](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/mmult.h)

- Changed **ap_axiu** array to **hls::stream**&.
- Implemented FIXME part at **matrix_multiply_ref**.
- Implemented FIXME part at **mmult_hw**.
- Added pipelining and array partition to **mmult_hw**.
- Added **volatile** keywords to **pop_stream**.
- Fixed **wrapped_mmult_hw** so that we can properly handle the **hls::stream**.
- Fixed **test_matrix_mult** so that we can properly handle the **hls::stream**. (NOT TESTED)

[mmult_accel.cpp](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/mmult_accel.cpp)

- Changed the order of **INPUT_STREAM** and **OUTPUT_STREAM** pragmas.
- Changed **ap_axiu** array to **hls::stream**&.

[mmult_test.cpp](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/mmult_test.cpp)

- Added the **HLS_accel** call to **main**.
- Fixed **main** so that we can properly handle the **hls::stream**.
- Added some global **const** variables.

## Vivado

[Lab_08_Preset.tcl](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/Lab_08_Preset.tcl)

- No changes. Just for convenience.

## Vitis

[lib_xmmult_hw.c](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/lib_xmmult_hw.c)

- Implemented **hidden FIXME**.

[lib_xmmult_hw.h](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/lib_xmmult_hw.h)

- No changes. Just for convenience.

[main.c](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/main.c)

- Implemented FIXME.

[Makefile.zip](IMPORTANT%20Changes%20to%20the%20Lab%20Materials%20a28c99d190d6425482cf195a967e08b6/Makefile.zip)

- Example Makefile. Unzip it.
- Fixed problems related to Vitis HLS Makefile.

---