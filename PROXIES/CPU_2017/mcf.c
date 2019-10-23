/*************
 * # Copyright (c) 2015 The University of Texas at Austin.
 * #     All rights reserved.
 *
 * #   Licensed under the Apache License, Version 2.0 (the "License");
 * #   you may not use this file except in compliance with the License.
 * #   You may obtain a copy of the License at
 *
 * #       http://www.apache.org/licenses/LICENSE-2.0
 *
 * #   Unless required by applicable law or agreed to in writing,
 * #   software distributed under the License is distributed on an "AS
 * #   IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * #   express or implied.  See the License for the specific language
 * #   governing permissions and limitations under the License.
 *
 * #  For more about this software visit:
 *
 * #       http://lca.ece.utexas.edu
 *
 * #File created on 2017-11-01 00:46:19.994802
 * #Input file: mcf_midArr.json
 * #Proxy Benchmark mimicking instruction performance for mcf
 *
 * #Compile Command line: gcc -O0 -o mcf.o mcf.c
 * #Run Command: ./mcf.o
 * ****************/
#include<stdio.h>
#define MAX 255*1024 + 252*1024
#define ITERATIONS 32017
char X0[128144537];
char X1[128144537];
char X2[128144537];
char X3[128144537];
char X4[128144537];
char X5[128144537];
char X6[128144537];
char X7[128144537];
void main (void)  {
int i;
int j;
char* ptr0;
char* ptr1;
char* ptr2;
char* ptr3;
char* ptr4;
char* ptr5;
char* ptr6;
char* ptr7;
for (j = 1; j < 100; j++) {
for (i = 1; i < ITERATIONS; i++) {
ptr0 = (char*) &X0[256 * i + 16];
ptr1 = (char*) &X1[72 * i + 0];
ptr2 = (char*) &X2[8 * i + 0];
ptr3 = (char*) &X3[0 * i + 0];
ptr4 = (char*) &X4[216 * i + 0];
ptr5 = (char*) &X5[104 * i + 0];
ptr6 = (char*) &X6[32 * i + 0];
ptr7 = (char*) &X7[16 * i + 0];
__asm__ __volatile__ ("mov %0, %%eax\n\t"
"mov %1, %%r8\n\t"
"mov %2, %%r9\n\t"
"mov %3, %%r10\n\t"
"mov %4, %%r11\n\t"
"mov %5, %%r12\n\t"
"mov %6, %%r13\n\t"
"mov %7, %%r14\n\t"
"mov %8, %%r15\n\t"
"BBL0INS0: add 0(%%r8), %%ebx\n\t"
"BBL0INS1: test $64, %%eax\n\t"
"BBL0INS2: jz BBL1INS0\n\t"
"BBL1INS0: add 0(%%rbp), %%ebx\n\t"
"BBL1INS1: add 16(%%r8), %%ebx\n\t"
"BBL1INS2: test $256, %%eax\n\t"
"BBL1INS3: jz BBL2INS0\n\t"
"BBL2INS0: add %%ebx, %%ebx\n\t"
"BBL2INS1: test $16, %%eax\n\t"
"BBL2INS2: jz BBL3INS0\n\t"
"BBL3INS0: add %%ebx, %%ebx\n\t"
"BBL3INS1: add 0(%%rbp), %%ecx\n\t"
"BBL3INS2: test $256, %%eax\n\t"
"BBL3INS3: jz BBL4INS0\n\t"
"BBL4INS0: add 0(%%r8), %%edx\n\t"
"BBL4INS1: add %%edx, %%ebx\n\t"
"BBL4INS2: add 0(%%rbp), %%edx\n\t"
"BBL4INS3: test $2, %%eax\n\t"
"BBL4INS4: jz BBL5INS0\n\t"
"BBL5INS0: add %%edx, %%ebx\n\t"
"BBL5INS1: add -16(%%r8), %%ecx\n\t"
"BBL5INS2: test $256, %%eax\n\t"
"BBL5INS3: jz BBL6INS0\n\t"
"BBL6INS0: add %%ecx, %%edx\n\t"
"BBL6INS1: test $64, %%eax\n\t"
"BBL6INS2: jz BBL7INS0\n\t"
"BBL7INS0: add %%ecx, %%edx\n\t"
"BBL7INS1: test $256, %%eax\n\t"
"BBL7INS2: jz BBL8INS0\n\t"
"BBL8INS0: add 0(%%rbp), %%ecx\n\t"
"BBL8INS1: mov %%ecx, 256(%%r12)\n\t"
"BBL8INS2: test $128, %%eax\n\t"
"BBL8INS3: jz BBL9INS0\n\t"
"BBL9INS0: add 0(%%rbp), %%edx\n\t"
"BBL9INS1: test $0, %%eax\n\t"
"BBL9INS2: jz BBL10INS0\n\t"
"BBL10INS0: add 480(%%r12), %%edx\n\t"
"BBL10INS1: add 0(%%rbp), %%ebx\n\t"
"BBL10INS2: test $8, %%eax\n\t"
"BBL10INS3: jz BBL11INS0\n\t"
"BBL11INS0: add 464(%%r12), %%ecx\n\t"
"BBL11INS1: test $0, %%eax\n\t"
"BBL11INS2: jz BBL12INS0\n\t"
"BBL12INS0: add 256(%%r15), %%ecx\n\t"
"BBL12INS1: mov %%ecx, 256(%%r14)\n\t"
"BBL12INS2: test $64, %%eax\n\t"
"BBL12INS3: jz BBL13INS0\n\t"
"BBL13INS0: add 288(%%r14), %%ebx\n\t"
"BBL13INS1: add 256(%%r10), %%ecx\n\t"
"BBL13INS2: add 480(%%r10), %%edx\n\t"
"BBL13INS3: test $16, %%eax\n\t"
"BBL13INS4: jz BBL14INS0\n\t"
"BBL14INS0: add 256(%%r13), %%edx\n\t"
"BBL14INS1: test $2, %%eax\n\t"
"BBL14INS2: jz BBL15INS0\n\t"
"BBL15INS0: add %%edx, %%edx\n\t"
"BBL15INS1: add 544(%%r14), %%edx\n\t"
"BBL15INS2: test $16, %%eax\n\t"
"BBL15INS3: jz BBL16INS0\n\t"
"BBL16INS0: add 512(%%r13), %%ebx\n\t"
"BBL16INS1: add %%ebx, %%edx\n\t"
"BBL16INS2: test $64, %%eax\n\t"
"BBL16INS3: jz BBL17INS0\n\t"
"BBL17INS0: add 288(%%r13), %%ecx\n\t"
"BBL17INS1: add 736(%%r10), %%ebx\n\t"
"BBL17INS2: test $128, %%eax\n\t"
"BBL17INS3: jz BBL18INS0\n\t"
"BBL18INS0: add 256(%%r9), %%ecx\n\t"
"BBL18INS1: add %%ecx, %%ecx\n\t"
"BBL18INS2: test $64, %%eax\n\t"
"BBL18INS3: jz BBL19INS0\n\t"
"BBL19INS0: add %%ecx, %%ebx\n\t"
"BBL19INS1: add 240(%%r8), %%ecx\n\t"
"BBL19INS2: test $8, %%eax\n\t"
"BBL19INS3: jz BBL20INS0\n\t"
"BBL20INS0: add 224(%%r8), %%ebx\n\t"
"BBL20INS1: add %%ebx, %%edx\n\t"
"BBL20INS2: test $128, %%eax\n\t"
"BBL20INS3: jz BBL21INS0\n\t"
"BBL21INS0: add 280(%%r8), %%ecx\n\t"
"BBL21INS1: add %%ecx, %%ebx\n\t"
"BBL21INS2: test $4, %%eax\n\t"
"BBL21INS3: jz BBL22INS0\n\t"
"BBL22INS0: add %%ecx, %%ebx\n\t"
"BBL22INS1: test $32, %%eax\n\t"
"BBL22INS2: jz BBL23INS0\n\t"
"BBL23INS0: add %%ebx, %%edx\n\t"
"BBL23INS1: add 56(%%r8), %%ebx\n\t"
"BBL23INS2: test $1, %%eax\n\t"
"BBL23INS3: jz BBL24INS0\n\t"
"BBL24INS0: add 512(%%r9), %%ebx\n\t"
"BBL24INS1: add 992(%%r10), %%edx\n\t"
"BBL24INS2: test $16, %%eax\n\t"
"BBL24INS3: jz BBL25INS0\n\t"
"BBL25INS0: add %%ecx, %%edx\n\t"
"BBL25INS1: add 936(%%r10), %%edx\n\t"
"BBL25INS2: add %%edx, %%ecx\n\t"
"BBL25INS3: test $4, %%eax\n\t"
"BBL25INS4: jz BBL26INS0\n\t"
"BBL26INS0: add 312(%%r8), %%ecx\n\t"
"BBL26INS1: add 88(%%r8), %%ecx\n\t"
"BBL26INS2: test $8, %%eax\n\t"
"BBL26INS3: jz BBL27INS0\n\t"
"BBL27INS0: add %%ecx, %%ebx\n\t"
"BBL27INS1: test $0, %%eax\n\t"
"BBL27INS2: jz BBL28INS0\n\t"
"BBL28INS0: add 768(%%r9), %%ecx\n\t"
"BBL28INS1: mov %%ecx, 984(%%r9)\n\t"
"BBL28INS2: test $128, %%eax\n\t"
"BBL28INS3: jz BBL29INS0\n\t"
"BBL29INS0: add %%ecx, %%ebx\n\t"
"BBL29INS1: mov %%ebx, 344(%%r8)\n\t"
"BBL29INS2: add 1240(%%r9), %%ecx\n\t"
"BBL29INS3: test $1, %%eax\n\t"
"BBL29INS4: jz BBL30INS0\n\t"
"BBL30INS0: add 1432(%%r9), %%ecx\n\t"
"BBL30INS1: test $64, %%eax\n\t"
"BBL30INS2: jz BBL31INS0\n\t"
"BBL31INS0: add 1392(%%r9), %%ecx\n\t"
"BBL31INS1: add 1408(%%r9), %%ecx\n\t"
"BBL31INS2: test $16, %%eax\n\t"
"BBL31INS3: jz BBL32INS0\n\t"
"BBL32INS0: add 1192(%%r10), %%ecx\n\t"
"BBL32INS1: add %%ecx, %%ecx\n\t"
"BBL32INS2: test $256, %%eax\n\t"
"BBL32INS3: jz BBL33INS0\n\t"
"BBL33INS0: add %%ecx, %%ecx\n\t"
"BBL33INS1: add %%ecx, %%ebx\n\t"
"BBL33INS2: test $128, %%eax\n\t"
"BBL33INS3: jz BBL34INS0\n\t"
"BBL34INS0: mov %%ebx, 1448(%%r10)\n\t"
"BBL34INS1: test $0, %%eax\n\t"
"BBL34INS2: jz BBL35INS0\n\t"
"BBL35INS0: add 1664(%%r9), %%ecx\n\t"
"BBL35INS1: add 1920(%%r9), %%ebx\n\t"
"BBL35INS2: test $128, %%eax\n\t"
"BBL35INS3: jz BBL36INS0\n\t"
"BBL36INS0: add %%ebx, %%ecx\n\t"
"BBL36INS1: add 600(%%r8), %%ebx\n\t"
"BBL36INS2: test $0, %%eax\n\t"
"BBL36INS3: jz BBL37INS0\n\t"
"BBL37INS0: add %%ecx, %%ecx\n\t"
"BBL37INS1: add 856(%%r8), %%edx\n\t"
"BBL37INS2: test $1, %%eax\n\t"
"BBL37INS3: jz BBL38INS0\n\t"
"BBL38INS0: add 1112(%%r8), %%ebx\n\t"
"BBL38INS1: add 1096(%%r8), %%ecx\n\t"
"BBL38INS2: test $64, %%eax\n\t"
"BBL38INS3: jz BBL39INS0\n\t"
"BBL39INS0: add 1352(%%r8), %%edx\n\t"
"BBL39INS1: add 1608(%%r8), %%ebx\n\t"
"BBL39INS2: test $1, %%eax\n\t"
"BBL39INS3: jz BBL40INS0\n\t"
"BBL40INS0: add 1864(%%r8), %%ecx\n\t"
"BBL40INS1: add %%ecx, %%edx\n\t"
"BBL40INS2: test $16, %%eax\n\t"
"BBL40INS3: jz BBL41INS0\n\t"
"BBL41INS0: add %%edx, %%ebx\n\t"
"BBL41INS1: add %%edx, %%ecx\n\t"
"BBL41INS2: test $256, %%eax\n\t"
"BBL41INS3: jz BBL42INS0\n\t"
"BBL42INS0: mov %%ecx, 2120(%%r8)\n\t"
"BBL42INS1: add 2080(%%r8), %%edx\n\t"
"BBL42INS2: test $1, %%eax\n\t"
"BBL42INS3: jz BBL43INS0\n\t"
"BBL43INS0: add %%edx, %%ebx\n\t"
"BBL43INS1: add 2096(%%r8), %%edx\n\t"
"BBL43INS2: test $0, %%eax\n\t"
"BBL43INS3: jz BBL44INS0\n\t"
"BBL44INS0: add 2352(%%r8), %%ebx\n\t"
"BBL44INS1: add 2608(%%r8), %%edx\n\t"
"BBL44INS2: test $2, %%eax\n\t"
"BBL44INS3: jz BBL45INS0\n\t"
"BBL45INS0: add 2864(%%r8), %%edx\n\t"
"BBL45INS1: test $1, %%eax\n\t"
"BBL45INS2: jz BBL46INS0\n\t"
"BBL46INS0: mov %%edx, 3120(%%r8)\n\t"
"BBL46INS1: add 3376(%%r8), %%ecx\n\t"
"BBL46INS2: test $8, %%eax\n\t"
"BBL46INS3: jz BBL47INS0\n\t"
"BBL47INS0: add 3632(%%r8), %%ebx\n\t"
"BBL47INS1: test $128, %%eax\n\t"
"BBL47INS2: jz BBL48INS0\n\t"
"BBL48INS0: add %%ebx, %%ebx\n\t"
"BBL48INS1: add 3888(%%r8), %%ebx\n\t"
"BBL48INS2: test $64, %%eax\n\t"
"BBL48INS3: jz BBL49INS0\n\t"
"BBL49INS0: add 512(%%r15), %%ebx\n\t"
"BBL49INS1: add %%ebx, %%ebx\n\t"
"BBL49INS2: test $32, %%eax\n\t"
"BBL49INS3: jz BBL50INS0\n\t"
"BBL50INS0: mov %%ebx, 768(%%r15)\n\t"
"BBL50INS1: test $16, %%eax\n\t"
::"m"(i), "m"(ptr0), "m"(ptr1), "m"(ptr2), "m"(ptr3), "m"(ptr4), "m"(ptr5), "m"(ptr6), "m"(ptr7):"memory", "cc", "esp", "edi", "ebx", "ecx", "edx", "st", "eax", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15");
}
}
}
