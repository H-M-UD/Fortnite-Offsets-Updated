CamewaDescwipsion GetViewPoint(ProtectedClass* p)
{
    __int64 result; // rax
    __int64 v7; // rcx
 
    result = p->Read<__int64>(base_address + 0xE2CED18);
    v7 = base_address + 0xE2CECD8;
    if (result)
        v7 = result;
 
    __int64 CameraBuffer = p->Read<__int64>(p->Read<__int64>(v7) + 8) ^ 0x4CF1F15DFE2D977Fi64;
    return p->Read<CamewaDescwipsion>(CameraBuffer);
}
