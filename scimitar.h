const UBYTE scimitarMaps[10][60] =
{
	{
		0x00,0x00,0x04,0x07,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1b,0x1d,0x20,0x23,
		0x25,0x27,0x29,0x00,0x01,0x02,0x05,0x08,0x0b,0x0d,0x0f,0x11,0x13,0x15,0x17,0x19,
		0x1c,0x1e,0x21,0x24,0x26,0x28,0x2a,0x00,0x00,0x03,0x06,0x09,0x0c,0x0e,0x10,0x12,
		0x14,0x16,0x18,0x1a,0x00,0x1f,0x22,0x00,0x00,0x00,0x00,0x00
	},
	{
		0x2b,0x2b,0x2b,0x31,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x44,0x46,0x49,0x4c,
		0x4e,0x50,0x52,0x2b,0x2c,0x2d,0x2f,0x32,0x34,0x36,0x38,0x3a,0x3c,0x3e,0x40,0x42,
		0x45,0x47,0x4a,0x4d,0x4f,0x51,0x53,0x2b,0x2b,0x2e,0x30,0x33,0x35,0x37,0x39,0x3b,
		0x3d,0x3f,0x41,0x43,0x2b,0x48,0x4b,0x2b,0x2b,0x2b,0x2b,0x2b
	},
	{
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0d,0x0f,0x11,0x14,
		0x17,0x19,0x00,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,
		0x0e,0x10,0x12,0x15,0x18,0x1a,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x16,0x00,0x00,0x00,0x00
	},
	{
		0x2b,0x2b,0x2e,0x30,0x32,0x34,0x34,0x34,0x38,0x3a,0x3c,0x2b,0x2b,0x40,0x42,0x44,
		0x2b,0x2b,0x2b,0x2b,0x2c,0x2d,0x2f,0x31,0x33,0x35,0x36,0x37,0x39,0x3b,0x3d,0x3e,
		0x3f,0x41,0x43,0x45,0x46,0x47,0x48,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,
		0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b
	},
	{
		0x00,0x03,0x05,0x07,0x09,0x0b,0x0d,0x0f,0x11,0x13,0x15,0x17,0x19,0x1c,0x1f,0x02,
		0x02,0x02,0x02,0x02,0x01,0x04,0x06,0x08,0x0a,0x0c,0x0e,0x10,0x12,0x14,0x16,0x18,
		0x1a,0x1d,0x20,0x21,0x23,0x25,0x27,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
		0x02,0x02,0x02,0x02,0x1b,0x1e,0x02,0x22,0x24,0x26,0x02,0x02
	},
	{
		0x2b,0x2d,0x2f,0x31,0x33,0x35,0x37,0x39,0x3b,0x3d,0x3f,0x41,0x43,0x46,0x49,0x2b,
		0x2b,0x2b,0x2b,0x2b,0x2c,0x2e,0x30,0x32,0x34,0x36,0x38,0x3a,0x3c,0x3e,0x40,0x42,
		0x44,0x47,0x4a,0x4c,0x4e,0x50,0x52,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,
		0x2b,0x2b,0x2b,0x2b,0x45,0x48,0x4b,0x4d,0x4f,0x51,0x53,0x2b
	},
	{
		0x00,0x02,0x04,0x06,0x08,0x0a,0x0c,0x0e,0x0e,0x11,0x13,0x15,0x17,0x1a,0x00,0x00,
		0x00,0x00,0x00,0x00,0x01,0x03,0x05,0x07,0x09,0x0b,0x0d,0x0f,0x10,0x12,0x14,0x16,
		0x18,0x1b,0x1d,0x1e,0x20,0x22,0x24,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x19,0x1c,0x00,0x1f,0x21,0x23,0x25,0x27
	},
	{
		0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x38,0x2b,0x2b,
		0x2b,0x2b,0x2b,0x2b,0x2c,0x2d,0x2e,0x2f,0x30,0x31,0x32,0x33,0x33,0x34,0x35,0x36,
		0x37,0x39,0x3b,0x3d,0x3e,0x3f,0x40,0x41,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,
		0x2b,0x2b,0x2b,0x2b,0x2b,0x3a,0x3c,0x2b,0x2b,0x2b,0x2b,0x3c
	},
	{
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0d,0x0f,0x11,
		0x13,0x15,0x17,0x19,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x08,0x09,0x0a,0x0b,
		0x0c,0x0e,0x10,0x12,0x14,0x16,0x18,0x1a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	},
	{
		0x2b,0x2b,0x2e,0x30,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b,0x41,0x43,0x46,0x48,
		0x4a,0x4c,0x4e,0x50,0x2c,0x2d,0x2f,0x31,0x33,0x35,0x37,0x39,0x3a,0x3c,0x3e,0x40,
		0x42,0x44,0x47,0x49,0x4b,0x4d,0x4f,0x51,0x2b,0x2b,0x2b,0x32,0x34,0x36,0x38,0x38,
		0x3b,0x3d,0x3f,0x2b,0x2b,0x45,0x2b,0x2b,0x2b,0x2b,0x2b,0x2b
	}
};
const UBYTE scimitarTiles0[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xe7,0xff,0xfe,0xf1,0xff,0xf8,0xf9,0xfc,0xfc,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x7f,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0x7f,0x00,0xcf,0x80,0xf3,0xe0,
	0xf8,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfe,
	0xff,0xf8,0xef,0xf0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0x7f,0x00,0x80,0x00,0xcc,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x67,0x9f,0xfe,0x01,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0x1f,0x00,0x00,0x00,0x30,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,
	0xe7,0x1f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x0f,0x00,0x00,0x00,0x38,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x3f,0xff,0xfe,0x01,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0x01,0x00,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x1f,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x40,0xbf,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xc2,0x3f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0x80,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xc0,0x00,0x00,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x80,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xe0,0x00,0x01,0x00,0xcf,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xfe,0xff,0x9f,0xe0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xf0,0x00,0x01,0x00,0x17,0x0f,0xbf,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xf8,0xff,0x3f,0xc0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf8,0x00,0x01,0x00,
	0x17,0x0f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xfe,0xff,0xf8,0xff,0xf0,0xff,0xf0,0xff,0xf8,0xff,0xff,0xff,0xfe,0xff,0xe3,0xfc,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf0,0x00,0x0c,0x03,0x7f,0xff,
	0x0f,0xff,0x07,0xff,0x07,0xff,0x07,0xff,0x07,0xff,0x03,0xff,0x03,0xff,0x03,0xfc,
	0x03,0xfc,0x03,0xfc,0x03,0xfc,0x80,0x7f,0x81,0x7f,0x81,0x7f,0x01,0xff,0x81,0xff,
	0xc0,0xff,0xc0,0xff,0xe0,0xff,0xe0,0xff,0xf0,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0x9f,0xe0,0xff,0x00,
	0xff,0x00,0xff,0x00,0xf1,0x0f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x3f,0xff,0x1f,0xff,0x1f,0xff,0x0f,0xff,0x1f,0xff,0x3f,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xfc,0x7b,0x84,0xfd,0x02,0xfd,0x02,
	0xfd,0x02,0xc7,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xfe,0xff,0xcf,0xf0,0xff,0x00,0xff,0x00,0xff,0x00,0xf8,0x07,
	0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xfe,0xff,0x3e,0xc1,0xff,0x00,0xff,0x00,0xff,0x00,0xe7,0x1e,0xff,0xfe,
	0xfd,0xfe,0xfd,0xfe,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x7f,0xff,0x6f,0x9f,0x73,0x87,0x7d,0x83,0xff,0x01,0xfd,0x01,0xff,0x01,
	0xfd,0x03,0xfb,0x07,0xff,0x0f,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};
