struct Camera
{
	float FieldOfView;
	Vector3 Rotation;
	Vector3 Location;
};
struct CamewaDescwipsion
{
	Vector3 Location;
	Vector3 Rotation;
	float FieldOfView;
	char Useless[0x18];
}; Camera vCamera;
CamewaDescwipsion GetViewPoint()
{
	__int64 result; // rax
	__int64 v7; // rcx

	result = your_read<__int64>(your_baseaddress + 0xE2CED18);
	v7 = your_baseaddress + 0xE2CECD8;
	if (result)
		v7 = result;

	__int64 CameraBuffer = driver.read<__int64>(your_read<__int64>(v7) + 8) ^ 0x4CF1F15DFE2D977Fi64;
	return your_read<CamewaDescwipsion>(CameraBuffer);
}

//join my server to support me <3
//https://discord.gg/h-m
