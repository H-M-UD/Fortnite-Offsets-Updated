Vector3 GetBoneWithRotation(uintptr_t mesh, int bone_id)
{
	uintptr_t bone_array = hm->rd<uintptr_t>(mesh + 0x600);
	if (bone_array == NULL) bone_array = hm->rd<uintptr_t>(mesh + 0x600 + 0x10);
	FTransform bone = hm->rd<FTransform>(bone_array + (bone_id * 0x60));
	FTransform component_to_world = hm->rd<FTransform>(mesh + 0x240);
	D3DMATRIX matrix = MatrixMultiplication(bone.ToMatrixWithScale(), component_to_world.ToMatrixWithScale());
	return Vector3(matrix._41, matrix._42, matrix._43);
}

//join my server to support me <3
//https://discord.gg/h-m