const UBYTE scimitarTiles1[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xfb,0xfc,0xfb,0xfc,0xfb,0xfc,0xf9,0xfc,0xfc,0xfc,0xff,0xfe,0xff,0xff,
	0xff,0xff,0x3f,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0x00,0x07,0x80,
	0xc0,0xe0,0xf4,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xfe,0xff,0xe7,0xf8,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0x00,0x00,0x00,0x00,0xb0,0xc0,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdc,0xe3,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0x3f,0x00,0x00,0x00,0x00,0x00,0x70,0x80,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xe7,0x1f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x3c,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x3f,0xff,0xfe,0x01,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x0f,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x0f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x80,0x00,0x00,0x00,0x40,0x00,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0x03,0xfc,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xfc,0x03,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xe0,0x00,0x00,0x00,0x18,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xfe,0xff,0x1f,0xe0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf8,0x00,
	0x80,0x00,0x06,0x01,0x2f,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xfe,0xff,0x1f,0xe0,0xff,0x00,0xff,0x00,0xff,0x00,0xfe,0x00,0x80,0x00,0x06,0x01,
	0x6f,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xf8,0xff,0xf0,0xff,0xf0,0xff,0xe0,0xff,0xe0,0xff,0xe0,0xff,0xf8,0xff,
	0x3e,0xc1,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x33,0x0f,0xff,0xff,
	0xff,0xff,0xff,0xff,0x3f,0xff,0x3f,0xff,0x1f,0xff,0x0f,0xff,0x0f,0xff,0x03,0xfc,
	0x07,0xf8,0x03,0xfc,0x01,0xfe,0x80,0x7f,0x00,0x7f,0x00,0x7f,0x00,0xff,0x80,0xff,
	0xe0,0xff,0xf0,0xff,0xf8,0xff,0xfc,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc7,0xf8,0xff,0x00,
	0xff,0x00,0xff,0x00,0xf8,0x07,0x7f,0xff,0xff,0xff,0x7f,0xff,0x4f,0xff,0x03,0xff,
	0x01,0xff,0x01,0xff,0x01,0xff,0x01,0xff,0x03,0xff,0x0f,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0x0f,0xf0,0xf7,0x08,0xf7,0x08,
	0xf7,0x08,0xe3,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0x7f,0x80,0xff,0x00,0xff,0x00,0xfe,0x01,
	0x8f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xd9,0x27,0xef,0x10,0xef,0x10,0xff,0x00,0x0f,0xf0,
	0xff,0xf8,0xff,0xf8,0xfb,0xfc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xdf,0x3f,0xef,0x1f,0xff,0x0f,
	0xf7,0x0f,0xef,0x1f,0xff,0x1f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};
