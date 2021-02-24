#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

typedef float T;
int const DIM = 32;
int const SIZE = DIM*DIM;
int const U = 4;
int const TI = 5;
int const TD = 5;

void mmult_sw(T a[DIM][DIM], T b[DIM][DIM], T out[DIM][DIM])
{
	// matrix multiplication of a A*B matrix
	for (int ia = 0; ia < DIM; ++ia)
		for (int ib = 0; ib < DIM; ++ib)
		{

			float sum = 0;

			for (int id = 0; id < DIM; ++id)

				sum += a[ia][id] * b[id][ib];

			out[ia][ib] = sum;
		}
}


#ifdef DB_DEBUG

int main(void)
{

	int ret_val = 0;

	ret_val = test_matrix_mult<T, DIM, SIZE, U, TI, TD>();

	return ret_val;

}

#else

int main(void)
{

	int i,j, err;

	T matOp1[DIM][DIM];
	T matOp2[DIM][DIM];
	T matMult_sw[DIM][DIM];
	T matMult_hw[DIM][DIM];

	// prepare data for the DUT
	hls::stream<AXI_VAL> inp_stream;
	hls::stream<AXI_VAL> out_stream;

	assert(sizeof(T)*8 == 32);

	/** Matrix Initiation */
	for(i = 0; i<DIM; i++)
		for(j = 0; j<DIM; j++)
			matOp1[i][j] = (float)(i+j);

	for(i = 0; i<DIM; i++)
		for(j = 0; j<DIM; j++)
			matOp2[i][j] = (float)(i*j);
	/** End of Initiation */

	/* Hardware Matrix Multiplication */
	// stream in the first input matrix
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			inp_stream.write(push_stream<T,U,TI,TD>(matOp1[i][j],0));
	// stream in the second input  matrix
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++) {
			int k = i*DIM+j;
			inp_stream.write(push_stream<T,U,TI,TD>(matOp2[i][j],k == (SIZE-1)));
		}

	//call the DUT
	HLS_accel(inp_stream, out_stream);

	// extract the output matrix from the out stream
	for(int i=0; i<DIM; i++)
		for(int j=0; j<DIM; j++)
			matMult_hw[i][j] = pop_stream<T,U,TI,TD>(out_stream.read());


	/* Software Matrix Multiplication */
//	matrix_multiply_ref<T, DIM>(matOp1, matOp2, matMult_sw);
	mmult_sw(matOp1, matOp2, matMult_sw);

	/** Matrix comparison */
	err = 0;
	for (i = 0; (i<DIM && !err); i++)
		for (j = 0; (j<DIM && !err); j++)
			if (matMult_sw[i][j] != matMult_hw[i][j])
				err++;

	if (err == 0)
		printf("Matrixes identical ... Test successful!\r\n");
	else
		printf("Test failed!\r\n");

	return err;

}



#endif
