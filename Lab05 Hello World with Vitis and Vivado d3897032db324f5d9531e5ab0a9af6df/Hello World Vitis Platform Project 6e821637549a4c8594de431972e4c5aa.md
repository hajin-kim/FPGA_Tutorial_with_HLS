# Hello World: Vitis Platform Project

## Vitis

### Running Vitis

When you do **Launch SDK** at the ppt **page 32**, please note that this is replaced by Vitis.
It is at **Toos-Launch Vitis IDE**.

- Ref: [https://forums.xilinx.com/t5/Embedded-Development-Tools/launch-sdk-missing-in-vivado/td-p/1124186](https://forums.xilinx.com/t5/Embedded-Development-Tools/launch-sdk-missing-in-vivado/td-p/1124186)

Or, you can run Vitis manually by double-clicking the desktop icon or the Vitis execution file.

## Creating a Vitis Platform Project

Now you are seeing a Vitis window.

Browse **File-New-Platform Project** (shortcut **Alt Shift N and then P**). Then you can create a new platform project.

If the below window is shown, then enter the project name.

- Recommended name: ***{$PROJECT_NAME}_platform***

![Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled.png](Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled.png)

And then, click next. Then the below window will be shown.

Click the **Browse** button. And find your ***{$DESIGN_NAME}_wrapper.xsa*** file exported. This file will be located in your project folder if you followed the ppt file.

![Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%201.png](Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%201.png)

After adding your file, keep the below option.

![Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%202.png](Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%202.png)

And click **finish** button.

After a while, the new platform project is created.

![Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%203.png](Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%203.png)

### Browsing project components

See the left **Explorer** view

![Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%204.png](Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%204.png)

Expand the top-level ***{$PROJECT_NAME}_platform***. May be expanded as default.

- Expand **(top)/export/*{$PROJECT_NAME}_platform*/hw**
You can find the exported Hardware Specification file (.xsa file), and the top-level platform XML file (.xpfm file).
- Open **(top)/platform.spr** to see the platform view and **build**.

### Build

Open **platform.spr** file and click the hammer button.

![Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%205.png](Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%205.png)

![Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%206.png](Hello%20World%20Vitis%20Platform%20Project%206e821637549a4c8594de431972e4c5aa/Untitled%206.png)