const UBYTE scimitarTiles2[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xfd,0xfe,0xf1,0xf8,0xf0,0xf8,0xfd,0xfe,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,
	0xff,0xff,0xf8,0xff,0xff,0x00,0xff,0x00,0x03,0x00,0x00,0x00,0xf8,0x00,0xff,0xff,
	0xff,0xff,0x0f,0xf0,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,
	0xff,0xff,0xe1,0x1f,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x0f,0xf0,
	0xff,0xff,0xff,0xff,0xfe,0x01,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xff,0x00,
	0xff,0xff,0xff,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xf8,0x07,
	0xff,0xff,0xff,0xff,0x1f,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0xff,
	0xff,0xff,0xff,0xff,0xf0,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x03,0xff,
	0xff,0xff,0xff,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x1f,0x00,0xff,0xff,
	0xff,0xff,0xff,0xff,0x3f,0xc0,0xff,0x00,0xc0,0x00,0x01,0x00,0x1f,0xff,0xff,0xff,
	0xff,0xff,0xf8,0xff,0xff,0x00,0xf8,0x00,0x01,0x00,0x8f,0x7f,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xc0,0xff,
	0xc0,0xff,0x3e,0xc1,0xff,0x00,0x00,0x00,0xc0,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xff,
	0x07,0xf8,0x01,0xfe,0x80,0x7f,0x00,0x3f,0x00,0xff,0x00,0xff,0xc0,0xff,0xfc,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0xff,
	0xff,0x00,0xff,0x00,0x2f,0xd0,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x80,0xff,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xe0,
	0xdf,0x20,0xef,0x10,0xff,0x00,0x07,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x7f,0xff,
	0x7f,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xd0,0xff,0xff,0x00,
	0xff,0x00,0xff,0x00,0xf0,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x5f,0xff,0xfe,0x01,
	0xff,0x00,0xff,0x00,0x7f,0x80,0xf7,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0x3f,0xdf,0x3f,0xff,0x3f,0xbf,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};
