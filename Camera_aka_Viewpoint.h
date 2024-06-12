//https://discord.gg/zBpxa4ME5g
struct cdecrypt
{
	Vector3 location;
	Vector3 rotation;
	float fov;
};

cdecrypt viewpoint()
{
	
	uintptr_t cachedgworld = request->read<uintptr_t>(globals->imagebase + offsets->gworld);
	uintptr_t cachedgameinstance = request->read<uintptr_t>(cachedgworld + offsets->gameinstance);
	uintptr_t cachedlocalplayers = request->read<uintptr_t>(cachedgameinstance + offsets->localplayers);
	uintptr_t cachedlocalplayer = request->read<uintptr_t>(cachedlocalplayers);
	uintptr_t cachedplayercontroller = request->read<uintptr_t>(cachedlocalplayer + offsets->playercontroller);

	cdecrypt camera;

	auto locationp = request->read<uintptr_t>(cachedgworld + 0x110);
	auto rotationp = request->read<uintptr_t>(cachedgworld + 0x120);

	struct fnrotation
	{
		double a;
		double b;
		double c;
	}fnrotation;

	fnrotation.a = request->read<double>(rotationp);
	fnrotation.b = request->read<double>(rotationp + 0x20);
	fnrotation.c = request->read<double>(rotationp + 0x1d0);

	camera.location = request->read<Vector3>(locationp);
	camera.rotation.x = asin(fnrotation.c) * (180.0 / M_PI);
	camera.rotation.y = ((atan2(fnrotation.a * -1, fnrotation.b) * (180.0 / M_PI)) * -1) * -1;
	camera.fov = request->read<float>((uintptr_t)cachedplayercontroller + 0x394) * 90.f;

	return camera;
}
//https://discord.gg/zBpxa4ME5g
