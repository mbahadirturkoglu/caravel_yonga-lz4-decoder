/*
 * SPDX-FileCopyrightText: 2020 Efabless Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * SPDX-License-Identifier: Apache-2.0
 */

// updated on 210604

// This include is relative to $CARAVEL_PATH (see Makefile)
#include "verilog/dv/caravel/defs.h"
#include "verilog/dv/caravel/stub.c"

/*
	WISHBONE Test:
		- Checks YONGA LZ4 Decoder functionality through the WISHBONE port
*/

int i = 0; 
int clk = 0;

int yonga_lz4_decoder_status;

// #define NUM_OF_INPUT_ELEMENTS 21
// #define NUM_OF_OUTPUT_ELEMENTS 12

// #define NUM_OF_INPUT_ELEMENTS 34
// #define NUM_OF_OUTPUT_ELEMENTS 39

// #define NUM_OF_INPUT_ELEMENTS 24
// #define NUM_OF_OUTPUT_ELEMENTS 31

// #define NUM_OF_INPUT_ELEMENTS 24
// #define NUM_OF_OUTPUT_ELEMENTS 30

// #define NUM_OF_INPUT_ELEMENTS 25
// #define NUM_OF_OUTPUT_ELEMENTS 75

// #define NUM_OF_INPUT_ELEMENTS 49
// #define NUM_OF_OUTPUT_ELEMENTS 44

// #define NUM_OF_INPUT_ELEMENTS 35
// #define NUM_OF_OUTPUT_ELEMENTS 30

void read_yonga_lz4_decoder_status();