const UBYTE scimitarTiles3[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xfe,0xff,0xf8,0xfc,0xf0,0xf8,0xfd,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x3c,0xc0,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,
	0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xf0,
	0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x03,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,
	0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,
	0x00,0x00,0xff,0x00,0xff,0x00,0xf0,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x00,0x00,0xff,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x00,0x00,0xff,0x00,0xff,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,
	0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x1f,
	0x00,0x00,0xff,0x00,0xff,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,
	0x07,0x00,0x80,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x8f,0x7f,0x00,0x00,0xff,0x00,0x1f,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xfe,0xff,0xff,0x00,0x00,0x00,0xff,0x00,0xc0,0xff,0xc0,0xff,0xc0,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0x80,0xff,
	0x00,0xff,0xc0,0x3f,0x40,0x3f,0x00,0xff,0x03,0xfc,0x00,0xff,0x7f,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xff,0x80,0xff,0x00,0xff,0x00,0xff,
	0x00,0xff,0x00,0xff,0x00,0xff,0x7f,0x80,0x7f,0x00,0x07,0xf8,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,0x3f,0xff,
	0x3f,0xff,0x3f,0xff,0x7f,0x80,0xff,0x00,0xdf,0x20,0xbf,0x40,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xe0,0x1f,0xff,0x00,0xff,0x00,0xff,0x00,0xc2,0xff,0xff,0xff,
	0xff,0xff,0xfb,0xfc,0x7f,0x80,0xff,0x00,0xff,0x00,0xfe,0x01,0x3f,0xff,0xff,0xff,
	0xff,0xff,0x7f,0xff,0xff,0x3f,0xff,0x3f,0xbf,0x7f,0xff,0xff,0xff,0xff,0xff,0xff
};
const UBYTE scimitarTiles4[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,
	0xfe,0xfc,0xfd,0xfc,0xfd,0xfc,0xff,0xfc,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xfe,0xd0,0xe0,0xc0,0x80,0x1f,0x00,
	0x7f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x9f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xe6,0xf8,0x80,0x00,0x00,0x00,0x3f,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xc3,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xe7,0xf8,0x00,0x00,0x00,0x00,0x03,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x7f,0x80,0xec,0xf3,0xff,0xff,
	0xff,0xff,0xf0,0xff,0x00,0x00,0x00,0x00,0x03,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfe,0x01,0xe7,0x1f,0xff,0xff,0xff,0xff,
	0xff,0xff,0x3f,0xc0,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xfe,0x01,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xe0,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x07,0xff,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xe7,0x1f,0x00,0x00,0x00,0x00,0xfe,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x7f,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0x3f,0x05,0x03,0x00,0x00,0xf0,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xc7,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x4f,0x3f,0x06,0x01,0x80,0x00,
	0xfe,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xc3,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x33,0x0f,
	0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfe,0x01,0xc6,0xf9,0xe0,0xff,0xc0,0xff,
	0xe0,0xff,0xe0,0xff,0xf0,0xff,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xfe,0xff,0xfc,0xff,0xf8,0xff,0xf0,0xff,0xc0,0xff,0x80,0xff,0x00,0xff,
	0x00,0x7f,0x80,0x7f,0x81,0x7e,0x03,0xfc,0x03,0xfc,0x03,0xf8,0x0c,0xff,0x0f,0xff,
	0x1f,0xff,0x3f,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x0f,0xff,0x03,0xff,0x01,0xff,0x00,0xff,0x00,0xff,0x01,0xff,0x03,0xff,0x07,0xff,
	0x7f,0xff,0xff,0xff,0xcf,0x3f,0xff,0x00,0xff,0x00,0xff,0x00,0x7f,0x80,0xf8,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xff,0xfe,0x01,0xff,0x00,0xef,0x10,0xf7,0x00,
	0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0xfc,0x03,0xff,0x00,0xff,0x00,
	0xff,0x00,0xf1,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xfb,0xfc,0xf3,0xf8,0xff,0xf0,0x1f,0xe0,0xff,0x00,0xdf,0x20,
	0xde,0x21,0xa3,0x5f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xbf,0x7f,0xdf,0x3f,0xff,0x1f,0xef,0x1f,0xff,0x1f,0xbf,0x7f
};
const UBYTE scimitarTiles5[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xfe,0xfc,0xfe,0xfd,0xfc,0xff,0xf8,0xf1,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf9,0xf0,0xe7,0xc0,
	0xbf,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x8f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xf2,0xfc,0x40,0x80,0x0f,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xef,0xf0,0xfb,0xfc,0xff,0xfe,0xff,0xff,
	0xff,0xff,0xff,0xff,0xcc,0xf0,0x00,0x00,0x03,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x73,0x8f,
	0xff,0xff,0x8e,0xf0,0x00,0x00,0x03,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfb,0x07,0xbf,0x7f,0xff,0xff,
	0xf8,0xff,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x8f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,
	0x00,0xff,0x00,0x00,0x7f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0x87,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x03,0xff,0x00,0x00,0xf8,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xe0,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xcf,0x3f,0x01,0x00,0xe0,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0x7f,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xbf,0x7f,0x13,0x0f,0x01,0x00,0xf0,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0x8f,0xf0,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0x17,0x0f,0x01,0x00,0xf8,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0xc0,0xfc,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,0x0c,0x03,
	0xf8,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf3,0xfc,0xfe,0xff,
	0xf8,0xff,0xf0,0xff,0xf0,0xff,0xf0,0xff,0xf8,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,
	0xfc,0xff,0xe0,0xff,0xe0,0xff,0xe0,0xff,0xc0,0xff,0x80,0xff,0x01,0xff,0x01,0xff,
	0x81,0x7f,0x01,0xff,0x02,0xfd,0x03,0xfc,0x03,0xfc,0x07,0xf8,0x03,0xfc,0x07,0xff,
	0x07,0xff,0x07,0xff,0x07,0xff,0x0f,0xff,0x0f,0xff,0x1f,0xff,0xff,0xff,0xff,0xff,
	0x3f,0xff,0x1f,0xff,0x0f,0xff,0x1f,0xff,0x1f,0xff,0x7f,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x3f,0xff,0xf8,0x07,0xff,0x00,0xff,0x00,0xff,0x00,0xcf,0xf0,
	0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0x1f,0xff,0x00,0xfd,0x02,0xfb,0x04,
	0x3f,0xc0,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0x7f,0xfe,0x01,0xff,0x00,
	0xff,0x00,0xff,0x00,0xe7,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xfc,0xff,0xfc,0x7d,0xfe,0xf3,0x0c,
	0xff,0x00,0xfe,0x01,0xfe,0x01,0x9c,0xe3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x3f,0xff,0xef,0x1f,0xfb,0x07,0xff,0x03,0xfd,0x03,0xff,0x03,
	0xfb,0x07,0xff,0x07,0xff,0x0f,0xbf,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};
