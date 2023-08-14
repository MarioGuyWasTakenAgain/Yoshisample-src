//======================================================
//    menu_dat.c
//    Menu Data for Sample Yoshi
//
//    Copyright (C) 1999-2001 NINTENDO Co.,Ltd.
//======================================================
#include "agb.h"
#include "isle_bmp.h"
#include "menu_dat.h"

const u16 p0_yoshi_island_Palette[256] = {
0xfe40 ,0x01bd ,0x45d2 ,0x0199 ,0xfe41 ,0xf640 ,0x8196 ,0xbd90 ,
0xfa20 ,0x7620 ,0x398f ,0x0193 ,0x8973 ,0x0156 ,0xb56e ,0xc588 ,
0x0153 ,0x55e1 ,0x818e ,0x314d ,0x0132 ,0x094e ,0xb12c ,0xad2c ,
0x55a1 ,0x812f ,0xad2a ,0x80f2 ,0x05a7 ,0xa52a ,0x292b ,0x010e ,
0x2d0a ,0x290a ,0x3181 ,0x250a ,0x2528 ,0x00ef ,0x8946 ,0x01c0 ,
0x8147 ,0x8182 ,0x24ea ,0x04ec ,0x28e9 ,0xa0e9 ,0x24e9 ,0x0982 ,
0x00ec ,0x8181 ,0x01a0 ,0x8108 ,0x24e7 ,0x00cd ,0x8906 ,0x0180 ,
0x8142 ,0x18c9 ,0x04ac ,0x20c8 ,0x1cc8 ,0x3101 ,0x8105 ,0xa4a7 ,
0x00ca ,0x0160 ,0x1cc7 ,0x0522 ,0x0123 ,0x0141 ,0x008c ,0x20a7 ,
0x0140 ,0x1ca7 ,0x8520 ,0x00a9 ,0x8ca7 ,0x80a7 ,0x1ca6 ,0x80e3 ,
0x18a6 ,0x0120 ,0x00c5 ,0x2086 ,0x0089 ,0x1c86 ,0x80e1 ,0x1886 ,
0x0100 ,0x1c85 ,0x1086 ,0x1885 ,0x9c83 ,0x0087 ,0x1485 ,0x80a3 ,
0x00e0 ,0x84a1 ,0x0085 ,0x1865 ,0x8047 ,0x80a1 ,0x1864 ,0x00c0 ,
0x0066 ,0x1464 ,0x0065 ,0x1462 ,0x0c63 ,0x8063 ,0x00a0 ,0x0081 ,
0x1443 ,0x8025 ,0x1043 ,0x0080 ,0x0843 ,0x0061 ,0x1042 ,0x0c42 ,
0x8023 ,0x1041 ,0x0060 ,0x0c22 ,0x8021 ,0x0421 ,0x0040 ,0x0020 ,

0x7fbc,0xf9ca,0x79ea,0x7a0c,0x7a2d,0x7a2d,0x7a2d,0xfa70,
0xfa92,0x7ab2,0xfab3,0x7ad3,0x7f16,0x7f16,0x7f37,0x7f37,
0xff59,0xff7a,0xffbd,0xf9c9,0xf9eb,0x7a0b,0xfa0c,0xfa0c,
0xfa2d,0xfa2e,0x7a4e,0x7a4e,0xfa4e,0xfa4f,0x7a6f,0x7a70,
0xfa70,0xfa70,0x7a91,0xfa91,0x7ab2,0xfab2,0xfed4,0xfed4,
0x7ef4,0x7ef5,0xfef5,0xfef5,0xff16,0xff17,0xff37,0xff38,
0x7f58,0x7f79,0x7f7a,0xff7a,0xff7a,0x7f9b,0xff9b,0xffbc,
0x7fbc,0x7fdd,0xffde,0x7ffe,0xffff,0x7fff,0xffff,0xffff,

0x6aa7,0x6ec9,0xeaa8,0xeeeb,0x730c,0x6ac7,0xeeed,0x6ee9,
0xeeea,0x732e,0xffdc,0xeac5,0x6ac6,0x7350,0xeac2,0x6ac4,
0xeee7,0xeac7,0x6f2c,0xf352,0xf774,0xe2a4,0xeae6,0xeae7,
0xeae8,0xef0a,0x7bb7,0xeae4,0x66e5,0x6b05,0xdea5,0x62c6,
0x66e7,0xef09,0xeaea,0x6b0b,0xef2f,0xe2c7,0x66e8,0xeb0c,
0xef51,0xeb04,0xeb06,0x6706,0xeb08,0x6f4a,0xeb27,0xef4d,
0x6b44,0x6725,0x6f4b,0x6b46,0xef49,0x738f,0xf791,0xeb43,
0xef6b,0x738d,0xe745,0xeb66,0xef69,0x6b83,0x6b85,0xeba4,

};
const u8 *p0_isle_tbl[]=
{
	_binary_yoshi_island_990907_0_1_imb_start,
	_binary_yoshi_island_990907_0_2_imb_start,
	_binary_yoshi_island_990907_0_3_imb_start,
	_binary_yoshi_island_990907_0_4_imb_start,
	_binary_yoshi_island_990907_0_5_imb_start,
	_binary_yoshi_island_990907_0_6_imb_start,
	_binary_yoshi_island_990907_0_7_imb_start,
	_binary_yoshi_island_990907_0_8_imb_start,
	_binary_yoshi_island_990907_0_9_imb_start,
	_binary_yoshi_island_990907_0_10_imb_start,
	_binary_yoshi_island_990907_0_11_imb_start,
	_binary_yoshi_island_990907_0_12_imb_start,
	_binary_yoshi_island_990907_0_13_imb_start,
	_binary_yoshi_island_990907_0_14_imb_start,
	_binary_yoshi_island_990907_0_15_imb_start,
	_binary_yoshi_island_990907_0_16_imb_start,
	_binary_yoshi_island_990907_0_17_imb_start,
	_binary_yoshi_island_990907_0_18_imb_start,
	_binary_yoshi_island_990907_0_19_imb_start,
	_binary_yoshi_island_990907_0_20_imb_start,
	_binary_yoshi_island_990907_0_21_imb_start,
	_binary_yoshi_island_990907_0_22_imb_start,
	_binary_yoshi_island_990907_0_23_imb_start,
	_binary_yoshi_island_990907_0_24_imb_start,
	_binary_yoshi_island_990907_0_25_imb_start,
	_binary_yoshi_island_990907_0_26_imb_start,
	_binary_yoshi_island_990907_0_27_imb_start,
	_binary_yoshi_island_990907_0_28_imb_start,
	_binary_yoshi_island_990907_0_29_imb_start,
	_binary_yoshi_island_990907_0_30_imb_start,
	_binary_yoshi_island_990907_0_31_imb_start,
	_binary_yoshi_island_990907_0_32_imb_start,
	_binary_yoshi_island_990907_0_33_imb_start,
	_binary_yoshi_island_990907_0_34_imb_start,
	_binary_yoshi_island_990907_0_35_imb_start,
	_binary_yoshi_island_990907_0_36_imb_start,
	_binary_yoshi_island_990907_0_37_imb_start,
	_binary_yoshi_island_990907_0_38_imb_start,
	_binary_yoshi_island_990907_0_39_imb_start,
	_binary_yoshi_island_990907_0_40_imb_start,
	_binary_yoshi_island_990907_0_41_imb_start,
	_binary_yoshi_island_990907_0_42_imb_start,
	_binary_yoshi_island_990907_0_43_imb_start,
	_binary_yoshi_island_990907_0_44_imb_start,
	_binary_yoshi_island_990907_0_45_imb_start,
	_binary_yoshi_island_990907_0_46_imb_start,
	_binary_yoshi_island_990907_0_47_imb_start,
	_binary_yoshi_island_990907_0_48_imb_start,
	_binary_yoshi_island_990907_0_49_imb_start,
	_binary_yoshi_island_990907_0_50_imb_start,
	_binary_yoshi_island_990907_0_51_imb_start,
	_binary_yoshi_island_990907_0_52_imb_start,
	_binary_yoshi_island_990907_0_53_imb_start,
	_binary_yoshi_island_990907_0_54_imb_start,
	_binary_yoshi_island_990907_0_55_imb_start,
	_binary_yoshi_island_990907_0_56_imb_start,
	_binary_yoshi_island_990907_0_57_imb_start,
	_binary_yoshi_island_990907_0_58_imb_start,
	_binary_yoshi_island_990907_0_59_imb_start,
	_binary_yoshi_island_990907_0_60_imb_start,
};

