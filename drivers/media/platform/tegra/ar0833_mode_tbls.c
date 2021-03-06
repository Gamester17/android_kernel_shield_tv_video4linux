/*
 * ar0833_mode_tbls.c - ar0833 sensor mode table
 *
 * Copyright (c) 2013, NVIDIA CORPORATION, All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

static struct ar0833_reg Reset_tbl[] = {
	{0x301A, 0x0019},
	{AR0833_TABLE_WAIT_MS, 1},
	/* Disable Streaming */
	{0x301A, 0x0218},
	{AR0833_TABLE_END, 0x0000},
};

/*All image captures should be taken with these settings */
static struct ar0833_reg Default_3P_tbl[] = {
	{0x3042, 0x0000},
	{0x30C0, 0x1810},
	{0x30C8, 0x0018},
	{0x30D2, 0x0000},
	{0x30D4, 0xD030},
	{0x30D6, 0x2200},
	{0x30DA, 0x0080},
	{0x30DC, 0x0080},
	{0x30EE, 0x0340},
	{0x316A, 0x8800},
	{0x316C, 0x8200},
	{0x3172, 0x0286},
	{0x3174, 0x8000},
	{0x317C, 0xE103},
	{0x3180, 0xF0FF},
	{0x31E0, 0x0741},
	{0x3ECC, 0x0056},
	{0x3ED0, 0xA8AA},
	{0x3ED2, 0xAAA8},
	{0x3ED4, 0x8ACC},
	{0x3ED8, 0x7288},
	{0x3EDA, 0x77CA},
	{0x3EDE, 0x6664},
	{0x3EE0, 0x26D5},
	{0x3EE4, 0x1548},
	{0x3EE6, 0xB10C},
	{0x3EE8, 0x6E79},
	{0x3EFE, 0x77CC},
	{0x31E6, 0x0000},
	{0x3F00, 0x0028},
	{0x3F02, 0x0140},
	{0x3F04, 0x0002},
	{0x3F06, 0x0004},
	{0x3F08, 0x0008},
	{0x3F0A, 0x0B09},
	{0x3F0C, 0x0302},
	{0x3F10, 0x0505},
	{0x3F12, 0x0303},
	{0x3F14, 0x0101},
	{0x3F16, 0x2020},
	{0x3F18, 0x0404},
	{0x3F1A, 0x7070},
	{0x3F1C, 0x003A},
	{0x3F1E, 0x003C},
	{0x3F2C, 0x2210},
	{0x3F40, 0x2020},
	{0x3F42, 0x0808},
	{0x3F44, 0x0101},
	{AR0833_TABLE_END, 0x0000},
};

