//https://discord.gg/h-m
Vector3 bonewithrotation(uintptr_t MESH, int ID)
{	
	uintptr_t BoneA = request->read<uintptr_t>(MESH + 0x5B0);
	if (BoneA == NULL)
	{
		BoneA = request->read<uintptr_t>(MESH + 0x5B0 + 0x10);
	}
	FTransform Bone = request->read<FTransform>(BoneA + (ID * 0x60));
	FTransform Comp = request->read<FTransform>(MESH + 0x1c0);
	D3DMATRIX matrix = matrixm(Bone.ToMatrixWithScale(), Comp.ToMatrixWithScale());
	return Vector3(matrix._41, matrix._42, matrix._43);
}

//join my server to support me <3
//https://discord.gg/h-m
