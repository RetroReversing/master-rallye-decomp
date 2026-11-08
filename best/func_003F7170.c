float func_003F72D0(float x, float y);

float func_003F7170(int arg0, float fparg0) {
    unsigned int a1;
    unsigned int a2;
    int v1;
    int v0;
    float f0;
    float f1;
    float f2;
    float f20;
    
    a1 = *(unsigned int *)&fparg0;
    a2 = a1;
    v0 = a2 & 0x7F800000;
    v1 = (int)(v0 >> 23);
    if (v1 != 0) {
        goto L003F7200;
    }
    v0 = a2 & 0x7FFFFFFF;
    if (v0 != 0) {
        f1 = fparg0 * 3.3554432e7f;
        a1 = *(unsigned int *)&f1;
        a2 = a1;
        v1 = ((int)(a1 & 0x7F800000) >> 23) - 0x19;
        if (arg0 < 0xFFFF3CB0) {
            f0 = f1 * 1e-30f;
            return f0;
        }
        goto L003F7200;
    } else {
        return fparg0;
    }
    
L003F7200:
    {
        int temp3 = v1 + arg0;
        if (v1 == 0xFF) {
            f0 = fparg0 * 2.0f;
            return f0;
        }
        if (temp3 < 0xFF) {
            if (temp3 > 0) {
                unsigned int res = (a2 & 0x807FFFFF) | (temp3 << 23);
                return *(float *)&res;
            }
            if (temp3 < -0x18) {
                if (arg0 > 0xC350) {
                    f20 = 1e30f;
                } else {
                    f20 = 1e-30f;
                }
                f0 = func_003F72D0(fparg0, f20) * f20;
                return f0;
            }
            {
                unsigned int res = (a2 & 0x807FFFFF) | ((temp3 + 0x19) << 23);
                f0 = *(float *)&res * 2.9802322e-8f;
                return f0;
            }
        }
        if (temp3 < -0x18) {
            if (arg0 > 0xC350) {
                f20 = 1e30f;
            } else {
                f20 = 1e-30f;
            }
            f0 = func_003F72D0(fparg0, f20) * f20;
            return f0;
        } else {
            unsigned int res = (a2 & 0x807FFFFFU) | ((temp3 + 0x19) << 23);
            f0 = *(float *)&res * 2.9802322e-8f;
            return f0;
        }
    }
}