const UBYTE scimitarTiles6[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xfe,0xff,0xfb,0xfc,0xeb,0xf0,0xc7,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,
	0xf5,0xf8,0xbf,0xc0,0xff,0x00,0xff,0x00,0x82,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xe8,0xf0,0xdf,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x1f,0xe0,0xff,0xf0,0xff,0xf8,0xfe,0xfd,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x38,0xc0,0x3f,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf1,0x0f,0x7f,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xf0,0x03,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfe,0x01,0xcf,0x3f,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0x1e,0xe1,0x0c,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0x83,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xfc,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0x00,0xff,0x00,0x7f,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1e,0x01,0xfc,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0x13,0x0f,0xe0,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0x0f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x9f,0x7f,0x06,0x01,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x0f,0xf0,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,
	0x1e,0x01,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x1f,0xe0,0xfe,0xff,0xfe,0xff,
	0xff,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xc1,0xff,0xc0,0xff,0x80,0xff,0x01,0xff,0x03,0xff,0x03,0xff,
	0x03,0xff,0x03,0xff,0x03,0xfc,0x03,0xfc,0x83,0x7c,0x81,0x7e,0x00,0xff,0x01,0xff,
	0x01,0xff,0x00,0xff,0x01,0xff,0x01,0xff,0x03,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xc7,0x3f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf1,0xfe,
	0xff,0xff,0xff,0xff,0xff,0xff,0x87,0x7f,0xfe,0x01,0xff,0x00,0xff,0x00,0xff,0x00,
	0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0xff,0x7f,0x80,0x7f,0x80,0x7f,0x80,
	0xff,0x00,0xc3,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xfe,0x8f,0x7f,0xff,0x00,0xff,0x00,
	0xff,0x00,0xff,0x00,0xc7,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x4f,0xbf,0xfd,0x03,0xff,0x00,0xff,0x00,0x7f,0x80,0xf7,0x08,
	0xf9,0x06,0xf9,0x06,0xf3,0x0c,0x81,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0x3f,0xdf,0x3f,0xff,0x1f,
	0xff,0x1f,0xdf,0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};
