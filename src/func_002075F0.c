typedef struct{s32 b,e,c;} FV;
void func_00207650(FV*a,FV*b,FV*c){s32 n=(c->e-c->b)>>2,i=0;if(n>0)do{s32 off=i*4;i++;*(float*)(c->b+off)=*(float*)(a->b+off)-*(float*)(b->b+off);}while(i<n);}
void func_002075F0(FV*a,FV*b,FV*c){s32 n=(c->e-c->b)>>2,i=0;if(n>0)do{s32 off=i*4;i++;*(float*)(c->b+off)=*(float*)(a->b+off)+*(float*)(b->b+off);}while(i<n);}
void func_00207598(FV*a,FV*b){s32 n=(a->e-a->b)>>2,i=0;if(n>0)do{s32 off=i*4;float*p;i++;p=(float*)(a->b+off);*p-=*(float*)(b->b+off);}while(i<n);}
