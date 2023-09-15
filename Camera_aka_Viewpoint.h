Camera get_view_point()
{

//NEW CAMERA VP WORKING!
//THANKS TO Coby FOR THE UPDATED CAMERA VIEW POINT
	
	Camera ViewPoint;
	__int64 result; // rax
	__int64 v7; // rcx

	result = driver.read<__int64>(driver.base_address + 0xE2CED18);
	v7 = driver.base_address + 0xE2CECD8;
	if (result)
		v7 = result;

	__int64 EncryptedData[7];
	for (int i = 0; i < 7; i++)
		EncryptedData[i] = driver.read<__int64>(v7 + (i * 8));
	EncryptedData[0] ^= 0x4CF1F15DFE2D977Fi64;
	EncryptedData[1] ^= 0x4CF1F15DFE2D977Fi64;
	EncryptedData[2] ^= 0x4EF1F15DFE2D977Fi64;
	EncryptedData[3] ^= 0xAF29A7F813EFC5Ci64;
	EncryptedData[4] ^= 0xAF29A7F813EFC5Ci64;
	EncryptedData[5] ^= 0x4EF29A7E813EFC5Di64;
	EncryptedData[6] ^= 0x4E1772384C14291Fi64;

	ViewPoint.location = { *(double*)(&EncryptedData[1]),*(double*)(&EncryptedData[0]), *(double*)(&EncryptedData[2]) };
	ViewPoint.rotation = { *(double*)(&EncryptedData[4]),*(double*)(&EncryptedData[3]), *(double*)(&EncryptedData[5]) };
	ViewPoint.fov = *(float*)(&EncryptedData[6]);

	return ViewPoint;
}
