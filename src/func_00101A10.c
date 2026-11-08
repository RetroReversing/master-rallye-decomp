extern void func_001D4040(void*,const char*);extern int func_001E3598(int,void*);extern int func_00193B60(void);extern void func_00192710(int,int,int);extern void func_00192780(int,int,int);extern char D_00444B00[],D_00444B18[];
static inline void*key(void*p,const char*s){func_001D4040(p,s);return p;}
void func_00101A10(int unused,int index,int limit){u32 buf[4];if(func_001E3598(func_001E4280(),key(buf,D_00444B00)))limit=0;if(index<limit)func_00192710(func_00193B60(),index,1);else func_00192710(func_00193B60(),index,2);
if(index<limit){if(index==1){func_00192780(func_00193B60(),0,5);func_00192780(func_00193B60(),1,6);}else func_00192780(func_00193B60(),index,4);}else func_00192780(func_00193B60(),index,0);
if(func_001E3598(func_001E4280(),key(buf,D_00444B18)))func_00192780(func_00193B60(),index,0);}
