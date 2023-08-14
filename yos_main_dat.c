//======================================================
//    yos_main_dat.c
//    Sample Yoshi Data 
//
//    Copyright (C) 1999-2001 NINTENDO Co.,Ltd.
//======================================================

#include <Agb.h>

//Sin Table
//[0] -> [0xff]
const s16 fix_sin[]={
	0x0000,0x0006,0x000c,0x0012,0x0019,0x001f,0x0025,0x002b,
	0x0031,0x0038,0x003e,0x0044,0x004a,0x0050,0x0056,0x005c,
	0x0061,0x0067,0x006d,0x0073,0x0078,0x007e,0x0083,0x0088,
	0x008e,0x0093,0x0098,0x009d,0x00a2,0x00a7,0x00ab,0x00b0,
	0x00b5,0x00b9,0x00bd,0x00c1,0x00c5,0x00c9,0x00cd,0x00d1,
	0x00d4,0x00d8,0x00db,0x00de,0x00e1,0x00e4,0x00e7,0x00ea,
	0x00ec,0x00ee,0x00f1,0x00f3,0x00f4,0x00f6,0x00f8,0x00f9,
	0x00fb,0x00fc,0x00fd,0x00fe,0x00fe,0x00ff,0x00ff,0x00ff,
	0x0100,0x00ff,0x00ff,0x00ff,0x00fe,0x00fe,0x00fd,0x00fc,
	0x00fb,0x00f9,0x00f8,0x00f6,0x00f4,0x00f3,0x00f1,0x00ee,
	0x00ec,0x00ea,0x00e7,0x00e4,0x00e1,0x00de,0x00db,0x00d8,
	0x00d4,0x00d1,0x00cd,0x00c9,0x00c5,0x00c1,0x00bd,0x00b9,
	0x00b5,0x00b0,0x00ab,0x00a7,0x00a2,0x009d,0x0098,0x0093,
	0x008e,0x0088,0x0083,0x007e,0x0078,0x0073,0x006d,0x0067,
	0x0061,0x005c,0x0056,0x0050,0x004a,0x0044,0x003e,0x0038,
	0x0031,0x002b,0x0025,0x001f,0x0019,0x0012,0x000c,0x0006,
	0x0000,0xfffa,0xfff4,0xffee,0xffe7,0xffe1,0xffdb,0xffd5,
	0xffcf,0xffc8,0xffc2,0xffbc,0xffb6,0xffb0,0xffaa,0xffa4,
	0xff9f,0xff99,0xff93,0xff8d,0xff88,0xff82,0xff7d,0xff78,
	0xff72,0xff6d,0xff68,0xff63,0xff5e,0xff59,0xff55,0xff50,
	0xff4b,0xff47,0xff43,0xff3f,0xff3b,0xff37,0xff33,0xff2f,
	0xff2c,0xff28,0xff25,0xff22,0xff1f,0xff1c,0xff19,0xff16,
	0xff14,0xff12,0xff0f,0xff0d,0xff0c,0xff0a,0xff08,0xff07,
	0xff05,0xff04,0xff03,0xff02,0xff02,0xff01,0xff01,0xff01,
	0xff00,0xff01,0xff01,0xff01,0xff02,0xff02,0xff03,0xff04,
	0xff05,0xff07,0xff08,0xff0a,0xff0c,0xff0d,0xff0f,0xff12,
	0xff14,0xff16,0xff19,0xff1c,0xff1f,0xff22,0xff25,0xff28,
	0xff2c,0xff2f,0xff33,0xff37,0xff3b,0xff3f,0xff43,0xff47,
	0xff4b,0xff50,0xff55,0xff59,0xff5e,0xff63,0xff68,0xff6d,
	0xff72,0xff78,0xff7d,0xff82,0xff88,0xff8d,0xff93,0xff99,
	0xff9f,0xffa4,0xffaa,0xffb0,0xffb6,0xffbc,0xffc2,0xffc8,
	0xffcf,0xffd5,0xffdb,0xffe1,0xffe7,0xffee,0xfff4,0xfffa,
};
const s16 fix_cos[]={
	0x0100,0x00ff,0x00ff,0x00ff,0x00fe,0x00fe,0x00fd,0x00fc,
	0x00fb,0x00f9,0x00f8,0x00f6,0x00f4,0x00f3,0x00f1,0x00ee,
	0x00ec,0x00ea,0x00e7,0x00e4,0x00e1,0x00de,0x00db,0x00d8,
	0x00d4,0x00d1,0x00cd,0x00c9,0x00c5,0x00c1,0x00bd,0x00b9,
	0x00b5,0x00b0,0x00ab,0x00a7,0x00a2,0x009d,0x0098,0x0093,
	0x008e,0x0088,0x0083,0x007e,0x0078,0x0073,0x006d,0x0067,
	0x0061,0x005c,0x0056,0x0050,0x004a,0x0044,0x003e,0x0038,
	0x0031,0x002b,0x0025,0x001f,0x0019,0x0012,0x000c,0x0006,
	0x0000,0xfffa,0xfff4,0xffee,0xffe7,0xffe1,0xffdb,0xffd5,
	0xffcf,0xffc8,0xffc2,0xffbc,0xffb6,0xffb0,0xffaa,0xffa4,
	0xff9f,0xff99,0xff93,0xff8d,0xff88,0xff82,0xff7d,0xff78,
	0xff72,0xff6d,0xff68,0xff63,0xff5e,0xff59,0xff55,0xff50,
	0xff4b,0xff47,0xff43,0xff3f,0xff3b,0xff37,0xff33,0xff2f,
	0xff2c,0xff28,0xff25,0xff22,0xff1f,0xff1c,0xff19,0xff16,
	0xff14,0xff12,0xff0f,0xff0d,0xff0c,0xff0a,0xff08,0xff07,
	0xff05,0xff04,0xff03,0xff02,0xff02,0xff01,0xff01,0xff01,
	0xff00,0xff01,0xff01,0xff01,0xff02,0xff02,0xff03,0xff04,
	0xff05,0xff07,0xff08,0xff0a,0xff0c,0xff0d,0xff0f,0xff12,
	0xff14,0xff16,0xff19,0xff1c,0xff1f,0xff22,0xff25,0xff28,
	0xff2c,0xff2f,0xff33,0xff37,0xff3b,0xff3f,0xff43,0xff47,
	0xff4b,0xff50,0xff55,0xff59,0xff5e,0xff63,0xff68,0xff6d,
	0xff72,0xff78,0xff7d,0xff82,0xff88,0xff8d,0xff93,0xff99,
	0xff9f,0xffa4,0xffaa,0xffb0,0xffb6,0xffbc,0xffc2,0xffc8,
	0xffcf,0xffd5,0xffdb,0xffe1,0xffe7,0xffee,0xfff4,0xfffa,
	0x0000,0x0006,0x000c,0x0012,0x0019,0x001f,0x0025,0x002b,
	0x0031,0x0038,0x003e,0x0044,0x004a,0x0050,0x0056,0x005c,
	0x0061,0x0067,0x006d,0x0073,0x0078,0x007e,0x0083,0x0088,
	0x008e,0x0093,0x0098,0x009d,0x00a2,0x00a7,0x00ab,0x00b0,
	0x00b5,0x00b9,0x00bd,0x00c1,0x00c5,0x00c9,0x00cd,0x00d1,
	0x00d4,0x00d8,0x00db,0x00de,0x00e1,0x00e4,0x00e7,0x00ea,
	0x00ec,0x00ee,0x00f1,0x00f3,0x00f4,0x00f6,0x00f8,0x00f9,
	0x00fb,0x00fc,0x00fd,0x00fe,0x00fe,0x00ff,0x00ff,0x00ff,
};