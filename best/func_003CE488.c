s32 func_003F9288(s8 *a, const s8 *b, s32 n);

s32 func_003CE3E0(void **arg0, const s8 *arg1, s32 arg2, s32 arg3) {
    u8 *haystack;
    s32 hay_len;
    s32 pos;
    u32 limit;
    
    haystack = (u8 *)(*arg0);
    hay_len = *(s32 *)(haystack - 0x10);
    limit = (u32)hay_len;
    if ((u32)hay_len < (u32)(arg2 + arg3)) {
        return -1;
    }
    pos = arg2;
    for (;;) {
        if ((u32)hay_len < (u32)(pos + arg3)) {
            break;
        }
        if (haystack[pos] == *arg1) {
            if (func_003F9288((s8 *)(haystack + pos), arg1, arg3) == 0) {
                return pos;
            }
        }
        pos++;
    }
    return -1;
}

s32 func_003CE488(void **arg0, s8 arg1, u32 arg2) {
    u8 *haystack;
    s32 hay_len;
    u32 pos;
    s8 c;
    
    haystack = (u8 *)(*arg0);
    hay_len = *(s32 *)(haystack - 0x10);
    c = arg1;
    if (arg2 < (u32)hay_len) {
        pos = arg2;
        do {
            if (haystack[pos] != c) {
                pos++;
            } else {
                return (s32)pos;
            }
        } while (pos < (u32)hay_len);
    }
    return -1;
}

s32 func_003CE4E8(void **arg0, const s8 *arg1, u32 arg2, u32 arg3) {
    u8 *haystack;
    s32 hay_len;
    s32 start;
    s32 pos;
    s32 limit;
    
    haystack = (u8 *)(*arg0);
    hay_len = *(s32 *)(haystack - 0x10);
    if ((s32)arg3 > hay_len) {
        return -1;
    }
    limit = hay_len - (s32)arg3;
    start = (s32)arg2;
    if ((u32)start > (u32)limit) {
        start = limit;
    }
    start = start + 1;
    if (start <= 0) {
        return -1;
    }
    pos = start - 1;
    for (;;) {
        if (haystack[pos] == *arg1) {
            if (func_003F9288((s8 *)(haystack + pos), arg1, (s32)arg3) == 0) {
                return pos;
            }
        }
        if (pos == 0) {
            break;
        }
        pos--;
    }
    return -1;
}

s32 func_003CE5A8(void **arg0, s8 arg1, u32 arg2) {
    u8 *haystack;
    s32 hay_len;
    s32 start;
    s32 pos;
    
    haystack = (u8 *)(*arg0);
    hay_len = *(s32 *)(haystack - 0x10);
    if (hay_len == 0) {
        return -1;
    }
    start = hay_len - 1;
    if (arg2 < (u32)start) {
        start = (s32)arg2;
    }
    start = start + 1;
    if (start <= 0) {
        return -1;
    }
    pos = start - 1;
    for (;;) {
        if (haystack[pos] == arg1) {
            return pos;
        }
        if (pos == 0) {
            break;
        }
        pos--;
    }
    return -1;
}
