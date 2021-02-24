#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

// THIS IS THE TOP LEVEL DESIGN THAT WILL BE SYNTHESIZED
#define MCR_SIZE 1024


void standalone_mmult (float A[32][32], float B[32][32], float C[32][32])
{
	mmult_hw <float, 32>(A, B, C);
}


void HLS_accel (hls::stream<AXI_VAL> &INPUT_STREAM, hls::stream<AXI_VAL> &OUTPUT_STREAM)
{
#pragma HLS INTERFACE s_axilite port=return     bundle=CONTROL_BUS
#pragma HLS INTERFACE axis      port=INPUT_STREAM
#pragma HLS INTERFACE axis      port=OUTPUT_STREAM

//#pragma HLS disaggregate variable=OUTPUT_STREAM

	wrapped_mmult_hw <float, 32, 32*32, 4, 5, 5>(INPUT_STREAM, OUTPUT_STREAM);

	return;
}

