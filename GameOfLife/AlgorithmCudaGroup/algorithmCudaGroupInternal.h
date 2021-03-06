#pragma once
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include "algorithmCudaGroup.h"

#define CHECK(call)\
do {\
	const cudaError_t error = call;\
	if (error != cudaSuccess) {\
		printf("Error: %s:%d, ", __FILE__, __LINE__);\
		printf("code:%d, reason: %s\n", error, cudaGetErrorString(error));\
		exit(1);\
	}\
} while(0)


namespace AlgorithmCudaGroup
{
#if 0
}	// indent guard
#endif

extern int NUM_STREAM;

void swapMat(ALGORITHM_CUDA_GROUP_PARAM *param);
}

void printMatrix(AlgorithmCudaGroup::DNA *mat, int width, int height);

