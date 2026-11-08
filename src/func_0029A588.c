void func_0029A588(s32 unused, s32 *arg1, s32 *arg2, u32 arg3, u32 arg4, s32 arg5, s32 arg6, u32 arg7, u32 arg_sp0)
{
    s32 var_2;
    switch (arg5) {
    case 0:
        *arg1 = 0;
        break;
    case 1: {
        s32 x = ((s32)((u32)arg7 + ((u32)arg7 >> 31)) >> 1);
        *arg1 = x - ((s32)((u32)arg3 + ((u32)arg3 >> 31)) >> 1);
        break;
    }
    case 2:
        var_2 = (s32)(arg7 - arg3);
        *arg1 = var_2;
        break;
    }
    switch (arg6) {
    case 0:
        *arg2 = 0;
        return;
    case 1:
        *arg2 = ((s32)((u32)arg_sp0 + ((u32)arg_sp0 >> 31)) >> 1) - ((s32)((u32)arg4 + ((u32)arg4 >> 31)) >> 1);
        return;
    case 2:
        *arg2 = (s32)(arg_sp0 - arg4);
        return;
    }
}