u8 Sequencer_Adjustment_v7p2_data[] = {
	0x04, 0x70, 0xC8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x40, 0x14,
	0x0E, 0x23, 0x82, 0x41, 0x5C, 0x54, 0x6E, 0x42, 0x00, 0xC0, 0x5D,
	0x80, 0x5A, 0x80, 0x57, 0x84, 0x64, 0x80, 0x55, 0x86, 0x64, 0x80,
	0x65, 0x88, 0x65, 0x84, 0x58, 0x80, 0x00, 0xC0, 0x80, 0x30, 0x0C,
	0x84, 0x42, 0x82, 0x10, 0x30, 0xA6, 0x5B, 0x80, 0x63, 0x8B, 0x30,
	0x0C, 0xA5, 0x59, 0x84, 0x6C, 0x80, 0x6D, 0x81, 0x5F, 0x60, 0x61,
	0x10, 0x30, 0x88, 0x66, 0x83, 0x6E, 0x80, 0x64, 0x87, 0x64, 0x30,
	0x50, 0xDA, 0x6A, 0x83, 0x6B, 0xA6, 0x30, 0x94, 0x67, 0x84, 0x65,
	0x82, 0x4D, 0x83, 0x65, 0x30, 0x50, 0xA6, 0x58, 0x43, 0x06, 0x00,
	0x8D, 0x45, 0xA0, 0x45, 0x6A, 0x83, 0x6B, 0x06, 0x00, 0x81, 0x43,
	0x9C, 0x58, 0x84, 0x30, 0x90, 0x67, 0x64, 0x88, 0x64, 0x80, 0x65,
	0x88, 0x65, 0x82, 0x10, 0xC0, 0xEB, 0x10, 0xC0, 0x66, 0x85, 0x64,
	0x81, 0x17, 0x00, 0x80, 0x20, 0x0D, 0x80, 0x18, 0x0C, 0x80, 0x64,
	0x30, 0x60, 0x41, 0x82, 0x42, 0xB2, 0x42, 0x80, 0x40, 0x81, 0x40,
	0x80, 0x41, 0x80, 0x42, 0x80, 0x43, 0x83, 0x06, 0xC0, 0x88, 0x44,
	0x87, 0x6A, 0x83, 0x6B, 0x92, 0x44, 0x88, 0x06, 0xC8, 0x81, 0x41,
	0x85, 0x30, 0xA4, 0x67, 0x85, 0x65, 0x87, 0x65, 0x30, 0x60, 0x8D,
	0x42, 0x82, 0x40, 0x82, 0x40, 0x80, 0x41, 0x80, 0x42, 0x80, 0x43,
	0x83, 0x06, 0xC0, 0x88, 0x44, 0x9C, 0x44, 0x88, 0x06, 0xC8, 0x85,
	0x41, 0x6A, 0x83, 0x6B, 0xA0, 0x42, 0x82, 0x40, 0x6C, 0x3A, 0xA8,
	0x80, 0x28, 0x30, 0x70, 0x6F, 0x40, 0x14, 0x0E, 0x23, 0xC2, 0x41,
	0x82, 0x42, 0x00, 0xC0, 0x5D, 0x80, 0x5A, 0x80, 0x57, 0x84, 0x64,
	0x80, 0x55, 0x86, 0x64, 0x80, 0x65, 0x88, 0x65, 0x82, 0x54, 0x80,
	0x58, 0x80, 0x00, 0xC0, 0x86, 0x42, 0x82, 0x10, 0x30, 0x9C, 0x5C,
	0x80, 0x6E, 0x86, 0x5B, 0x80, 0x63, 0x9E, 0x59, 0x8C, 0x5E, 0x8A,
	0x6C, 0x80, 0x6D, 0x81, 0x5F, 0x60, 0x61, 0x88, 0x10, 0x30, 0x66,
	0x83, 0x6E, 0x80, 0x64, 0x87, 0x64, 0x30, 0x50, 0xD3, 0x6A, 0x6B,
	0xAD, 0x30, 0x94, 0x67, 0x84, 0x65, 0x82, 0x4D, 0x83, 0x65, 0x30,
	0x50, 0xA7, 0x43, 0x06, 0x00, 0x8D, 0x45, 0x9A, 0x6A, 0x6B, 0x45,
	0x85, 0x06, 0x00, 0x81, 0x43, 0x8A, 0x6F, 0x96, 0x30, 0x90, 0x67,
	0x64, 0x88, 0x64, 0x80, 0x65, 0x82, 0x10, 0xC0, 0x84, 0x65, 0xEF,
	0x10, 0xC0, 0x66, 0x85, 0x64, 0x81, 0x17, 0x00, 0x80, 0x20, 0x0D,
	0x80, 0x18, 0x0C, 0x80, 0x64, 0x30, 0x60, 0x41, 0x82, 0x42, 0xB2,
	0x42, 0x80, 0x40, 0x82, 0x40, 0x4C, 0x45, 0x92, 0x6A, 0x6B, 0x9B,
	0x45, 0x81, 0x4C, 0x40, 0x8C, 0x30, 0xA4, 0x67, 0x85, 0x65, 0x87,
	0x65, 0x30, 0x60, 0xD3, 0x6A, 0x6B, 0xAC, 0x6C, 0x32, 0xA8, 0x80,
	0x28, 0x30, 0x70, 0x00, 0x80, 0x40, 0x4C, 0xBD, 0x00, 0x0E, 0xBE,
	0x44, 0x88, 0x44, 0xBC, 0x78, 0x09, 0x00, 0x89, 0x04, 0x80, 0x80,
	0x02, 0x40, 0x86, 0x09, 0x00, 0x8E, 0x09, 0x00, 0x80, 0x02, 0x40,
	0x80, 0x04, 0x80, 0x88, 0x7D, 0x9E, 0x86, 0x09, 0x00, 0x87, 0x7A,
	0x00, 0x0E, 0xC3, 0x79, 0x4C, 0x40, 0xBF, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

u8 Sequencer_iHDR_v12p12_data[] = {
	0x04, 0x87, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x40, 0x14,
	0x0E, 0x23, 0x82, 0x41, 0x5C, 0x54, 0x6E, 0x42, 0x00, 0xC0, 0x5D,
	0x80, 0x5A, 0x80, 0x57, 0x84, 0x64, 0x80, 0x55, 0x84, 0x00, 0xC4,
	0x10, 0x30, 0x64, 0x80, 0x65, 0x88, 0x65, 0x88, 0x30, 0x0C, 0xB0,
	0x5B, 0x80, 0x63, 0x8B, 0x30, 0x0C, 0xA2, 0x58, 0x87, 0x6C, 0x80,
	0x6D, 0x81, 0x5F, 0x60, 0x61, 0xA3, 0x59, 0x8C, 0x10, 0x30, 0x88,
	0x66, 0x83, 0x6E, 0x80, 0x64, 0x87, 0x64, 0x30, 0x50, 0xDA, 0x6A,
	0x83, 0x6B, 0xA6, 0x30, 0x94, 0x67, 0x84, 0x65, 0x82, 0x4D, 0x83,
	0x65, 0x30, 0x50, 0xA6, 0x58, 0x43, 0x06, 0x00, 0x8D, 0x45, 0xA0,
	0x45, 0x6A, 0x83, 0x6B, 0x06, 0x00, 0x81, 0x43, 0x9C, 0x58, 0x84,
	0x30, 0x90, 0x67, 0x64, 0x88, 0x64, 0x80, 0x65, 0x88, 0x65, 0x82,
	0x10, 0xC0, 0xC3, 0x10, 0xC0, 0x66, 0x85, 0x64, 0x81, 0x17, 0x00,
	0x80, 0x20, 0x0D, 0x80, 0x18, 0x0C, 0x80, 0x64, 0x30, 0x60, 0x41,
	0x82, 0x42, 0xB2, 0x42, 0x80, 0x40, 0x81, 0x40, 0x80, 0x41, 0x80,
	0x42, 0x80, 0x43, 0x83, 0x06, 0xC0, 0x88, 0x44, 0x87, 0x6A, 0x83,
	0x6B, 0x92, 0x44, 0x88, 0x06, 0xC8, 0x81, 0x41, 0x85, 0x30, 0xA4,
	0x67, 0x85, 0x65, 0x87, 0x65, 0x30, 0x60, 0x8D, 0x42, 0x82, 0x40,
	0x82, 0x40, 0x80, 0x41, 0x80, 0x42, 0x80, 0x43, 0x83, 0x06, 0xC0,
	0x88, 0x44, 0x9C, 0x44, 0x88, 0x06, 0xC8, 0x85, 0x41, 0x6A, 0x83,
	0x6B, 0xA0, 0x42, 0x82, 0x40, 0x6C, 0x3A, 0xA8, 0x80, 0x28, 0x30,
	0x40, 0x80, 0x41, 0x80, 0x42, 0x80, 0x43, 0x88, 0x06, 0xC0, 0x83,
	0x44, 0xA0, 0x44, 0x88, 0x06, 0xC8, 0x81, 0x41, 0xA6, 0x42, 0x82,
	0x40, 0x82, 0x40, 0x80, 0x41, 0x80, 0x42, 0x80, 0x43, 0x83, 0x06,
	0xC0, 0x88, 0x44, 0xA0, 0x44, 0x88, 0x06, 0xC8, 0x81, 0x41, 0xA6,
	0x42, 0x82, 0x40, 0x80, 0x70, 0x00, 0x6F, 0x40, 0x14, 0x0E, 0x23,
	0xC2, 0x41, 0x82, 0x42, 0x00, 0xC0, 0x5D, 0x80, 0x5A, 0x80, 0x57,
	0x84, 0x64, 0x80, 0x55, 0x86, 0x64, 0x80, 0x65, 0x88, 0x65, 0x82,
	0x54, 0x80, 0x58, 0x80, 0x00, 0xC0, 0x86, 0x42, 0x82, 0x10, 0x30,
	0x9C, 0x5C, 0x80, 0x6E, 0x86, 0x5B, 0x80, 0x63, 0x9E, 0x59, 0x8C,
	0x5E, 0x8A, 0x6C, 0x80, 0x6D, 0x81, 0x5F, 0x60, 0x61, 0x10, 0x30,
	0x88, 0x66, 0x83, 0x6E, 0x80, 0x64, 0x87, 0x64, 0x30, 0x50, 0xD3,
	0x6A, 0x6B, 0xAD, 0x30, 0x94, 0x67, 0x84, 0x65, 0x82, 0x4D, 0x83,
	0x65, 0x30, 0x50, 0xA7, 0x43, 0x06, 0x00, 0x8D, 0x45, 0x9A, 0x6A,
	0x6B, 0x45, 0x85, 0x06, 0x00, 0x81, 0x43, 0x8A, 0x6F, 0x96, 0x30,
	0x90, 0x67, 0x64, 0x88, 0x64, 0x80, 0x65, 0x82, 0x10, 0xC0, 0x84,
	0x65, 0xEF, 0x10, 0xC0, 0x66, 0x85, 0x64, 0x81, 0x17, 0x00, 0x80,
	0x20, 0x0D, 0x80, 0x18, 0x0C, 0x80, 0x64, 0x30, 0x60, 0x41, 0x82,
	0x42, 0xB2, 0x42, 0x80, 0x40, 0x82, 0x40, 0x4C, 0x45, 0x92, 0x6A,
	0x6B, 0x9B, 0x45, 0x81, 0x4C, 0x40, 0x8C, 0x30, 0xA4, 0x67, 0x85,
	0x65, 0x87, 0x65, 0x30, 0x60, 0xD3, 0x6A, 0x6B, 0xAC, 0x6C, 0x32,
	0xA8, 0x80, 0x28, 0x30, 0x70, 0x00, 0x80, 0x40, 0x4C, 0xBD, 0x00,
	0x0E, 0xBE, 0x44, 0x88, 0x44, 0xBC, 0x78, 0x00, 0x00,
};

static struct ar0833_reg_blob Sequencer_iHDR_v12p12 = {
	.addr = 0x3D00,
	.size = sizeof(Sequencer_iHDR_v12p12_data),
	.data = Sequencer_iHDR_v12p12_data,
};

static struct ar0833_reg_blob Sequencer_Adjustment_v7p2 = {
	.addr = 0x3D00,
	.size = sizeof(Sequencer_Adjustment_v7p2_data),
	.data = Sequencer_Adjustment_v7p2_data,
};

u8 Sequencer_iHDR_v7p2_data[] = {
	0x04, 0x88, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x40, 0x14,
	0x0E, 0x23, 0x82, 0x41, 0x5C, 0x54, 0x6E, 0x42, 0x00, 0xC0, 0x5D,
	0x80, 0x5A, 0x80, 0x57, 0x84, 0x64, 0x80, 0x55, 0x86, 0x64, 0x80,
	0x65, 0x88, 0x65, 0x84, 0x58, 0x80, 0x00, 0xC0, 0x80, 0x30, 0x0C,
	0x84, 0x42, 0x82, 0x10, 0x30, 0xA6, 0x5B, 0x80, 0x63, 0x8B, 0x30,
	0x0C, 0xA5, 0x59, 0x84, 0x6C, 0x80, 0x6D, 0x81, 0x5F, 0x60, 0x61,
	0x10, 0x30, 0x88, 0x66, 0x83, 0x6E, 0x80, 0x64, 0x87, 0x64, 0x30,
	0x50, 0xDA, 0x6A, 0x83, 0x6B, 0xA6, 0x30, 0x94, 0x67, 0x84, 0x65,
	0x82, 0x4D, 0x83, 0x65, 0x30, 0x50, 0xA6, 0x58, 0x43, 0x06, 0x00,
	0x8D, 0x45, 0xA0, 0x45, 0x6A, 0x83, 0x6B, 0x06, 0x00, 0x81, 0x43,
	0x9C, 0x58, 0x84, 0x30, 0x90, 0x67, 0x64, 0x88, 0x64, 0x80, 0x65,
	0x88, 0x65, 0x82, 0x10, 0xC0, 0xEB, 0x10, 0xC0, 0x66, 0x85, 0x64,
	0x81, 0x17, 0x00, 0x80, 0x20, 0x0D, 0x80, 0x18, 0x0C, 0x80, 0x64,
	0x30, 0x60, 0x41, 0x82, 0x42, 0xB2, 0x42, 0x80, 0x40, 0x81, 0x40,
	0x80, 0x41, 0x80, 0x42, 0x80, 0x43, 0x83, 0x06, 0xC0, 0x88, 0x44,
	0x87, 0x6A, 0x83, 0x6B, 0x92, 0x44, 0x88, 0x06, 0xC8, 0x81, 0x41,
	0x85, 0x30, 0xA4, 0x67, 0x85, 0x65, 0x87, 0x65, 0x30, 0x60, 0x8D,
	0x42, 0x82, 0x40, 0x82, 0x40, 0x80, 0x41, 0x80, 0x42, 0x80, 0x43,
	0x83, 0x06, 0xC0, 0x88, 0x44, 0x9C, 0x44, 0x88, 0x06, 0xC8, 0x85,
	0x41, 0x6A, 0x83, 0x6B, 0xA0, 0x42, 0x82, 0x40, 0x6C, 0x3A, 0xA8,
	0x80, 0x28, 0x30, 0x40, 0x80, 0x41, 0x80, 0x42, 0x80, 0x43, 0x88,
	0x06, 0xC0, 0x83, 0x44, 0xA0, 0x44, 0x88, 0x06, 0xC8, 0x81, 0x41,
	0xA6, 0x42, 0x82, 0x40, 0x82, 0x40, 0x80, 0x41, 0x80, 0x42, 0x80,
	0x43, 0x83, 0x06, 0xC0, 0x88, 0x44, 0xA0, 0x44, 0x88, 0x06, 0xC8,
	0x81, 0x41, 0xA6, 0x42, 0x82, 0x40, 0x80, 0x70, 0x6F, 0x40, 0x14,
	0x0E, 0x23, 0xC2, 0x41, 0x82, 0x42, 0x00, 0xC0, 0x5D, 0x80, 0x5A,
	0x80, 0x57, 0x84, 0x64, 0x80, 0x55, 0x86, 0x64, 0x80, 0x65, 0x88,
	0x65, 0x82, 0x54, 0x80, 0x58, 0x80, 0x00, 0xC0, 0x86, 0x42, 0x82,
	0x10, 0x30, 0x9C, 0x5C, 0x80, 0x6E, 0x86, 0x5B, 0x80, 0x63, 0x9E,
	0x59, 0x8C, 0x5E, 0x8A, 0x6C, 0x80, 0x6D, 0x81, 0x5F, 0x60, 0x61,
	0x10, 0x30, 0x88, 0x66, 0x83, 0x6E, 0x80, 0x64, 0x87, 0x64, 0x30,
	0x50, 0xD3, 0x6A, 0x6B, 0xAD, 0x30, 0x94, 0x67, 0x84, 0x65, 0x82,
	0x4D, 0x83, 0x65, 0x30, 0x50, 0xA7, 0x43, 0x06, 0x00, 0x8D, 0x45,
	0x9A, 0x6A, 0x6B, 0x45, 0x85, 0x06, 0x00, 0x81, 0x43, 0x8A, 0x6F,
	0x96, 0x30, 0x90, 0x67, 0x64, 0x88, 0x64, 0x80, 0x65, 0x82, 0x10,
	0xC0, 0x84, 0x65, 0xEF, 0x10, 0xC0, 0x66, 0x85, 0x64, 0x81, 0x17,
	0x00, 0x80, 0x20, 0x0D, 0x80, 0x18, 0x0C, 0x80, 0x64, 0x30, 0x60,
	0x41, 0x82, 0x42, 0xB2, 0x42, 0x80, 0x40, 0x82, 0x40, 0x4C, 0x45,
	0x92, 0x6A, 0x6B, 0x9B, 0x45, 0x81, 0x4C, 0x40, 0x8C, 0x30, 0xA4,
	0x67, 0x85, 0x65, 0x87, 0x65, 0x30, 0x60, 0xD3, 0x6A, 0x6B, 0xAC,
	0x6C, 0x32, 0xA8, 0x80, 0x28, 0x30, 0x70, 0x00, 0x80, 0x40, 0x4C,
	0xBD, 0x00, 0x0E, 0xBE, 0x44, 0x88, 0x44, 0xBC, 0x78,
};

static struct ar0833_reg_blob Sequencer_iHDR_v7p2 = {
	.addr = 0x3D00,
	.size = sizeof(Sequencer_iHDR_v7p2_data),
	.data = Sequencer_iHDR_v7p2_data,
};

static struct ar0833_reg MipiTimings[] = {
	{0x31B0, 0x0060},
	{0x31B2, 0x0042},
	{0x31B4, 0x4C36},
	{0x31B6, 0x5218},
	{0x31B8, 0x404A},
	{0x31BA, 0x028A},
	{0x31BC, 0x0008},
	{AR0833_TABLE_WAIT_MS, 1},
	{AR0833_TABLE_END, 0x0000},
};

enum {
	AR0833_TBL_RESET,
	AR0833_TBL_DEF3P,
	AR0833_TBL_SEQ_ADJ_V7P2,
	AR0833_TBL_SEQ_HDR_V12P12,
	AR0833_TBL_SEQ_HDR_V7P2,
	AR0833_TBL_MIPITM,
	NUM_OF_SUBTBLS,
};

static void *sub_tbls[] = {
	[AR0833_TBL_RESET] = Reset_tbl,
	[AR0833_TBL_DEF3P] = Default_3P_tbl,
	[AR0833_TBL_SEQ_ADJ_V7P2] = &Sequencer_Adjustment_v7p2,
	[AR0833_TBL_SEQ_HDR_V12P12] = &Sequencer_iHDR_v12p12,
	[AR0833_TBL_SEQ_HDR_V7P2] = &Sequencer_iHDR_v7p2,
	[AR0833_TBL_MIPITM] = MipiTimings,
};

/*
 * Initialize
 * XMCLK=24000000
 * PAUSE=1
 * STATE= Master Clock, 292800000
 * REG=0x301A, 0x0218, Disable Streaming
 * LOAD=Default_3P
 * LOAD=Sequencer_Adjustment_v7p2
 */
static struct ar0833_reg mode_3264x2448_30fps[] = {
	{AR0833_TABLE_CALL, AR0833_TBL_RESET},
	{AR0833_TABLE_CALL, AR0833_TBL_DEF3P},
	{AR0833_TABLE_WAIT_MS, 1},
	{AR0833_TABLE_BLOB, AR0833_TBL_SEQ_ADJ_V7P2},

	/* PLL Configuration */
	{0x0300, 0x0005},	/*VT_PIX_CLK_DIV=5 */
	{0x0302, 0x0001},	/*VT_SYS_CLK_DIV=1 */
	{0x0304, 0x0004},	/*PRE_PLL_CLK_DIV=4 Note: 24MHz/4=6MHz */
	/*PLL_MULTIPLIER=122 Note: Running at 732MHz */
	{0x0306, 0x007A},
	{0x0308, 0x000A},	/*OP_PIX_CLK_DIV=10 */
	{0x030A, 0x0001},	/*OP_SYS_CLK_DIV=1 */
	{0x3064, 0x7800},
	{AR0833_TABLE_WAIT_MS, 1},

	/* LOAD=MIPI Timings */
	{AR0833_TABLE_CALL, AR0833_TBL_MIPITM},

	/* Frame Timing */
	{0x0340, 0x0A10},	/*FRAME_LENGTH_LINES */
	{0x0342, 0x0ECC},	/*LINE_LENGTH_PCK */
	{0x0344, 0x0008},	/*X_ADDR_START 8 */
	{0x0346, 0x0008},	/*Y_ADDR_START 8 */
	{0x0348, 0x0CC7},	/*X_ADDR_END 3271 */
	{0x034A, 0x0997},	/*Y_ADDR_END 2455 */
	{0x034C, 0x0CC0},	/*X_OUTPUT_SIZE 3264 */
	{0x034E, 0x0990},	/*Y_OUTPUT_SIZE 2448 */
	{0x3040, 0x4041},	/*X_ODD_INC & Y_ODD_INC */
	{0x0202, 0x0A01},	/*COARSE_INTEGRATION_TIME */
	{0x305E, 0x1000},   /* gain */
	/*Scaling Enabling: 0= disable, 1= x-dir, 2= xy-dir */
	{0x0400, 0x0000},
	{0x0402, 0x0000},	/*Co-Site Scaling */
	{0x0404, 0x0010},	/*Scale_M = 16 */
	{0x0408, 0x1010},
	{0x040A, 0x0210},
	{0x306E, 0x9080},	/*Data Path Select */
	{0x301A, 0x001C},	/* Enable Streaming */
	{AR0833_TABLE_END, 0x0000},
};

static struct ar0833_reg mode_3264x2448_HDR_30fps[] = {
	{AR0833_TABLE_CALL, AR0833_TBL_RESET},
	{AR0833_TABLE_CALL, AR0833_TBL_DEF3P},

	{0x0300, 0x0004},   /* VT_PIX_CLK_DIV = 4 */
	{0x0304, 0x0004},
	{0x0306, 0x007A},

	/* LOAD=MIPI Timings */
	{AR0833_TABLE_CALL, AR0833_TBL_MIPITM},

	{0x0340,   2579},   /* FLL = 2579 */
	{0x0342,   4832},   /* LLPCK = 4832 */
	{0x0344, 0x0008},	/*X_ADDR_START */
	{0x0346, 0x0008},	/*Y_ADDR_START */
	{0x0348, 0x0CC7},	/*X_ADDR_END */
	{0x034A, 0x0997},	/*Y_ADDR_END */
	{0x034C, 0x0CC0},	/*X_OUTPUT_SIZE */
	{0x034E, 0x0990},	/*Y_OUTPUT_SIZE */
	{0x0202,   2400},   /* T1 Coarse Integration */
	{0x3088,    300},   /* T2 Coarse Integration */
	{0x305E, 0x1000},   /* gain */
	{0x3040, 0x4041},	/*Default read mode */

	/* Disable Streaming */
	{0x301A, 0x0218},
	{AR0833_TABLE_WAIT_MS, 1},
	/*LOAD=Sequencer_iHDR_v7p2 */
	{AR0833_TABLE_BLOB, AR0833_TBL_SEQ_HDR_V12P12},
	/* Enable iHDR readout */
	{0x303E, 0x0001},
	/* Other Settings
		BLC Options need to be set to not use auto calib in iHDR */
	{0x30C0, 0x2001},
	{0x30C8, 0x2020},
	/*Disable Defect Correction, check for 1DDC? -> REG= 0x31E0, 0x01F1 */
	{0x31E0, 0x0000},

	/* No3 iHDR*/
	{0x316C, 0x8200},
	{0x3EFE, 0x2222},
	{0x3EE6, 0xB10C},
	{0x3ED8, 0x7288},

	{0x301A, 0x001C},   /* Enable Streaming */
	{AR0833_TABLE_END, 0x0000},
};

/*
 * Initialize
 * XMCLK=24000000
 * PAUSE=1
 * STATE= Master Clock, 292800000
 * REG=0x301A, 0x0218, Disable Streaming
 * LOAD=Default_3P
 * LOAD=Sequencer_Adjustment_v7p2
 */
static struct ar0833_reg mode_1920x1080_HDR_30fps[] = {
	{AR0833_TABLE_CALL, AR0833_TBL_RESET},
	{AR0833_TABLE_CALL, AR0833_TBL_DEF3P},

	{0x0304, 0x0004},
	{0x0306, 0x007A},

	/* LOAD=MIPI Timings */
	{AR0833_TABLE_CALL, AR0833_TBL_MIPITM},

	{0x0340,   1990},	/* FLL = 2579 */
	{0x0342,   4832},	/* LLPCK = 4832v */
	{0x0344, 0x02A0},	/*X_ADDR_START 672 */
	{0x0346, 0x0130},	/*Y_ADDR_START 304 */
	{0x0348, 0x0A1F},	/*X_ADDR_END 2591 */
	{0x034A, 0x0567},	/*Y_ADDR_END 1751 */
	{0x034C, 0x0780},	/*X_OUTPUT_SIZE 1920 */
	{0x034E, 0x0438},	/*Y_OUTPUT_SIZE 1080 */
	{0x3040, 0x4041},	/*X_ODD_INC and Y_ODD_INC */
	{0x0202,   1952},	/* T1 Coarse Integration */
	{0x3088,    244},	/* T2 Coarse Integration */
	{0x305E, 0x1000},   /* gain */

	/* Disable Streaming */
	{0x301A, 0x0218},
	{AR0833_TABLE_WAIT_MS, 1},
	{AR0833_TABLE_BLOB, AR0833_TBL_SEQ_HDR_V7P2},

	{0x303E, 0x0001},	/* Enable iHDR readout */
	/* Other Settings
	   BLC Options need to be set to not use auto calib in iHDR */
	{0x30C0, 0x2001},
	{0x30C8, 0x2020},
	/*Disable Defect Correction, check for 1DDC? -> REG= 0x31E0, 0x01F1 */
	{0x31E0, 0x0000},
	/*BITFIELD=0x301A,0x0004,0  Disable Streaming */
	{0x316C, 0x8200},	/* auto switch Txlo at 2x */
	{0x3EFE, 0xC1C1},	/* Txlo Level: Txlo1=-12,Txlo0=+1 */
	{0x3EE6, 0xB10D},	/* Txlo polarity: Txlo1-,Txlo0+ */
	{0x3ED8, 0x7288},	/* Txlo booster setting */
	{0x301A, 0x001C},	/* Enable Streaming */
	{AR0833_TABLE_END, 0x0000},
};

/*
 * Initialize
 * XMCLK=24000000
 * PAUSE=1
 * STATE= Master Clock, 292800000
 * REG=0x301A, 0x0218, Disable Streaming
 * LOAD=Default_3P
 * LOAD=Sequencer_Adjustment_v7p2
 */
static struct ar0833_reg mode_3264x1836_HDR_30fps[] = {
	{AR0833_TABLE_CALL, AR0833_TBL_RESET},
	{AR0833_TABLE_CALL, AR0833_TBL_DEF3P},

	{0x0300, 0x0005},   /* VT_PIX_CLK_DIV = 5 */
	{0x0304, 0x0004},
	{0x0306, 0x007A},

	/* LOAD=MIPI Timings */
	{AR0833_TABLE_CALL, AR0833_TBL_MIPITM},

	{0x0340,   1990},	/* FLL = 2579 */
	{0x0342,   4832},	/* LLPCK = 4832 */
	{0x0344, 0x0008},	/*X_ADDR_START */
	{0x0346, 0x0130},	/*Y_ADDR_START */
	{0x0348, 0x0CC7},	/*X_ADDR_END */
	{0x034A, 0x085B},	/*Y_ADDR_END */
	{0x034C, 0x0CC0},	/*X_OUTPUT_SIZE */
	{0x034E, 0x072C},	/*Y_OUTPUT_SIZE */
	{0x3040, 0x4041},	/*Default read mode */
	{0x0202,   1952},	/* T1 Coarse Integration */
	{0x3088,    244},	/* T2 Coarse Integration */
	{0x305E, 0x1000},   /* gain */

	/* Disable Streaming */
	{0x301A, 0x0218},
	{AR0833_TABLE_WAIT_MS, 1},
	/*LOAD=Sequencer_iHDR_v7p2 */
	{AR0833_TABLE_BLOB, AR0833_TBL_SEQ_HDR_V7P2},
	/* Enable iHDR readout */
	{0x303E, 0x0001},
	/* Other Settings
	   BLC Options need to be set to not use auto calib in iHDR */
	{0x30C0, 0x2001},
	{0x30C8, 0x2020},
	/*Disable Defect Correction, check for 1DDC? -> REG= 0x31E0, 0x01F1 */
	{0x31E0, 0x0000},
	{0x301A, 0x001C},	/* Enable Streaming */
	{AR0833_TABLE_END, 0x0000},
};

/*
 * Initialize
 * XMCLK=24000000
 * PAUSE=1
 * STATE= Master Clock, 292800000
 * REG=0x301A, 0x0218, Disable Streaming
 * LOAD=Default_3P
 * LOAD=Sequencer_Adjustment_v7p2
 */
static struct ar0833_reg mode_1920x1080_30fps[] = {
	{AR0833_TABLE_CALL, AR0833_TBL_RESET},
	{AR0833_TABLE_CALL, AR0833_TBL_DEF3P},
	{AR0833_TABLE_WAIT_MS, 1},
	{AR0833_TABLE_BLOB, AR0833_TBL_SEQ_ADJ_V7P2},

	/*PLL Configuration */
	{0x0300, 0x0005},	/*VT_PIX_CLK_DIV=5 */
	{0x0302, 0x0001},	/*VT_SYS_CLK_DIV=1 */
	{0x0304, 0x0004},	/*PRE_PLL_CLK_DIV=4 Note: 24MHz/4=6MHz */
	{0x0306, 0x007A},	/*PLL_MULTIPLIER=122 Note: Running at 732MHz */
	{0x0308, 0x000A},	/*OP_PIX_CLK_DIV=10 */
	{0x030A, 0x0001},	/*OP_SYS_CLK_DIV=1 */
	{0x3064, 0x7800},
	{AR0833_TABLE_WAIT_MS, 1},

	/*LOAD=MIPI Timings */
	{AR0833_TABLE_CALL, AR0833_TBL_MIPITM},

	{0x0340, 0x079D},	/*FRAME_LENGTH_LINES */
	{0x0342, 0x139E},	/*LINE_LENGTH_PCK */
	{0x0344, 0x0008},	/*X_ADDR_START */
	{0x0346, 0x0130},	/*Y_ADDR_START */
	{0x0348, 0x0CC7},	/*X_ADDR_END */
	{0x034A, 0x085B},	/*Y_ADDR_END */
	{0x034C, 0x0780},	/*X_OUTPUT_SIZE */
	{0x034E, 0x0438},	/*Y_OUTPUT_SIZE */
	{0x3040, 0x4041},	/*X_ODD_INC & Y_ODD_INC */
	{0x0202, 0x0700},	/*COARSE_INTEGRATION_TIME */
	{0x305E, 0x1000},   /* gain */
	/*Scaling Enabling: 0= disable, 1= x-dir, 2= xy-dir */
	{0x0400, 0x0002},
	{0x0402, 0x0000},	/*Co-Site Scaling */
	{0x0404, 0x001A},	/*Scale_M = 16 */
	{0x0408, 0x0B0C},
	{0x040A, 0x018C},
	{0x306E, 0x9090},	/*Data Path Select */
	{0x301A, 0x001C},	/* Enable Streaming */
	{AR0833_TABLE_END, 0x0000},
};

/*
 * Initialize
 * XMCLK=24000000
 * PAUSE=1
 * STATE= Master Clock, 292800000
 * REG=0x301A, 0x0218, Disable Streaming
 * LOAD=Default_3P
 * LOAD=Sequencer_Adjustment_v7p2
 */
static struct ar0833_reg mode_3264x1836_30fps[] = {
	{AR0833_TABLE_CALL, AR0833_TBL_RESET},
	{AR0833_TABLE_CALL, AR0833_TBL_DEF3P},
	{AR0833_TABLE_WAIT_MS, 1},
	{AR0833_TABLE_BLOB, AR0833_TBL_SEQ_ADJ_V7P2},

	/*PLL Configuration */
	{0x0300, 0x0005},	/*VT_PIX_CLK_DIV=5 */
	{0x0302, 0x0001},	/*VT_SYS_CLK_DIV=1 */
	{0x0304, 0x0004},	/*PRE_PLL_CLK_DIV=4 Note: 24MHz/4=6MHz */
	{0x0306, 0x007A},	/*PLL_MULTIPLIER=122 Note: Running at 732MHz */
	{0x0308, 0x000A},	/*OP_PIX_CLK_DIV=10 */
	{0x030A, 0x0001},	/*OP_SYS_CLK_DIV=1 */
	{0x3064, 0x7800},
	{AR0833_TABLE_WAIT_MS, 1},

	{AR0833_TABLE_CALL, AR0833_TBL_MIPITM},

	/*Frame Timing */
	{0x0340, 0x079D},	/*FRAME_LENGTH_LINES */
	{0x0342, 0x139E},	/*LINE_LENGTH_PCK */
	{0x0344, 0x0008},	/*X_ADDR_START */
	{0x0346, 0x0130},	/*Y_ADDR_START */
	{0x0348, 0x0CC7},	/*X_ADDR_END */
	{0x034A, 0x085B},	/*Y_ADDR_END */
	{0x034C, 0x0CC0},	/*X_OUTPUT_SIZE */
	{0x034E, 0x072C},	/*Y_OUTPUT_SIZE */
	{0x3040, 0x4041},	/*X_ODD_INC & Y_ODD_INC */
	{0x0202, 0x0700},	/*COARSE_INTEGRATION_TIME */
	{0x305E, 0x1000},   /* gain */
	/*Scaling Enabling: 0= disable, 1= x-dir, 2= xy-dir */
	{0x0400, 0x0000},
	{0x0402, 0x0000},	/*Co-Site Scaling */
	{0x0404, 0x0010},	/*Scale_M = 16 */
	{0x0408, 0x1010},
	{0x040A, 0x0210},
	{0x306E, 0x9080},	/*Data Path Select */
	{0x301A, 0x001C},	/* Enable Streaming */
	{AR0833_TABLE_END, 0x0000},
};
