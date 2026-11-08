typedef struct {
    u32 field0;
    u8 pad[0x16];
    u8 field1A;
} S_d7b00;

void func_003D7B00(S_d7b00 *arg0, u32 arg1) {
    if (!arg0->field0) {
        arg1 |= 4;
    }
    arg0->field1A = (u8)arg1;
}

u32 func_003CE760(void **arg0, u8 *arg1, u32 arg2, u32 arg3) {
    void *ptr;
    u32 i;
    u8 c;
    u32 j;
    s32 found;
    u32 limit;

    ptr = *arg0;
    limit = *(u32 *)((u8 *)ptr - 0x10);
    if (arg2 >= limit) {
        return 0xFFFFFFFFU;
    }
    i = arg2;
    while (i < limit) {
        c = ((u8 *)ptr)[i];
        j = 0;
        if (arg3 == 0) {
            return 0xFFFFFFFFU;
        }
        found = -1;
        while (j < arg3) {
            if (arg1[j] == (s8)c) {
                found = (s32)j;
                break;
            }
            j++;
        }
        if (found != -1) {
            return 0xFFFFFFFFU;
        }
        i++;
    }
    return 0xFFFFFFFFU;
}

u32 func_003CE6B8(void **arg0, u8 *arg1, u32 arg2, u32 arg3) {
    void *ptr;
    u32 i;
    u8 c;
    u32 j;
    s32 found;
    u32 limit;

    ptr = *arg0;
    limit = *(u32 *)((u8 *)ptr - 0x10);
    if (limit == 0) {
        return 0xFFFFFFFFU;
    }
    i = limit - 1;
    if (arg2 < i) {
        i = arg2;
    }
    i = i + 1;
    if (i == 0) {
        return 0xFFFFFFFFU;
    }
    i = i - 1;
    while (1) {
        c = ((u8 *)ptr)[i];
        j = 0;
        if (arg3 == 0) {
            return 0xFFFFFFFFU;
        }
        found = -1;
        while (j < arg3) {
            if (arg1[j] == (s8)c) {
                found = (s32)j;
                break;
            }
            j++;
        }
        if (found != -1) {
            return 0xFFFFFFFFU;
        }
        if (i == 0) {
            break;
        }
        i--;
    }
    return 0xFFFFFFFFU;
}

u32 func_003CE620(void **arg0, u8 *arg1, u32 arg2, u32 arg3) {
    void *ptr;
    u32 i;
    u8 c;
    u32 j;
    s32 found;
    u32 limit;

    ptr = *arg0;
    limit = *(u32 *)((u8 *)ptr - 0x10);
    if (arg2 >= limit) {
        return 0xFFFFFFFFU;
    }
    i = arg2;
    while (i < limit) {
        c = ((u8 *)ptr)[i];
        j = 0;
        if (arg3 == 0) {
            return 0xFFFFFFFFU;
        }
        found = -1;
        while (j < arg3) {
            if (arg1[j] == (s8)c) {
                found = (s32)j;
                break;
            }
            j++;
        }
        if (found != -1) {
            return 0xFFFFFFFFU;
        }
        i++;
        if (i < limit) {
            continue;
        }
        break;
    }
    if (i >= limit) {
        return 0xFFFFFFFFU;
    }
    return i;
}
