            char* v2; // rdi
            int v4; // er8
            __int64 result; // rax
            __int64 v6; // rdx
            unsigned int v7; // er8
 
            v2 = m_buffer;
            v4 = 14;
            result = m_length;
            if (result)
            {
                v6 = (unsigned int)result;
                do
                {
                    v7 = v4 + 45297;
                    *v2 = v7 + ~*v2;
                    result = v7 << 8;
                    v4 = result | (v7 >> 8);
                    ++v2;
                    --v6;
                } while (v6);
            }
//https://discord.gg/hm-pasta
