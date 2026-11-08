extern void *D_00428F24;
extern void *func_002C2EE0(void);
extern void func_002C39D8(void *);
int func_001101D0(void){
    void *obj;
    if(D_00428F24==0) func_002C39D8(func_002C2EE0());
    obj=D_00428F24;
    if(obj!=0){
        void **vt=*(void***)obj;
        return ((int(*)(void*))vt[23])((char*)obj+*(short*)((char*)vt+0x58))==0;
    }
    return 1;
}
