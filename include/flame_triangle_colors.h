#ifndef FLAME_TRIANGLE_COLORS_H
#define FLAME_TRIANGLE_COLORS_H
#include <cosmetic.h>

// Custom Gradients Array
FlameTriangleColorGradient CUSTOM_FLAME_TRIANGLE_GRADIENTS[11] =
{
	//0 Original
	{
		.tip.r = 0xF0,
		.tip.g = 0xF0,
		.tip.b = 0x60,
		.tip.shape_code = 0x30,

		.center.r = 0xD0,
		.center.g = 0x90,
		.center.b = 0x40,
		.center.shape_code = 0x30,
		
		.right.r = 0x90,
		.right.g = 0x60,
		.right.b = 0x20,
		.right.shape_code = 0x30,

		.left.r = 0xA0,
		.left.g = 0x30,
		.left.b = 0x10,
		.left.shape_code = 0x30,
	},
	//1 Blood Red
	{
        .tip.r = 0xb1,
		.tip.g = 0x3a,
		.tip.b = 0x3a,
		.tip.shape_code = 0x30,

		.center.r = 0x7b,
		.center.g = 0x2b,
		.center.b = 0x2b,
		.center.shape_code = 0x30,
		
		.right.r = 0xb7,
		.right.g = 0x28,
		.right.b = 0x28,
		.right.shape_code = 0x30,

		.left.r = 0xab,
		.left.g = 0x22,
		.left.b = 0x22,
		.left.shape_code = 0x30
	},
	//2 Icy
	{
		.tip.r = 0x46,
		.tip.g = 0xBF,
		.tip.b = 0xBF,
		.tip.shape_code = 0x30,

		.center.r = 0xDE,
		.center.g = 0xF9,
		.center.b = 0xFE,
		.center.shape_code = 0x30,
		
		.right.r = 0x4B,
		.right.g = 0xFF,
		.right.b = 0xF9,
		.right.shape_code = 0x30,

		.left.r = 0x56,
		.left.g = 0xE3,
		.left.b = 0xEE,
		.left.shape_code = 0x30,
	},
	//3 Jade
	{
        .tip.r = 0x87,
		.tip.g = 0xff,
		.tip.b = 0xda,
		.tip.shape_code = 0x30,

		.center.r = 0x28,
		.center.g = 0x74,
		.center.b = 0x5c,
		.center.shape_code = 0x30,
		
		.right.r = 0x2,
		.right.g = 0xa2,
		.right.b = 0x6c,
		.right.shape_code = 0x30,

		.left.r = 0x0,
		.left.g = 0x98,
		.left.b = 0x61,
		.left.shape_code = 0x30
	},
	//4 Blue
	{
        .tip.r = 0x34,
		.tip.g = 0x44,
		.tip.b = 0xff,
		.tip.shape_code = 0x30,

		.center.r = 0x59,
		.center.g = 0x7d,
		.center.b = 0xff,
		.center.shape_code = 0x30,
		
		.right.r = 0x1c,
		.right.g = 0x2d,
		.right.b = 0x92,
		.right.shape_code = 0x30,

		.left.r = 0x1a,
		.left.g = 0x34,
		.left.b = 0x93,
		.left.shape_code = 0x30
	},
	//5 Green
	{
        .tip.r = 0x78,
		.tip.g = 0xff,
		.tip.b = 0x48,
		.tip.shape_code = 0x30,

		.center.r = 0x18,
		.center.g = 0xaa,
		.center.b = 0x15,
		.center.shape_code = 0x30,
		
		.right.r = 0x7a,
		.right.g = 0xdf,
		.right.b = 0x89,
		.right.shape_code = 0x30,

		.left.r = 0x62,
		.left.g = 0xd4,
		.left.b = 0x63,
		.left.shape_code = 0x30
	},
	//6 Pink
	{
        .tip.r = 0xff,
		.tip.g = 0x5b,
		.tip.b = 0xf7,
		.tip.shape_code = 0x30,

		.center.r = 0xfc,
		.center.g = 0xa6,
		.center.b = 0xff,
		.center.shape_code = 0x30,
		
		.right.r = 0xf9,
		.right.g = 0x53,
		.right.b = 0xec,
		.right.shape_code = 0x30,

		.left.r = 0xf4,
		.left.g = 0x5a,
		.left.b = 0xfd,
		.left.shape_code = 0x30
	},
	//7 Purple (Cynder)
	{

        .tip.r = 0x77,
		.tip.g = 0x1,
		.tip.b = 0xde,
		.tip.shape_code = 0x30,

		.center.r = 0xdd,
		.center.g = 0x7,
		.center.b = 0x6f,
		.center.shape_code = 0x30,
		
		.right.r = 0x40,
		.right.g = 0x9,
		.right.b = 0x50,
		.right.shape_code = 0x30,

		.left.r = 0x67,
		.left.g = 0xf,
		.left.b = 0x4e,
		.left.shape_code = 0x30
	},
	//8 Pastel
	{

        .tip.r = 0xfc,
		.tip.g = 0x88,
		.tip.b = 0xeb,
		.tip.shape_code = 0x30,

		.center.r = 0x72,
		.center.g = 0xff,
		.center.b = 0xf5,
		.center.shape_code = 0x30,
		
		.right.r = 0xf6,
		.right.g = 0xff,
		.right.b = 0x9e,
		.right.shape_code = 0x30,

		.left.r = 0x86,
		.left.g = 0xde,
		.left.b = 0xa8,
		.left.shape_code = 0x30
	},
	//9 Rainbow
	{

        .tip.r = 0xff,
		.tip.g = 0x0,
		.tip.b = 0x0,
		.tip.shape_code = 0x30,

		.center.r = 0x6,
		.center.g = 0xff,
		.center.b = 0x0,
		.center.shape_code = 0x30,
		
		.right.r = 0x0,
		.right.g = 0xff,
		.right.b = 0xdc,
		.right.shape_code = 0x30,

		.left.r = 0xff,
		.left.g = 0x0,
		.left.b = 0xd9,
		.left.shape_code = 0x30
	},
	//10 Ghost
	{
        .tip.r = 0xd2,
		.tip.g = 0xd2,
		.tip.b = 0xd2,
		.tip.shape_code = 0x30,

		.center.r = 0x8d,
		.center.g = 0x8d,
		.center.b = 0x8d,
		.center.shape_code = 0x30,
		
		.right.r = 0xcf,
		.right.g = 0xcf,
		.right.b = 0xcf,
		.right.shape_code = 0x30,

		.left.r = 0xbd,
		.left.g = 0xbd,
		.left.b = 0xbd,
		.left.shape_code = 0x30
	}
};

#endif /* FLAME_TRIANGLE_COLORS_H */