void main()
{

	
/* 
//Example -1
int yonga_lz4_decoder_test_seq[NUM_OF_INPUT_ELEMENTS];
	yonga_lz4_decoder_test_seq[0] = 0x0d;
	yonga_lz4_decoder_test_seq[1] = 0x00;
	yonga_lz4_decoder_test_seq[2] = 0x00;
	yonga_lz4_decoder_test_seq[3] = 0x10;
	yonga_lz4_decoder_test_seq[4] = 0x80;
	yonga_lz4_decoder_test_seq[5] = 0x61;
	yonga_lz4_decoder_test_seq[6] = 0x62;
	yonga_lz4_decoder_test_seq[7] = 0x63;
	yonga_lz4_decoder_test_seq[8] = 0x64;
	yonga_lz4_decoder_test_seq[9] = 0x61;
	yonga_lz4_decoder_test_seq[10] = 0x62;
	yonga_lz4_decoder_test_seq[11] = 0x63;
	yonga_lz4_decoder_test_seq[12] = 0x64;
	yonga_lz4_decoder_test_seq[13] = 0x61;
	yonga_lz4_decoder_test_seq[14] = 0x62;
	yonga_lz4_decoder_test_seq[15] = 0x63;
	yonga_lz4_decoder_test_seq[16] = 0x64;
	yonga_lz4_decoder_test_seq[17] = 0x0a;
	yonga_lz4_decoder_test_seq[18] = 0x00;
	yonga_lz4_decoder_test_seq[19] = 0x00;
	yonga_lz4_decoder_test_seq[20] = 0x00;
	yonga_lz4_decoder_test_seq[21] = 0x00;

	int yonga_lz4_decoder_expected_result_seq[NUM_OF_OUTPUT_ELEMENTS];
	yonga_lz4_decoder_expected_result_seq[0] = 0x61;
	yonga_lz4_decoder_expected_result_seq[1] = 0x62;
	yonga_lz4_decoder_expected_result_seq[2] = 0x63;
	yonga_lz4_decoder_expected_result_seq[3] = 0x64;
	yonga_lz4_decoder_expected_result_seq[4] = 0x61;
	yonga_lz4_decoder_expected_result_seq[5] = 0x62;
	yonga_lz4_decoder_expected_result_seq[6] = 0x63;
	yonga_lz4_decoder_expected_result_seq[7] = 0x64;
	yonga_lz4_decoder_expected_result_seq[8] = 0x61;
	yonga_lz4_decoder_expected_result_seq[9] = 0x62;
	yonga_lz4_decoder_expected_result_seq[10] = 0x63;
	yonga_lz4_decoder_expected_result_seq[11] = 0x64;
	yonga_lz4_decoder_expected_result_seq[12] = 0x0a;

*/

/* 
//Example -2
    int yonga_lz4_decoder_test_seq[NUM_OF_INPUT_ELEMENTS];
	yonga_lz4_decoder_test_seq[0] = 0x1b;
	yonga_lz4_decoder_test_seq[1] = 0x00;
	yonga_lz4_decoder_test_seq[2] = 0x00;
	yonga_lz4_decoder_test_seq[3] = 0x00;
	yonga_lz4_decoder_test_seq[4] = 0xa3;
	yonga_lz4_decoder_test_seq[5] = 0x46;
	yonga_lz4_decoder_test_seq[6] = 0x43;
	yonga_lz4_decoder_test_seq[7] = 0x44
	yonga_lz4_decoder_test_seq[8] = 0x41;
	yonga_lz4_decoder_test_seq[9] = 0x42;
	yonga_lz4_decoder_test_seq[10] = 0x45;
	yonga_lz4_decoder_test_seq[11] = 0x47;
	yonga_lz4_decoder_test_seq[12] = 0x45;
	yonga_lz4_decoder_test_seq[13] = 0x41;
	yonga_lz4_decoder_test_seq[14] = 0x42;
	yonga_lz4_decoder_test_seq[15] = 0x08;
	yonga_lz4_decoder_test_seq[16] = 0x00;
	yonga_lz4_decoder_test_seq[17] = 0x5c;
	yonga_lz4_decoder_test_seq[18] = 0x46;
	yonga_lz4_decoder_test_seq[19] = 0x43;
	yonga_lz4_decoder_test_seq[20] = 0x44;	
	yonga_lz4_decoder_test_seq[21] = 0x44;
	yonga_lz4_decoder_test_seq[22] = 0x41;
	yonga_lz4_decoder_test_seq[23] = 0x01;
	yonga_lz4_decoder_test_seq[24] = 0x00;
	yonga_lz4_decoder_test_seq[25] = 0x50;
	yonga_lz4_decoder_test_seq[26] = 0x41;
	yonga_lz4_decoder_test_seq[27] = 0x41;
	yonga_lz4_decoder_test_seq[28] = 0x41;
	yonga_lz4_decoder_test_seq[29] = 0x41;
	yonga_lz4_decoder_test_seq[30] = 0x0a;
	yonga_lz4_decoder_test_seq[31] = 0x00;
	yonga_lz4_decoder_test_seq[32] = 0x00;
	yonga_lz4_decoder_test_seq[33] = 0x00;
	yonga_lz4_decoder_test_seq[34] = 0x00;
	
	int yonga_lz4_decoder_expected_result_seq[NUM_OF_OUTPUT_ELEMENTS];
	yonga_lz4_decoder_expected_result_seq[0] = 0x46;
	yonga_lz4_decoder_expected_result_seq[1] = 0x43;
	yonga_lz4_decoder_expected_result_seq[2] = 0x44;
	yonga_lz4_decoder_expected_result_seq[3] = 0x41;
	yonga_lz4_decoder_expected_result_seq[4] = 0x42;
	yonga_lz4_decoder_expected_result_seq[5] = 0x45;
	yonga_lz4_decoder_expected_result_seq[6] = 0x47;
	yonga_lz4_decoder_expected_result_seq[7] = 0x45;
	yonga_lz4_decoder_expected_result_seq[8] = 0x41;
	yonga_lz4_decoder_expected_result_seq[9] = 0x42;	
	yonga_lz4_decoder_expected_result_seq[10] = 0x44;
	yonga_lz4_decoder_expected_result_seq[11] = 0x41;
	yonga_lz4_decoder_expected_result_seq[12] = 0x42;
	yonga_lz4_decoder_expected_result_seq[13] = 0x45;
	yonga_lz4_decoder_expected_result_seq[14] = 0x47;
	yonga_lz4_decoder_expected_result_seq[15] = 0x45;
	yonga_lz4_decoder_expected_result_seq[16] = 0x41;
	yonga_lz4_decoder_expected_result_seq[17] = 0x42;		
	yonga_lz4_decoder_expected_result_seq[18] = 0x46;
	yonga_lz4_decoder_expected_result_seq[19] = 0x43;
	yonga_lz4_decoder_expected_result_seq[20] = 0x44;
	yonga_lz4_decoder_expected_result_seq[21] = 0x44;
	yonga_lz4_decoder_expected_result_seq[22] = 0x41;	
	yonga_lz4_decoder_expected_result_seq[23] = 0x41;
	yonga_lz4_decoder_expected_result_seq[24] = 0x41;
	yonga_lz4_decoder_expected_result_seq[25] = 0x41;
	yonga_lz4_decoder_expected_result_seq[26] = 0x41;
	yonga_lz4_decoder_expected_result_seq[27] = 0x41;
	yonga_lz4_decoder_expected_result_seq[28] = 0x41;
	yonga_lz4_decoder_expected_result_seq[29] = 0x41;
	yonga_lz4_decoder_expected_result_seq[30] = 0x41;
	yonga_lz4_decoder_expected_result_seq[31] = 0x41;
	yonga_lz4_decoder_expected_result_seq[32] = 0x41;
	yonga_lz4_decoder_expected_result_seq[33] = 0x41;
	yonga_lz4_decoder_expected_result_seq[34] = 0x41;
	yonga_lz4_decoder_expected_result_seq[35] = 0x41;
	yonga_lz4_decoder_expected_result_seq[36] = 0x41;
	yonga_lz4_decoder_expected_result_seq[37] = 0x41;
	yonga_lz4_decoder_expected_result_seq[38] = 0x41;
	yonga_lz4_decoder_expected_result_seq[39] = 0x0a;	
*/


/* 
//Example -3
	int yonga_lz4_decoder_test_seq[NUM_OF_INPUT_ELEMENTS];
	yonga_lz4_decoder_test_seq[0] = 0x11;
	yonga_lz4_decoder_test_seq[1] = 0x00;
	yonga_lz4_decoder_test_seq[2] = 0x00;
	yonga_lz4_decoder_test_seq[3] = 0x00;
	yonga_lz4_decoder_test_seq[4] = 0x44;
	yonga_lz4_decoder_test_seq[5] = 0x41;
	yonga_lz4_decoder_test_seq[6] = 0x42;
	yonga_lz4_decoder_test_seq[7] = 0x43;
	yonga_lz4_decoder_test_seq[8] = 0x44;
	yonga_lz4_decoder_test_seq[9] = 0x04;
	yonga_lz4_decoder_test_seq[10] = 0x00;
	yonga_lz4_decoder_test_seq[11] = 0x1a;
	yonga_lz4_decoder_test_seq[12] = 0x43;
	yonga_lz4_decoder_test_seq[13] = 0x01;
	yonga_lz4_decoder_test_seq[14] = 0x00;
	yonga_lz4_decoder_test_seq[15] = 0x50;
	yonga_lz4_decoder_test_seq[16] = 0x43;
	yonga_lz4_decoder_test_seq[17] = 0x43;
	yonga_lz4_decoder_test_seq[18] = 0x43;
	yonga_lz4_decoder_test_seq[19] = 0x43;
	yonga_lz4_decoder_test_seq[20] = 0x0a;
	yonga_lz4_decoder_test_seq[21] = 0x00;
	yonga_lz4_decoder_test_seq[22] = 0x00;
	yonga_lz4_decoder_test_seq[23] = 0x00;
	yonga_lz4_decoder_test_seq[24] = 0x00;

	int yonga_lz4_decoder_expected_result_seq[NUM_OF_OUTPUT_ELEMENTS];
	yonga_lz4_decoder_expected_result_seq[0] = 0x41;
	yonga_lz4_decoder_expected_result_seq[1] = 0x42;
	yonga_lz4_decoder_expected_result_seq[2] = 0x43;
	yonga_lz4_decoder_expected_result_seq[3] = 0x44;
	yonga_lz4_decoder_expected_result_seq[4] = 0x41;
	yonga_lz4_decoder_expected_result_seq[5] = 0x42;
	yonga_lz4_decoder_expected_result_seq[6] = 0x43;
	yonga_lz4_decoder_expected_result_seq[7] = 0x44;
	yonga_lz4_decoder_expected_result_seq[8] = 0x41;
	yonga_lz4_decoder_expected_result_seq[9] = 0x42;
	yonga_lz4_decoder_expected_result_seq[10] = 0x43;
	yonga_lz4_decoder_expected_result_seq[11] = 0x44;	
	yonga_lz4_decoder_expected_result_seq[12] = 0x43;
	yonga_lz4_decoder_expected_result_seq[13] = 0x43;
	yonga_lz4_decoder_expected_result_seq[14] = 0x43;
	yonga_lz4_decoder_expected_result_seq[15] = 0x43;
	yonga_lz4_decoder_expected_result_seq[16] = 0x43;
	yonga_lz4_decoder_expected_result_seq[17] = 0x43;
	yonga_lz4_decoder_expected_result_seq[18] = 0x43;
	yonga_lz4_decoder_expected_result_seq[19] = 0x43;
	yonga_lz4_decoder_expected_result_seq[20] = 0x43;
	yonga_lz4_decoder_expected_result_seq[21] = 0x43;
	yonga_lz4_decoder_expected_result_seq[22] = 0x43;
	yonga_lz4_decoder_expected_result_seq[23] = 0x43;
	yonga_lz4_decoder_expected_result_seq[24] = 0x43;
	yonga_lz4_decoder_expected_result_seq[25] = 0x43;
	yonga_lz4_decoder_expected_result_seq[26] = 0x43;
	yonga_lz4_decoder_expected_result_seq[27] = 0x43;
	yonga_lz4_decoder_expected_result_seq[28] = 0x43;
	yonga_lz4_decoder_expected_result_seq[29] = 0x43;
	yonga_lz4_decoder_expected_result_seq[30] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[31] = 0x0a;
*/

/* 
//Example -4
	int yonga_lz4_decoder_test_seq[NUM_OF_INPUT_ELEMENTS];
	yonga_lz4_decoder_test_seq[0] = 0x11;
	yonga_lz4_decoder_test_seq[1] = 0x00;
	yonga_lz4_decoder_test_seq[2] = 0x00;
	yonga_lz4_decoder_test_seq[3] = 0x00;
	yonga_lz4_decoder_test_seq[4] = 0x42;
	yonga_lz4_decoder_test_seq[5] = 0x41;
	yonga_lz4_decoder_test_seq[6] = 0x42;
	yonga_lz4_decoder_test_seq[7] = 0x43;
	yonga_lz4_decoder_test_seq[8] = 0x44;
	yonga_lz4_decoder_test_seq[9] = 0x03;
	yonga_lz4_decoder_test_seq[10] = 0x00;
	yonga_lz4_decoder_test_seq[11] = 0x1a;
	yonga_lz4_decoder_test_seq[12] = 0x43;
	yonga_lz4_decoder_test_seq[13] = 0x01;
	yonga_lz4_decoder_test_seq[14] = 0x00;
	yonga_lz4_decoder_test_seq[15] = 0x50;
	yonga_lz4_decoder_test_seq[16] = 0x43;
	yonga_lz4_decoder_test_seq[17] = 0x43;
	yonga_lz4_decoder_test_seq[18] = 0x43;
	yonga_lz4_decoder_test_seq[19] = 0x43;
	yonga_lz4_decoder_test_seq[20] = 0x0a;
	yonga_lz4_decoder_test_seq[21] = 0x00;
	yonga_lz4_decoder_test_seq[22] = 0x00;
	yonga_lz4_decoder_test_seq[23] = 0x00;
	yonga_lz4_decoder_test_seq[24] = 0x00;

	int yonga_lz4_decoder_expected_result_seq[NUM_OF_OUTPUT_ELEMENTS];
	yonga_lz4_decoder_expected_result_seq[0] = 0x41;
	yonga_lz4_decoder_expected_result_seq[1] = 0x42;
	yonga_lz4_decoder_expected_result_seq[2] = 0x43;
	yonga_lz4_decoder_expected_result_seq[3] = 0x44;
	yonga_lz4_decoder_expected_result_seq[5] = 0x42;
	yonga_lz4_decoder_expected_result_seq[6] = 0x43;
	yonga_lz4_decoder_expected_result_seq[7] = 0x44;
	yonga_lz4_decoder_expected_result_seq[8] = 0x42;
	yonga_lz4_decoder_expected_result_seq[9] = 0x43;
	yonga_lz4_decoder_expected_result_seq[10] = 0x44;
	yonga_lz4_decoder_expected_result_seq[11] = 0x43;
	yonga_lz4_decoder_expected_result_seq[12] = 0x43;
	yonga_lz4_decoder_expected_result_seq[13] = 0x43;
	yonga_lz4_decoder_expected_result_seq[14] = 0x43;
	yonga_lz4_decoder_expected_result_seq[15] = 0x43;
	yonga_lz4_decoder_expected_result_seq[16] = 0x43;
	yonga_lz4_decoder_expected_result_seq[17] = 0x43;
	yonga_lz4_decoder_expected_result_seq[18] = 0x43;
	yonga_lz4_decoder_expected_result_seq[19] = 0x43;
	yonga_lz4_decoder_expected_result_seq[20] = 0x43;
	yonga_lz4_decoder_expected_result_seq[21] = 0x43;
	yonga_lz4_decoder_expected_result_seq[22] = 0x43;
	yonga_lz4_decoder_expected_result_seq[23] = 0x43;
	yonga_lz4_decoder_expected_result_seq[24] = 0x43;
	yonga_lz4_decoder_expected_result_seq[25] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[26] = 0x43;
	yonga_lz4_decoder_expected_result_seq[27] = 0x43;
	yonga_lz4_decoder_expected_result_seq[28] = 0x43;
	yonga_lz4_decoder_expected_result_seq[29] = 0x43;
	yonga_lz4_decoder_expected_result_seq[30] = 0x0a;
*/


/* 
//Example -5
    int yonga_lz4_decoder_test_seq[NUM_OF_INPUT_ELEMENTS];
	yonga_lz4_decoder_test_seq[0] = 0x12;
	yonga_lz4_decoder_test_seq[1] = 0x00;
	yonga_lz4_decoder_test_seq[2] = 0x00;
	yonga_lz4_decoder_test_seq[3] = 0x00;
	yonga_lz4_decoder_test_seq[4] = 0x42;
	yonga_lz4_decoder_test_seq[5] = 0x41;
	yonga_lz4_decoder_test_seq[6] = 0x42;
	yonga_lz4_decoder_test_seq[7] = 0x43;
	yonga_lz4_decoder_test_seq[8] = 0x44;
	yonga_lz4_decoder_test_seq[9] = 0x03;
	yonga_lz4_decoder_test_seq[10] = 0x00;
	yonga_lz4_decoder_test_seq[11] = 0x1f;
	yonga_lz4_decoder_test_seq[12] = 0x43;
	yonga_lz4_decoder_test_seq[13] = 0x01;
	yonga_lz4_decoder_test_seq[14] = 0x00;
	yonga_lz4_decoder_test_seq[15] = 0x28;	
	yonga_lz4_decoder_test_seq[16] = 0x50;
	yonga_lz4_decoder_test_seq[17] = 0x43;
	yonga_lz4_decoder_test_seq[18] = 0x43;
	yonga_lz4_decoder_test_seq[19] = 0x43;
	yonga_lz4_decoder_test_seq[20] = 0x43;
	yonga_lz4_decoder_test_seq[21] = 0x0a;
	yonga_lz4_decoder_test_seq[22] = 0x00;
	yonga_lz4_decoder_test_seq[23] = 0x00;
	yonga_lz4_decoder_test_seq[24] = 0x00;
	yonga_lz4_decoder_test_seq[25] = 0x00;

	int yonga_lz4_decoder_expected_result_seq[NUM_OF_OUTPUT_ELEMENTS];
	yonga_lz4_decoder_expected_result_seq[0] = 0x41;
	yonga_lz4_decoder_expected_result_seq[1] = 0x42;
	yonga_lz4_decoder_expected_result_seq[2] = 0x43;
	yonga_lz4_decoder_expected_result_seq[3] = 0x44;
	yonga_lz4_decoder_expected_result_seq[5] = 0x42;
	yonga_lz4_decoder_expected_result_seq[6] = 0x43;
	yonga_lz4_decoder_expected_result_seq[7] = 0x44;
	yonga_lz4_decoder_expected_result_seq[8] = 0x42;
	yonga_lz4_decoder_expected_result_seq[9] = 0x43;
	yonga_lz4_decoder_expected_result_seq[10] = 0x44;	
	yonga_lz4_decoder_expected_result_seq[11] = 0x43;
	yonga_lz4_decoder_expected_result_seq[12] = 0x43;
	yonga_lz4_decoder_expected_result_seq[13] = 0x43;
	yonga_lz4_decoder_expected_result_seq[14] = 0x43;
	yonga_lz4_decoder_expected_result_seq[15] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[16] = 0x43;
	yonga_lz4_decoder_expected_result_seq[17] = 0x43;
	yonga_lz4_decoder_expected_result_seq[18] = 0x43;
	yonga_lz4_decoder_expected_result_seq[19] = 0x43;
	yonga_lz4_decoder_expected_result_seq[20] = 0x43;
	yonga_lz4_decoder_expected_result_seq[21] = 0x43;
	yonga_lz4_decoder_expected_result_seq[22] = 0x43;
	yonga_lz4_decoder_expected_result_seq[23] = 0x43;
	yonga_lz4_decoder_expected_result_seq[24] = 0x43;
	yonga_lz4_decoder_expected_result_seq[25] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[26] = 0x43;
	yonga_lz4_decoder_expected_result_seq[27] = 0x43;
	yonga_lz4_decoder_expected_result_seq[28] = 0x43;
	yonga_lz4_decoder_expected_result_seq[29] = 0x43;
	yonga_lz4_decoder_expected_result_seq[30] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[31] = 0x43;
	yonga_lz4_decoder_expected_result_seq[32] = 0x43;
	yonga_lz4_decoder_expected_result_seq[33] = 0x43;
	yonga_lz4_decoder_expected_result_seq[34] = 0x43;
	yonga_lz4_decoder_expected_result_seq[35] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[36] = 0x43;
	yonga_lz4_decoder_expected_result_seq[37] = 0x43;
	yonga_lz4_decoder_expected_result_seq[38] = 0x43;
	yonga_lz4_decoder_expected_result_seq[39] = 0x43;
	yonga_lz4_decoder_expected_result_seq[40] = 0x43;
	yonga_lz4_decoder_expected_result_seq[41] = 0x43;
	yonga_lz4_decoder_expected_result_seq[42] = 0x43;
	yonga_lz4_decoder_expected_result_seq[43] = 0x43;
	yonga_lz4_decoder_expected_result_seq[44] = 0x43;
	yonga_lz4_decoder_expected_result_seq[45] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[46] = 0x43;
	yonga_lz4_decoder_expected_result_seq[47] = 0x43;
	yonga_lz4_decoder_expected_result_seq[48] = 0x43;
	yonga_lz4_decoder_expected_result_seq[49] = 0x43;
	yonga_lz4_decoder_expected_result_seq[50] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[51] = 0x43;
	yonga_lz4_decoder_expected_result_seq[52] = 0x43;
	yonga_lz4_decoder_expected_result_seq[53] = 0x43;
	yonga_lz4_decoder_expected_result_seq[54] = 0x43;
	yonga_lz4_decoder_expected_result_seq[55] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[56] = 0x43;
	yonga_lz4_decoder_expected_result_seq[57] = 0x43;
	yonga_lz4_decoder_expected_result_seq[58] = 0x43;
	yonga_lz4_decoder_expected_result_seq[59] = 0x43;
	yonga_lz4_decoder_expected_result_seq[60] = 0x43;
	yonga_lz4_decoder_expected_result_seq[61] = 0x43;
	yonga_lz4_decoder_expected_result_seq[62] = 0x43;
	yonga_lz4_decoder_expected_result_seq[63] = 0x43;
	yonga_lz4_decoder_expected_result_seq[64] = 0x43;
	yonga_lz4_decoder_expected_result_seq[65] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[66] = 0x43;
	yonga_lz4_decoder_expected_result_seq[67] = 0x43;
	yonga_lz4_decoder_expected_result_seq[68] = 0x43;
	yonga_lz4_decoder_expected_result_seq[69] = 0x43;
	yonga_lz4_decoder_expected_result_seq[70] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[71] = 0x43;
	yonga_lz4_decoder_expected_result_seq[72] = 0x43;
	yonga_lz4_decoder_expected_result_seq[73] = 0x43;
	yonga_lz4_decoder_expected_result_seq[74] = 0x43;	
	yonga_lz4_decoder_expected_result_seq[75] = 0x0a;
*/

/* 
//Example -6
    int yonga_lz4_decoder_test_seq[NUM_OF_INPUT_ELEMENTS];
	yonga_lz4_decoder_test_seq[0] = 0x2a;
	yonga_lz4_decoder_test_seq[1] = 0x00;
	yonga_lz4_decoder_test_seq[2] = 0x00;
	yonga_lz4_decoder_test_seq[3] = 0x00;	
	yonga_lz4_decoder_test_seq[4] = 0xf4;
	yonga_lz4_decoder_test_seq[5] = 0x03;	
	yonga_lz4_decoder_test_seq[6] = 0x41;
	yonga_lz4_decoder_test_seq[7] = 0x42;
	yonga_lz4_decoder_test_seq[8] = 0x43;	
	yonga_lz4_decoder_test_seq[9] = 0x44;
	yonga_lz4_decoder_test_seq[10] = 0x45;
	yonga_lz4_decoder_test_seq[11] = 0x46;
	yonga_lz4_decoder_test_seq[12] = 0x47;
	yonga_lz4_decoder_test_seq[13] = 0x48;
	yonga_lz4_decoder_test_seq[14] = 0x49;
	yonga_lz4_decoder_test_seq[15] = 0x4a;	
	yonga_lz4_decoder_test_seq[16] = 0x4b;
	yonga_lz4_decoder_test_seq[17] = 0x4c;
	yonga_lz4_decoder_test_seq[18] = 0x4d;
	yonga_lz4_decoder_test_seq[19] = 0x4e;
	yonga_lz4_decoder_test_seq[20] = 0x4f;
	yonga_lz4_decoder_test_seq[21] = 0x50;
	yonga_lz4_decoder_test_seq[22] = 0x52;
	yonga_lz4_decoder_test_seq[23] = 0x53;	
	yonga_lz4_decoder_test_seq[24] = 0x11;
	yonga_lz4_decoder_test_seq[25] = 0x00;
	yonga_lz4_decoder_test_seq[26] = 0xf0;
	yonga_lz4_decoder_test_seq[27] = 0x03;	
	yonga_lz4_decoder_test_seq[28] = 0x41;
	yonga_lz4_decoder_test_seq[29] = 0x42;
	yonga_lz4_decoder_test_seq[30] = 0x43;	
	yonga_lz4_decoder_test_seq[31] = 0x41;
	yonga_lz4_decoder_test_seq[32] = 0x42;
	yonga_lz4_decoder_test_seq[33] = 0x43;
	yonga_lz4_decoder_test_seq[34] = 0x58;
	yonga_lz4_decoder_test_seq[35] = 0x59;
	yonga_lz4_decoder_test_seq[36] = 0x5a;
	yonga_lz4_decoder_test_seq[37] = 0x5a;	
	yonga_lz4_decoder_test_seq[38] = 0x5a;
	yonga_lz4_decoder_test_seq[39] = 0x5a;
	yonga_lz4_decoder_test_seq[40] = 0x5a;	
	yonga_lz4_decoder_test_seq[41] = 0x5a;
	yonga_lz4_decoder_test_seq[42] = 0x5a;
	yonga_lz4_decoder_test_seq[43] = 0x5a;	
	yonga_lz4_decoder_test_seq[44] = 0x5a;
	yonga_lz4_decoder_test_seq[45] = 0x0a;
	yonga_lz4_decoder_test_seq[46] = 0x00;
	yonga_lz4_decoder_test_seq[47] = 0x00;
	yonga_lz4_decoder_test_seq[48] = 0x00;
	yonga_lz4_decoder_test_seq[49] = 0x00;
	
	int yonga_lz4_decoder_expected_result_seq[NUM_OF_OUTPUT_ELEMENTS];
	yonga_lz4_decoder_expected_result_seq[0] = 0x41;
	yonga_lz4_decoder_expected_result_seq[1] = 0x42;
	yonga_lz4_decoder_expected_result_seq[2] = 0x43;
	yonga_lz4_decoder_expected_result_seq[3] = 0x44;
	yonga_lz4_decoder_expected_result_seq[5] = 0x45;
	yonga_lz4_decoder_expected_result_seq[6] = 0x46;
	yonga_lz4_decoder_expected_result_seq[7] = 0x47;
	yonga_lz4_decoder_expected_result_seq[8] = 0x48;
	yonga_lz4_decoder_expected_result_seq[9] = 0x49;
	yonga_lz4_decoder_expected_result_seq[10] = 0x4a;	
	yonga_lz4_decoder_expected_result_seq[11] = 0x4b;
	yonga_lz4_decoder_expected_result_seq[12] = 0x4c;
	yonga_lz4_decoder_expected_result_seq[13] = 0x4d;
	yonga_lz4_decoder_expected_result_seq[14] = 0x4e;
	yonga_lz4_decoder_expected_result_seq[15] = 0x4f;	
	yonga_lz4_decoder_expected_result_seq[16] = 0x50;
	yonga_lz4_decoder_expected_result_seq[17] = 0x52;
	yonga_lz4_decoder_expected_result_seq[18] = 0x53;	
	yonga_lz4_decoder_expected_result_seq[19] = 0x42;
	yonga_lz4_decoder_expected_result_seq[20] = 0x43;
	yonga_lz4_decoder_expected_result_seq[21] = 0x44;
	yonga_lz4_decoder_expected_result_seq[22] = 0x45;
	yonga_lz4_decoder_expected_result_seq[23] = 0x46;
	yonga_lz4_decoder_expected_result_seq[24] = 0x47;
	yonga_lz4_decoder_expected_result_seq[25] = 0x48;	
	yonga_lz4_decoder_expected_result_seq[26] = 0x49;	
	yonga_lz4_decoder_expected_result_seq[27] = 0x41;
	yonga_lz4_decoder_expected_result_seq[28] = 0x42;
	yonga_lz4_decoder_expected_result_seq[29] = 0x43;
	yonga_lz4_decoder_expected_result_seq[30] = 0x41;	
	yonga_lz4_decoder_expected_result_seq[31] = 0x42;
	yonga_lz4_decoder_expected_result_seq[32] = 0x43;
	yonga_lz4_decoder_expected_result_seq[33] = 0x58;
	yonga_lz4_decoder_expected_result_seq[34] = 0x59;
	yonga_lz4_decoder_expected_result_seq[35] = 0x5a;	
	yonga_lz4_decoder_expected_result_seq[36] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[37] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[38] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[39] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[40] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[41] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[42] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[43] = 0x5a;
	yonga_lz4_decoder_expected_result_seq[44] = 0x0a;
*/

/* 
//Example -7
    int yonga_lz4_decoder_test_seq[NUM_OF_INPUT_ELEMENTS];
	yonga_lz4_decoder_test_seq[0] = 0x1c;
	yonga_lz4_decoder_test_seq[1] = 0x00;
	yonga_lz4_decoder_test_seq[2] = 0x00;
	yonga_lz4_decoder_test_seq[3] = 0x00;	
	yonga_lz4_decoder_test_seq[4] = 0x60;	
	yonga_lz4_decoder_test_seq[5] = 0x61;	
	yonga_lz4_decoder_test_seq[6] = 0x62;
	yonga_lz4_decoder_test_seq[7] = 0x63;
	yonga_lz4_decoder_test_seq[8] = 0x64;	
	yonga_lz4_decoder_test_seq[9] = 0x65;
	yonga_lz4_decoder_test_seq[10] = 0x5f;	
	yonga_lz4_decoder_test_seq[11] = 0x05;
	yonga_lz4_decoder_test_seq[12] = 0x00;	
	yonga_lz4_decoder_test_seq[13] = 0x41;	
	yonga_lz4_decoder_test_seq[14] = 0x66;
	yonga_lz4_decoder_test_seq[15] = 0x67;	
	yonga_lz4_decoder_test_seq[16] = 0x68;
	yonga_lz4_decoder_test_seq[17] = 0x5f;
	yonga_lz4_decoder_test_seq[18] = 0x0e;
	yonga_lz4_decoder_test_seq[19] = 0x00;
	yonga_lz4_decoder_test_seq[20] = 0xb0;	
	yonga_lz4_decoder_test_seq[21] = 0x66;
	yonga_lz4_decoder_test_seq[22] = 0x67;
	yonga_lz4_decoder_test_seq[23] = 0x68;	
	yonga_lz4_decoder_test_seq[24] = 0x78;
	yonga_lz4_decoder_test_seq[25] = 0x78;
	yonga_lz4_decoder_test_seq[26] = 0x78;
	yonga_lz4_decoder_test_seq[27] = 0x78;	
	yonga_lz4_decoder_test_seq[28] = 0x78;
	yonga_lz4_decoder_test_seq[29] = 0x78;
	yonga_lz4_decoder_test_seq[30] = 0x78;	
	yonga_lz4_decoder_test_seq[31] = 0x0a;
	yonga_lz4_decoder_test_seq[32] = 0x00;
	yonga_lz4_decoder_test_seq[33] = 0x00;
	yonga_lz4_decoder_test_seq[34] = 0x00;
	yonga_lz4_decoder_test_seq[35] = 0x00;
	
	int yonga_lz4_decoder_expected_result_seq[NUM_OF_OUTPUT_ELEMENTS];
	yonga_lz4_decoder_expected_result_seq[0] = 0x61;
	yonga_lz4_decoder_expected_result_seq[1] = 0x62;
	yonga_lz4_decoder_expected_result_seq[2] = 0x63;
	yonga_lz4_decoder_expected_result_seq[3] = 0x64;
	yonga_lz4_decoder_expected_result_seq[5] = 0x65;
	yonga_lz4_decoder_expected_result_seq[6] = 0x5f;	
	yonga_lz4_decoder_expected_result_seq[7] = 0x62;
	yonga_lz4_decoder_expected_result_seq[8] = 0x63;
	yonga_lz4_decoder_expected_result_seq[9] = 0x64;
	yonga_lz4_decoder_expected_result_seq[10] = 0x65;	
	yonga_lz4_decoder_expected_result_seq[11] = 0x66;
	yonga_lz4_decoder_expected_result_seq[12] = 0x67;
	yonga_lz4_decoder_expected_result_seq[13] = 0x68;
	yonga_lz4_decoder_expected_result_seq[14] = 0x5f;	
	yonga_lz4_decoder_expected_result_seq[15] = 0x61;	
	yonga_lz4_decoder_expected_result_seq[16] = 0x62;
	yonga_lz4_decoder_expected_result_seq[17] = 0x63;
	yonga_lz4_decoder_expected_result_seq[18] = 0x64;	
	yonga_lz4_decoder_expected_result_seq[19] = 0x65;	
	yonga_lz4_decoder_expected_result_seq[20] = 0x66;
	yonga_lz4_decoder_expected_result_seq[21] = 0x67;
	yonga_lz4_decoder_expected_result_seq[22] = 0x68;
	yonga_lz4_decoder_expected_result_seq[23] = 0x78;
	yonga_lz4_decoder_expected_result_seq[24] = 0x78;
	yonga_lz4_decoder_expected_result_seq[25] = 0x78;	
	yonga_lz4_decoder_expected_result_seq[26] = 0x78;	
	yonga_lz4_decoder_expected_result_seq[27] = 0x78;
	yonga_lz4_decoder_expected_result_seq[28] = 0x78;
	yonga_lz4_decoder_expected_result_seq[29] = 0x78;
	yonga_lz4_decoder_expected_result_seq[30] = 0x0a;	
*/

	int yonga_lz4_decoder_actual_result_seq[NUM_OF_OUTPUT_ELEMENTS];

	/* 
	IO Control Registers
	| DM     | VTRIP | SLOW  | AN_POL | AN_SEL | AN_EN | MOD_SEL | INP_DIS | HOLDH | OEB_N | MGMT_EN |
	| 3-bits | 1-bit | 1-bit | 1-bit  | 1-bit  | 1-bit | 1-bit   | 1-bit   | 1-bit | 1-bit | 1-bit   |
	Output: 0000_0110_0000_1110  (0x1808) = GPIO_MODE_USER_STD_OUTPUT
	| DM     | VTRIP | SLOW  | AN_POL | AN_SEL | AN_EN | MOD_SEL | INP_DIS | HOLDH | OEB_N | MGMT_EN |
	| 110    | 0     | 0     | 0      | 0      | 0     | 0       | 1       | 0     | 0     | 0       |
	
	 
	Input: 0000_0001_0000_1111 (0x0402) = GPIO_MODE_USER_STD_INPUT_NOPULL
	| DM     | VTRIP | SLOW  | AN_POL | AN_SEL | AN_EN | MOD_SEL | INP_DIS | HOLDH | OEB_N | MGMT_EN |
	| 001    | 0     | 0     | 0      | 0      | 0     | 0       | 0       | 0     | 1     | 0       |
	*/

	/* Set up the housekeeping SPI to be connected internally so	*/
	/* that external pin changes don't affect it.			*/

	reg_spimaster_config = 0xa002;	// Enable, prescaler = 2,
                                        // connect to housekeeping SPI

	// Connect the housekeeping SPI to the SPI master
	// so that the CSB line is not left floating.  This allows
	// all of the GPIO pins to be used for user functions.

    reg_mprj_io_31 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_30 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_29 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_28 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_27 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_26 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_25 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_24 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_23 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_22 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_21 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_20 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_19 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_18 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_17 = GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_io_16 = GPIO_MODE_MGMT_STD_OUTPUT;

    reg_mprj_io_15 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_14 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_13 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_12 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_11 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_10 = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_9  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_8  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_7  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_5  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_4  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_3  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_2  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_1  = GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_0  = GPIO_MODE_USER_STD_OUTPUT;

     /* Apply configuration */
    reg_mprj_xfer = 1;
    while (reg_mprj_xfer == 1);

    // Configure LA probes
	reg_la0_oenb = reg_la0_iena = 0x00000000;    // [31:0]
	reg_la1_oenb = reg_la1_iena = 0xFFFFFFFF;    // [63:32]
	reg_la2_oenb = reg_la2_iena = 0xFFFFFFFF;    // [95:64]
	reg_la3_oenb = reg_la3_iena = 0xFFFFFFFF;    // [127:96]

	// Flag start of the test
	reg_mprj_datal = 0xAB600000;

	reg_mprj_slave = 0x200; // enable WB mode

	int idx_i = 0;
	int idx_o = 0;

	int yonga_lz4_decoder_is_idle_mask = 0x1;
	int yonga_lz4_decoder_o_fifo_is_empty_mask = 0x10;
	int yonga_lz4_decoder_o_fifo_is_almost_full_mask = 0x100;
	int yonga_lz4_decoder_i_fifo_is_full_mask = 0x1000;

	read_yonga_lz4_decoder_status();
	// Send 1 byte to i_fifo in the first place to run the decoder
	if((yonga_lz4_decoder_status & yonga_lz4_decoder_is_idle_mask) == 0x1){
	  reg_la0_data = yonga_lz4_decoder_test_seq[idx_i++];
	  reg_mprj_slave = 0x01; // Write 1 byte to i_fifo
	}

	read_yonga_lz4_decoder_status();
	while((yonga_lz4_decoder_status & yonga_lz4_decoder_is_idle_mask) == 0x0){ // Check whether the decoder is running or not
	  if(yonga_lz4_decoder_status & yonga_lz4_decoder_o_fifo_is_almost_full_mask){ // Check if the o_fifo is almost full
	  	while((yonga_lz4_decoder_status & yonga_lz4_decoder_o_fifo_is_empty_mask) == 0x0){
	  		reg_mprj_slave = 0x10; // Read 1 byte from o_fifo
	  		yonga_lz4_decoder_actual_result_seq[idx_o++] = reg_la1_data; // Result is read from LA
	  		read_yonga_lz4_decoder_status();
	  	}
	  }
	  else if((yonga_lz4_decoder_status & yonga_lz4_decoder_i_fifo_is_full_mask) == 0x0){ // Check if the i_fifo is full
	  	reg_la0_data = yonga_lz4_decoder_test_seq[idx_i++];
	  	reg_mprj_slave = 0x01; // Write 1 byte to i_fifo
	  }
	  read_yonga_lz4_decoder_status();
	}

	read_yonga_lz4_decoder_status();
	if((yonga_lz4_decoder_status & yonga_lz4_decoder_o_fifo_is_empty_mask) == 0x0){ // Check if data is left in o_fifo after decoder stops running
		while((yonga_lz4_decoder_status & yonga_lz4_decoder_o_fifo_is_empty_mask) == 0x0){
	  		reg_mprj_slave = 0x10; // Read 1 byte from o_fifo
	  		yonga_lz4_decoder_actual_result_seq[idx_o++] = reg_la1_data; // Result is read from LA
	  		read_yonga_lz4_decoder_status();
	  	}
	}

	// Verify the result
	for(idx_o = 0; idx_o < NUM_OF_OUTPUT_ELEMENTS; idx_o++){
		if(yonga_lz4_decoder_actual_result_seq[idx_o] != yonga_lz4_decoder_expected_result_seq[idx_o]){
			// Flag end of the test
			reg_mprj_datal = 0xAB600000;
			break;
		}
	}
	
	// Flag end of the test
	if(idx_o == NUM_OF_OUTPUT_ELEMENTS){
		reg_mprj_datal = 0xAB610000;
	}

	// Run forever
  while(1);
}

void read_yonga_lz4_decoder_status()
{

  yonga_lz4_decoder_status = reg_mprj_slave;

}
