extern void func_003E16D0(void *, const char *, int);
extern void func_003E2978(void *, void *, int, int, int, int, int, int, int, int, int, int);
extern void func_003E3FA0(void *, int *, int, int, int);

extern const char D_00489BF8[];
extern const char D_00489C18[];
extern const char D_00489C38[];

void func_003E2270(void *arg0, int arg1, int arg2, int arg3, int arg4, void *arg5, void *arg6, int arg7) {
    int sp20[2];
    int sp30[4];
    int sp40 = arg3;
    int var_16 = 0;
    int temp_12 = arg3 & 8;
    void *p;
    int var_19 = 0;
    int var_5 = 0, var_7 = 0, var_8 = 0, var_9 = 0;
    int var_6 = 0, var_7_2 = 0, var_9_2 = 0;
    int var_5_2 = 0, var_5_3 = 0, var_5_4 = 0;
    
    p = (void *)((char *)arg0 + ((*(int *)((char *)arg0 + 0x810)) * 0x140));
    *(int *)((char *)p + 0x6BC) = 0;
    
    if ((temp_12 != 0) || (*(int *)((char *)arg0 + 0x150) == 2)) {
        int temp_3 = *(int *)((char *)arg0 + 0x174);
        if (temp_3 == 3) {
            if ((arg4 == 2) || (temp_12 == 0)) {
                var_5 = *(int *)((char *)arg0 + 0x1B8);
                var_7 = 0; var_8 = 0; var_9 = 0x10;
                func_003E2978(arg0, (void *)var_5, 0, var_7, var_8, var_9, arg1, arg2, 0, 0, 0, 0);
                return;
            }
            if (arg4 == 1) {
                func_003E2978(arg0, *(void **)((char *)arg0 + 0x1B8), *(int *)((char *)arg6 + 0), 0, 0, 8, arg1, arg2, *(int *)((char *)arg5 + 0), (*(int *)((char *)arg5 + 4)) >> 1, arg4, 0);
                func_003E2978(arg0, *(void **)((char *)arg0 + 0x1B8), *(int *)((char *)arg6 + 8), 1, 0, 8, arg1, arg2, *(int *)((char *)arg5 + 0x10), (*(int *)((char *)arg5 + 0x14)) >> 1, arg4, 0);
                var_16 = 1;
            } else {
                if (arg4 == temp_3) {
                    func_003E3FA0(arg0, sp20, arg7, *(int *)((char *)arg5 + 0), (*(int *)((char *)arg5 + 4)) >> 1);
                    func_003E2978(arg0, *(void **)((char *)arg0 + 0x1B8), 0, 0, 0, 8, arg1, arg2, *(int *)((char *)arg5 + 0), (*(int *)((char *)arg5 + 4)) >> 1, 1, 0);
                    func_003E2978(arg0, *(void **)((char *)arg0 + 0x1B8), 1, 0, 0, 8, arg1, arg2, sp20[0], sp20[1], 1, 1);
                    func_003E2978(arg0, *(void **)((char *)arg0 + 0x1B8), 1, 1, 0, 8, arg1, arg2, *(int *)((char *)arg5 + 0), (*(int *)((char *)arg5 + 4)) >> 1, 1, 0);
                    var_5 = *(int *)((char *)arg0 + 0x1B8);
                    var_7 = 1; var_8 = 0; var_9 = 8;
                    func_003E2978(arg0, (void *)var_5, 0, var_7, var_8, var_9, arg1, arg2, 0, 0, 0, 0);
                    var_16 = 1;
                } else {
                    func_003E16D0(arg0, D_00489BF8, arg4);
                    var_16 = 1;
                }
            }
        } else {
            int temp_7 = *(int *)((char *)arg0 + 0x1C8);
            int temp_23 = (*(int *)((char *)arg0 + 0x150) == 2) ? 1 : 0; /* rough */
            temp_23 = (temp_3 == 2);
            var_19 = 0;
            sp30[0] = temp_7;
            sp30[1] = *(int *)((char *)arg0 + 0x1D8);
            sp30[2] = *(int *)((char *)arg0 + 0x1CC);
            sp30[3] = *(int *)((char *)arg0 + 0x1DC);
            if (*(int *)((char *)arg0 + 0x150) == 2) {
                if (*(int *)((char *)arg0 + 0x120) != 0) {
                    int a = *(int *)((char *)arg6 + 0);
                    var_19 = (temp_23 != a) ? 1 : 0;
                }
            }
            if ((arg4 == 1) || (temp_12 == 0)) {
                int idx = ((*(int *)((char *)arg6 + 0)) * 4) + (var_19 * 8);
                var_5 = *(int *)((char *)sp30 + idx);
                var_7 = 0; var_8 = 0; var_9 = 0x10;
                func_003E2978(arg0, *(void **)(var_5), 0, var_7, var_8, var_9, arg1, arg2, 0, 0, 0, 0);
                var_16 = 1;
            } else if (arg4 == 2) {
                int idx1 = ((*(int *)((char *)arg6 + 0)) * 4) + (var_19 * 8);
                func_003E2978(arg0, *(void **)((char *)sp30 + idx1), 0, 0, 0, 8, arg1, arg2, *(int *)((char *)arg5 + 0), *(int *)((char *)arg5 + 4), 0, 0);
                var_19 = 0;
                if (*(int *)((char *)arg0 + 0x150) == arg4) {
                    if (*(int *)((char *)arg0 + 0x120) != 0) {
                        int a = *(int *)((char *)arg6 + 8);
                        var_19 = ((temp_23 ^ a) == 0) ? 0 : 1;
                    }
                }
                {
                    int idx2 = ((*(int *)((char *)arg6 + 8)) * 4) + (var_19 * 8);
                    var_5 = *(int *)((char *)sp30 + idx2);
                    var_7 = 0; var_8 = 8; var_9 = 8;
                    func_003E2978(arg0, *(void **)(var_5), 0, var_7, var_8, var_9, arg1, arg2, 0, 0, 0, 0);
                }
                var_16 = 1;
            } else if (arg4 == 3) {
                int temp19 = (*(int *)((char *)arg0 + 0x120) == 0) ? 0 : 1;
                func_003E3FA0(arg0, sp20, arg7, *(int *)((char *)arg5 + 0), *(int *)((char *)arg5 + 4));
                func_003E2978(arg0, *(void **)((char *)sp30 + (temp_23 * 4)), 0, 0, 0, 0x10, arg1, arg2, *(int *)((char *)arg5 + 0), *(int *)((char *)arg5 + 4), 0, 0);
                {
                    int idx3;
                    if (temp_23 != 0) {
                        idx3 = (temp19 * 8);
                    } else {
                        idx3 = (temp19 * 8) + 4;
                    }
                    var_5 = *(int *)((char *)sp30 + idx3);
                    var_7 = 0; var_8 = 0; var_9 = 0x10;
                    func_003E2978(arg0, *(void **)(var_5), 0, var_7, var_8, var_9, arg1, arg2, 0, 0, 0, 0);
                }
                var_16 = 1;
            } else {
                func_003E16D0(arg0, D_00489C18, arg4);
                var_16 = 1;
            }
        }
    }
    if (sp40 & 4) {
        if (*(int *)((char *)arg0 + 0x174) == 3) {
            if (arg4 == 2) {
                var_6 = 0; var_7_2 = 0; var_9_2 = 0x10;
                func_003E2978(arg0, *(void **)((char *)arg0 + 0x1BC), var_6, var_7_2, 0, var_9_2, arg1, arg2, 0, 0, 0, 0);
                return;
            } else {
                func_003E2978(arg0, *(void **)((char *)arg0 + 0x1BC), *(int *)((char *)arg6 + 4), 0, 0, 8, arg1, arg2, *(int *)((char *)arg5 + 8), (*(int *)((char *)arg5 + 0xC)) >> 1, 1, var_16);
                var_7_2 = 1; var_9_2 = 8; var_6 = *(int *)((char *)arg6 + 0xC);
                func_003E2978(arg0, *(void **)((char *)arg0 + 0x1BC), var_6, var_7_2, 0, var_9_2, arg1, arg2, 0, 0, 0, 0);
                return;
            }
        }
        if (arg4 == 1) {
            if (*(int *)((char *)arg6 + 4) == 0) {
                var_5_2 = *(int *)((char *)arg0 + 0x1CC);
            } else {
                var_5_2 = *(int *)((char *)arg0 + 0x1DC);
            }
            func_003E2978(arg0, *(void **)var_5_2, 0, 0, 0, 0x10, arg1, arg2, *(int *)((char *)arg5 + 8), *(int *)((char *)arg5 + 0xC), 0, var_16);
            return;
        }
        if (arg4 == 2) {
            if (*(int *)((char *)arg6 + 4) == 0) {
                var_5_3 = *(int *)((char *)arg0 + 0x1CC);
            } else {
                var_5_3 = *(int *)((char *)arg0 + 0x1DC);
            }
            func_003E2978(arg0, *(void **)var_5_3, 0, 0, 0, 8, arg1, arg2, *(int *)((char *)arg5 + 8), *(int *)((char *)arg5 + 0xC), 0, var_16);
            if (*(int *)((char *)arg6 + 0xC) == 0) {
                var_5_4 = *(int *)((char *)arg0 + 0x1CC);
            } else {
                var_5_4 = *(int *)((char *)arg0 + 0x1DC);
            }
            func_003E2978(arg0, *(void **)var_5_4, 0, 0, 8, 8, arg1, arg2, *(int *)((char *)arg5 + 0x18), *(int *)((char *)arg5 + 0x1C), 0, var_16);
            return;
        }
        func_003E16D0(arg0, D_00489C38, arg4);
        return;
    }
    return;
}