//
const u8 p0_size_tbl[]=
{
	155,158,158,160,161,159,156,153,153,154, 153,154,158,160,158,156,159,158,160,158,
	162,159,154,156,160,159,158,158,157,160, 162,163,163,164,164,163,161,161,159,160,
	162,160,157,158,158,161,165,160,163,162, 159,157,163,160,160,156,154,149,151,150
};

const u8 *p0_map_tbl[]=
{
	_binary_yoshi_island_990907_0_1_mpb_start,
	_binary_yoshi_island_990907_0_2_mpb_start,
	_binary_yoshi_island_990907_0_3_mpb_start,
	_binary_yoshi_island_990907_0_4_mpb_start,
	_binary_yoshi_island_990907_0_5_mpb_start,
	_binary_yoshi_island_990907_0_6_mpb_start,
	_binary_yoshi_island_990907_0_7_mpb_start,
	_binary_yoshi_island_990907_0_8_mpb_start,
	_binary_yoshi_island_990907_0_9_mpb_start,
	_binary_yoshi_island_990907_0_10_mpb_start,
	_binary_yoshi_island_990907_0_11_mpb_start,
	_binary_yoshi_island_990907_0_12_mpb_start,
	_binary_yoshi_island_990907_0_13_mpb_start,
	_binary_yoshi_island_990907_0_14_mpb_start,
	_binary_yoshi_island_990907_0_15_mpb_start,
	_binary_yoshi_island_990907_0_16_mpb_start,
	_binary_yoshi_island_990907_0_17_mpb_start,
	_binary_yoshi_island_990907_0_18_mpb_start,
	_binary_yoshi_island_990907_0_19_mpb_start,
	_binary_yoshi_island_990907_0_20_mpb_start,
	_binary_yoshi_island_990907_0_21_mpb_start,
	_binary_yoshi_island_990907_0_22_mpb_start,
	_binary_yoshi_island_990907_0_23_mpb_start,
	_binary_yoshi_island_990907_0_24_mpb_start,
	_binary_yoshi_island_990907_0_25_mpb_start,
	_binary_yoshi_island_990907_0_26_mpb_start,
	_binary_yoshi_island_990907_0_27_mpb_start,
	_binary_yoshi_island_990907_0_28_mpb_start,
	_binary_yoshi_island_990907_0_29_mpb_start,
	_binary_yoshi_island_990907_0_30_mpb_start,
	_binary_yoshi_island_990907_0_31_mpb_start,
	_binary_yoshi_island_990907_0_32_mpb_start,
	_binary_yoshi_island_990907_0_33_mpb_start,
	_binary_yoshi_island_990907_0_34_mpb_start,
	_binary_yoshi_island_990907_0_35_mpb_start,
	_binary_yoshi_island_990907_0_36_mpb_start,
	_binary_yoshi_island_990907_0_37_mpb_start,
	_binary_yoshi_island_990907_0_38_mpb_start,
	_binary_yoshi_island_990907_0_39_mpb_start,
	_binary_yoshi_island_990907_0_40_mpb_start,
	_binary_yoshi_island_990907_0_41_mpb_start,
	_binary_yoshi_island_990907_0_42_mpb_start,
	_binary_yoshi_island_990907_0_43_mpb_start,
	_binary_yoshi_island_990907_0_44_mpb_start,
	_binary_yoshi_island_990907_0_45_mpb_start,
	_binary_yoshi_island_990907_0_46_mpb_start,
	_binary_yoshi_island_990907_0_47_mpb_start,
	_binary_yoshi_island_990907_0_48_mpb_start,
	_binary_yoshi_island_990907_0_49_mpb_start,
	_binary_yoshi_island_990907_0_50_mpb_start,
	_binary_yoshi_island_990907_0_51_mpb_start,
	_binary_yoshi_island_990907_0_52_mpb_start,
	_binary_yoshi_island_990907_0_53_mpb_start,
	_binary_yoshi_island_990907_0_54_mpb_start,
	_binary_yoshi_island_990907_0_55_mpb_start,
	_binary_yoshi_island_990907_0_56_mpb_start,
	_binary_yoshi_island_990907_0_57_mpb_start,
	_binary_yoshi_island_990907_0_58_mpb_start,
	_binary_yoshi_island_990907_0_59_mpb_start,
	_binary_yoshi_island_990907_0_60_mpb_start,
};