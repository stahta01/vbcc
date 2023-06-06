

/* Machine generated file. DON'T TOUCH ME! */


#ifndef DT_H
#define DT_H 1
typedef int8_t zchar;
typedef uint8_t zuchar;
typedef int16_t zshort;
typedef uint16_t zushort;
typedef int16_t zint;
typedef uint16_t zuint;
typedef int32_t zlong;
typedef uint32_t zulong;
typedef signed long long zllong;
typedef unsigned long long zullong;
typedef struct {char a[4];} dt11f;
typedef dt11f zfloat;
typedef float dt11t;
dt11t dtcnv11f(dt11f);
dt11f dtcnv11t(dt11t);
typedef struct {char a[4];} dt12f;
typedef dt12f zdouble;
typedef float dt12t;
dt12t dtcnv12f(dt12f);
dt12f dtcnv12t(dt12t);
typedef struct {char a[4];} dt13f;
typedef dt13f zldouble;
typedef float dt13t;
dt13t dtcnv13f(dt13f);
dt13f dtcnv13t(dt13t);
typedef uint16_t zpointer;
#define zc2zm(x) ((signed long long)(x))
#define zs2zm(x) ((signed long long)(x))
#define zi2zm(x) ((signed long long)(x))
#define zl2zm(x) ((signed long long)(x))
#define zll2zm(x) ((signed long long)(x))
#define zm2zc(x) ((int8_t)(x))
#define zm2zs(x) ((int16_t)(x))
#define zm2zi(x) ((int16_t)(x))
#define zm2zl(x) ((int32_t)(x))
#define zm2zll(x) ((signed long long)(x))
#define zuc2zum(x) ((unsigned long long)(x))
#define zus2zum(x) ((unsigned long long)(x))
#define zui2zum(x) ((unsigned long long)(x))
#define zul2zum(x) ((unsigned long long)(x))
#define zull2zum(x) ((unsigned long long)(x))
#define zum2zuc(x) ((uint8_t)(x))
#define zum2zus(x) ((uint16_t)(x))
#define zum2zui(x) ((uint16_t)(x))
#define zum2zul(x) ((uint32_t)(x))
#define zum2zull(x) ((unsigned long long)(x))
#define zum2zm(x) ((signed long long)(x))
#define zm2zum(x) ((unsigned long long)(x))
#define zf2zld(x) dtcnv13t((float)dtcnv11f(x))
#define zd2zld(x) dtcnv13t((float)dtcnv12f(x))
#define zld2zf(x) dtcnv11t((float)dtcnv13f(x))
#define zld2zd(x) dtcnv12t((float)dtcnv13f(x))
#define zld2zm(x) ((signed long long)dtcnv13f(x))
#define zm2zld(x) dtcnv13t((float)(x))
#define zld2zum(x) ((unsigned long long)dtcnv13f(x))
#define zum2zld(x) dtcnv13t((float)(x))
#define zp2zum(x) ((unsigned long long)(x))
#define zum2zp(x) ((uint16_t)(x))
#define l2zm(x) ((signed long long)(x))
#define ul2zum(x) ((unsigned long long)(x))
#define d2zld(x) dtcnv13t((float)(x))
#define zm2l(x) ((long)(x))
#define zum2ul(x) ((unsigned long)(x))
#define zld2d(x) ((double)dtcnv13f(x))
#define zmadd(a,b) ((a)+(b))
#define zumadd(a,b) ((a)+(b))
#define zldadd(a,b) dtcnv13t(dtcnv13f(a)+dtcnv13f(b))
#define zmsub(a,b) ((a)-(b))
#define zumsub(a,b) ((a)-(b))
#define zldsub(a,b) dtcnv13t(dtcnv13f(a)-dtcnv13f(b))
#define zmmult(a,b) ((a)*(b))
#define zummult(a,b) ((a)*(b))
#define zldmult(a,b) dtcnv13t(dtcnv13f(a)*dtcnv13f(b))
#define zmdiv(a,b) ((a)/(b))
#define zumdiv(a,b) ((a)/(b))
#define zlddiv(a,b) dtcnv13t(dtcnv13f(a)/dtcnv13f(b))
#define zmmod(a,b) ((a)%(b))
#define zummod(a,b) ((a)%(b))
#define zmlshift(a,b) ((a)<<(b))
#define zumlshift(a,b) ((a)<<(b))
#define zmrshift(a,b) ((a)>>(b))
#define zumrshift(a,b) ((a)>>(b))
#define zmand(a,b) ((a)&(b))
#define zumand(a,b) ((a)&(b))
#define zmor(a,b) ((a)|(b))
#define zumor(a,b) ((a)|(b))
#define zmxor(a,b) ((a)^(b))
#define zumxor(a,b) ((a)^(b))
#define zmmod(a,b) ((a)%(b))
#define zummod(a,b) ((a)%(b))
#define zmkompl(a) (~(a))
#define zumkompl(a) (~(a))
#define zmleq(a,b) ((a)<=(b))
#define zumleq(a,b) ((a)<=(b))
#define zldleq(a,b) (dtcnv13f(a)<=dtcnv13f(b))
#define zmeqto(a,b) ((a)==(b))
#define zumeqto(a,b) ((a)==(b))
#define zldeqto(a,b) (dtcnv13f(a)==dtcnv13f(b))
#endif