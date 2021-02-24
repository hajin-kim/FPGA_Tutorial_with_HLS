# Workflow from HLS to FPGA Programming

![Workflow%20from%20HLS%20to%20FPGA%20Programming%20670bfaa114c64b479cc325d3c1922628/Untitled.png](Workflow%20from%20HLS%20to%20FPGA%20Programming%20670bfaa114c64b479cc325d3c1922628/Untitled.png)

![Workflow%20from%20HLS%20to%20FPGA%20Programming%20670bfaa114c64b479cc325d3c1922628/Untitled%201.png](Workflow%20from%20HLS%20to%20FPGA%20Programming%20670bfaa114c64b479cc325d3c1922628/Untitled%201.png)

## Terminologies

### What is IP?

Pre-configured logic functions that can be used in your design.

- [https://www.xilinx.com/support/documentation/sw_manuals/xilinx11/ise_c_intellectual_property_cores.htm](https://www.xilinx.com/support/documentation/sw_manuals/xilinx11/ise_c_intellectual_property_cores.htm)
- [https://whatis.techtarget.com/definition/IP-core-intellectual-property-core](https://whatis.techtarget.com/definition/IP-core-intellectual-property-core)

### HLS and RTL

- HLS: High-Level Synthesis
    - high level language(C, C++)
        - describes IP and its action
- RTL: register-transfer level
    - includes HDL(VHDL or Verilog) and others

---

# Workflow

1. Vitis HLS
2. Vivado
3. Vitis IDE platform
4. Vitis IDE system and application
5. program FPAG and test

## 1. Vitis HLS

Agenda: generate RTL of our own IP by doing HLS

## 2. Vivado

Agenda: generate hardware by placing IPs and connecting them

- generate XSA

### Workflow

1. Load our IP
    - Synthesized by HLS, or coded in RTL
2. Implement our design
    - Place IPs and connect them
    - Use Validate Design to verify the design
3. Create a design wrapper
4. Synthesis and generate bitstream
5. Export hardware as .xsa file

## 3. Vitis IDE Platform Project

Agenda: compile Vivado hardware written in C language, in order to program our device

## 4. Vitis IDE Application Project

Agenda: final step for programming our device