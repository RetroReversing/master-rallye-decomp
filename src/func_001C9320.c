typedef struct {float key;u32 v;} __attribute__((packed)) E;
extern void func_001C91C8(E*,E*);
void func_001C9160(E *p,E value){E *q=p-1;while((*(float*)&value > *(float*)q)?1:0){*p=*q;p=q;q=p-1;}*p=value;}
void func_001C92C0(E *p,E *end,s32 unused){for(;p!=end;p++){E v=*p;func_001C9160(p,v);}}
void func_001C9320(E *p,E *end){if(end-p>16){E *q=p+16;func_001C91C8(p,q);func_001C92C0(q,end,0);}else func_001C91C8(p,end);}
s32 *func_001C94F8(s32 *p,s32 n,s32 *v){for(;n!=0;--n,++p)if(p)*p=*v;return p;}
