extern u32 D_0047B808;
extern u32 D_0047B810;
s32 func_00295C50(s32 *arg0, void *arg1) {
    // Force 96-byte stack frame with a 16-element s32 array
    s32 stack_buf[16];
    s32 *ptr = stack_buf;
    
    // First registration with "List" string
    func_001D4040(&D_0047B808);
    
    // Second registration with "Name" string
    func_001D4040(&D_0047B810);
    
    // Use the pointer to force stack layout
    *ptr = 0;
    
    return 1;
}
