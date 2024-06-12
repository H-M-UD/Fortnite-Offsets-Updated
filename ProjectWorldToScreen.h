Vector2 worldtscreen(Vector3 WorldLocation)
{
	
	cdecrypt ViewPoint = viewpoint();
	D3DMATRIX MatrixT = matrix(ViewPoint.rotation);
	Vector3 AxisX = Vector3(MatrixT.m[0][0], MatrixT.m[0][1], MatrixT.m[0][2]);
	Vector3 AxisY = Vector3(MatrixT.m[1][0], MatrixT.m[1][1], MatrixT.m[1][2]);
	Vector3 AxisZ = Vector3(MatrixT.m[2][0], MatrixT.m[2][1], MatrixT.m[2][2]);
	Vector3 Delta = WorldLocation - ViewPoint.location;
	Vector3 Transformed = Vector3(Delta.Dot(AxisY), Delta.Dot(AxisZ), Delta.Dot(AxisX));
	if (Transformed.z < 1.f)
	{
		Transformed.z = 1.f;
	}
	//return Vector2((globals->width / 2.0f) + Transformed.x * (((globals->width / 2.0f) / tanf(ViewPoint.fov * (float)M_PI / 360.f))) / Transformed.z, (globals->height / 2.0f) - Transformed.y * (((globals->width / 2.0f) / tanf(ViewPoint.fov * (float)M_PI / 360.f))) / Transformed.z, 0);
	return Vector2((globals->width / 2.0f) + Transformed.x * (((globals->width / 2.0f) / tanf(ViewPoint.fov * (float)M_PI / 360.f))) / Transformed.z, (globals->height / 2.0f) - Transformed.y * (((globals->width / 2.0f) / tanf(ViewPoint.fov * (float)M_PI / 360.f))) / Transformed.z);

}
//join my server to support me <3
//https://discord.gg/zBpxa4ME5g
