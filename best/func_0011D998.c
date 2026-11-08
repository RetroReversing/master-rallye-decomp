extern s32 func_00296710(void),func_00194C40(void),func_00193D58(s32),func_00296530(s32,s32);
extern void func_00296550(s32,s32,float*,float*),func_002965B8(s32,s32,float,float),func_001E3EC0(s32,void*,s32),func_00193C78(s32,s32);
typedef struct{char pad[32];s32 key,flag,value;} Slider;
void func_0011D998(Slider *o,s32 id){float x,y;if(func_00296530(func_00296710(),id)&&func_00193D58(func_00194C40())){x=0.0f;y=0.0f;func_00296550(func_00296710(),id,&x,&y);func_002965B8(func_00296710(),id,(float)o->value,y);func_001E3EC0(func_001E4280(),&o->key,o->value);func_00193C78(func_00194C40(),0);o->flag=0;}}
