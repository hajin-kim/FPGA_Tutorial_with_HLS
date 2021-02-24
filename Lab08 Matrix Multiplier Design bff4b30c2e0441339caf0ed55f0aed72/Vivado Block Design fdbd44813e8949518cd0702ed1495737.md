# Vivado Block Design

Ppt **page 12**. Typo. Lab08.
During handling the Vivado, you will see more suggestions for Block Automation and Connection Automation, which are not shown in the ppt. You may accept them as long as you follow the ppt. Also for this page.

Ppt **page 13**. Import IP repository at Settings.

Ppt **page 14**. You have to do some settings for the DMA. Remind what you did at Lab06. Do the same things.

Ppt **page 17**. Compare with your design. And manually connect below.

- Connect **INPUT_STREAM** of **Hls_accel** to **AXI Direct Memory Access**.
- Connect **OUTPUT_STREAM** of **Hls_accel** to **AXI Direct Memory Access**.
- You don't have to consider the **interconnect_aresetn** of **Processor System Reset**. It may not be connected.

Ppt **page 21**. There are 4 excluded addresses.

Ppt **page 22**. Don't forget to create a design wrapper after the validation.