const UBYTE scimitarTiles7[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xc6,0xf8,0x00,0xff,0xdf,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x3f,0xc0,0x3f,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x87,0xf8,0xff,0x00,0xff,0x00,0x1f,0xe0,0xf0,0xff,0xff,0xff,0xff,0xff,
	0xf8,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x07,0xff,0xff,0xff,0xff,0xff,
	0x07,0xf8,0xff,0x00,0xff,0x00,0xff,0x00,0xe0,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0x00,0xff,0x00,0xff,0x00,0xf0,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0x00,0xff,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xf0,0x0f,0xff,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0x1f,0xff,0xff,0x00,0xff,0x00,0x1f,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xa0,0x5f,0xff,0x00,0xff,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xfe,0xff,0x0c,0xff,0xff,0x00,0xff,0x00,0x03,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xff,0x03,0xff,
	0x07,0xff,0x01,0xfe,0x01,0xfe,0x80,0x7f,0x80,0x7f,0x00,0xff,0x80,0xff,0x80,0xff,
	0x80,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x80,0x7f,0xff,0x00,0x7f,0x80,0x7f,0x80,0x7f,0x80,0x78,0xff,0x7f,0xff,
	0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x7f,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x07,0xf8,0xff,0xff,
	0xff,0xff,0xff,0xff,0xbc,0x43,0xdf,0x20,0xdf,0x20,0x9f,0x60,0x3f,0xc0,0xf8,0xff,
	0xff,0xff,0xff,0xff,0x01,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x07,0xf8,
	0xff,0xff,0xc1,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0xff,0xff,0xff,0xef,0x1f,0x7f,0x83,0x9f,0x61,0xce,0x31,0x8f,0x71,0x9b,0x67
};
const UBYTE scimitarTiles8[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xdf,0xff,0x00,0xff,0xc3,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x00,0xff,0x87,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xf8,0xff,0x7f,0x80,0xff,0x00,0x7f,0x80,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0xc0,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xc0,0x3f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x01,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0x00,0xff,0x00,0x80,0x7f,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0x3f,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x7f,0x80,0xff,0x00,0xd0,0x2f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xfc,0xff,0xff,0x00,0xff,0x00,0x00,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0x80,0xff,0x80,0xff,
	0x00,0xff,0x00,0xff,0xc0,0x3f,0x80,0x7f,0x01,0xfe,0x07,0xff,0x07,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xff,0x7f,0xff,0x7f,0xff,
	0x7f,0x80,0x7f,0x80,0x7f,0x80,0xff,0x00,0xfc,0x03,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xff,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x80,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x27,0xd8,
	0xbf,0x40,0xdf,0x20,0xdf,0x20,0xbf,0x40,0x5f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0xff,0xff,0x00,
	0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0xff,0xcf,0x31,
	0xc7,0x38,0xcf,0x30,0x9f,0x61,0xdb,0x07,0x3f,0xff,0x7f,0xff,0xff,0xff,0xff,0xff
};
const UBYTE scimitarTiles9[] =
{
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xdf,0xff,0xa1,0xdf,0xeb,0xf0,0xfb,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0x7f,0x80,0xcb,0xf0,0xfc,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xf9,
	0xff,0xf0,0xff,0xe0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xbf,0x00,0xcc,0xf0,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0xff,
	0xfc,0x03,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0x00,
	0x1c,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xf1,0x0f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0x03,0x00,0xa3,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xe0,0x1f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0xf0,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0x3f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xff,0x00,0x01,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x80,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xe0,0x00,0xe3,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xc3,0xfc,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xc3,0x00,
	0x6f,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xc3,0xfc,0xff,0x00,0xff,0x00,0xff,0x00,0xfc,0x00,0x0c,0x03,0x3f,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xc3,0xfc,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3c,0x03,0xff,0xff,0xff,0xff,
	0xf7,0xff,0x03,0xff,0x01,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,
	0x81,0x7e,0x81,0x7e,0x81,0x7e,0x03,0xfc,0x01,0xff,0x03,0xff,0x03,0xff,0x01,0xff,
	0x01,0xff,0x80,0xff,0xc1,0xff,0xc7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0x7f,0x80,
	0xff,0x00,0xff,0x00,0xff,0x00,0xf1,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0x7f,0x80,0xff,0x00,
	0xff,0x00,0xff,0x00,0xf1,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf8,0xff,0x7f,0x80,0x7f,0x80,0xbf,0x40,
	0xbf,0x40,0x71,0x8f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xfe,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
	0xf1,0x0f,0xfe,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xfc,0xff,0xfc,0x03,0xfc,0x03,0xfe,0x01,0xfd,0x02,0xff,0x00,
	0x7f,0x80,0xff,0x00,0x7f,0x00,0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x7f,0x8f,0xf7,0x0f,0xf7,0x0f,0xff,0x0f,
	0xff,0x1f,0xff,0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};
const UBYTE *scimitarTiles[10] =
{
	scimitarTiles0,
	scimitarTiles1,
	scimitarTiles2,
	scimitarTiles3,
	scimitarTiles4,
	scimitarTiles5,
	scimitarTiles6,
	scimitarTiles7,
	scimitarTiles8,
	scimitarTiles9
};
const UBYTE scimitarTileAmounts[10] = {43,41,28,30,40,41,40,23,27,39};
const UBYTE scimitarMaxTile = 43;