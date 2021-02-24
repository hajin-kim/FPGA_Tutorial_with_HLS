# Troubleshooting: Terminal shows nothing

1. Open platform.spr 

    ![Troubleshooting%20Terminal%20shows%20nothing%20c63dca91cb0e48d7b072dd1c72faf51e/Untitled.png](Troubleshooting%20Terminal%20shows%20nothing%20c63dca91cb0e48d7b072dd1c72faf51e/Untitled.png)

2. Open Modify BSP Settings

    ![Troubleshooting%20Terminal%20shows%20nothing%20c63dca91cb0e48d7b072dd1c72faf51e/Untitled%201.png](Troubleshooting%20Terminal%20shows%20nothing%20c63dca91cb0e48d7b072dd1c72faf51e/Untitled%201.png)

3. Enter the standalone dropdown. Check the Value of stdout is linked to ps7_uart_1
If not, edit it.

    ![Troubleshooting%20Terminal%20shows%20nothing%20c63dca91cb0e48d7b072dd1c72faf51e/Untitled%202.png](Troubleshooting%20Terminal%20shows%20nothing%20c63dca91cb0e48d7b072dd1c72faf51e/Untitled%202.png)

4. Rebuild and rerun

If the problem continues, connect the board first. And delete the current platform and application projects and make them again.