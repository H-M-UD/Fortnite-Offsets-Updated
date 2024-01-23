 char* v25 = buff; // rdi
        int v26 = nameLength; // ebx
        int v27;
        unsigned int v28;
        char* v29;
        char v30;
        
        v27 = 0;
        v28 = Read<unsigned int>(Driver.BaseAddress + 0xE851E58) >> 5;
 
        if (v26)
        {
            v29 = v25;
            do
            {
                v30 = v28 ^ (16 * *v29) ^ (v28 ^ ((unsigned int)*v29 >> 4)) & 0xF;
                v28 += 4 * v27;
                *v29 = v30;
                ++v27;
                ++v29;
            } while (v27 < v26);
        }

//join my server to support me <3
//https://discord.gg/XyzVnsUZtv
