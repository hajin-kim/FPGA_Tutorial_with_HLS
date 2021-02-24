# Alternative: Direct Creation of Vitis Application Project from Vivado Hardware

We can directly create an application project from the hardware (.xsa) file.

First, try to create a new application project.

At the below window, choose not **Select a platform**, but **Create a new platform**.

![Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled.png](Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled.png)

1. Chose **Create a new platform from hardware (XSA)**.
2. Click **Browse** button and find your ***{$DESIGN_NAME}_wrapper.xsa*** file exported.
3. Set on the Generate boot components option.
4. Set platform name to ***{$PROJECT_NAME}_platform***.
5. Click Next.

![Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled%201.png](Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled%201.png)

- Set project name to ***{$PROJECT_NAME}***
(Use the project name directly)

![Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled%202.png](Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled%202.png)

- Next.

![Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled%203.png](Alternative%20Direct%20Creation%20of%20Vitis%20Application%20P%20c3733968f81641d19b17885f5466a621/Untitled%203.png)

- Choose Hello World.
- Finish.

Now done.

## Makefile Problem

If you are doing **Lab06 or later**, see also:

[Makefile Problem](https://github.com/hajin-kim/FPGA_Tutorial_with_HLS/blob/main/Troubleshootings%20f43673650b7c4eb5b83fa2b7a80452e2/Makefile%20Problem%20b266174a19ec426eba6e8e8b3119c7d0.md)
