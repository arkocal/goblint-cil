#include <pthread.h>
#include <stddef.h>
extern void __goblint_check(int);

struct big0 { char c[60]; int x; };
struct al0 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big0))));
struct outer0 { char c; struct al0 in; long l; };
struct big1 { char c[60]; int x; };
struct al1 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big1))));
struct outer1 { char c; struct al1 in; long l; };
struct big2 { char c[60]; int x; };
struct al2 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big2))));
struct outer2 { char c; struct al2 in; long l; };
struct big3 { char c[60]; int x; };
struct al3 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big3))));
struct outer3 { char c; struct al3 in; long l; };
struct big4 { char c[60]; int x; };
struct al4 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big4))));
struct outer4 { char c; struct al4 in; long l; };
struct big5 { char c[60]; int x; };
struct al5 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big5))));
struct outer5 { char c; struct al5 in; long l; };
struct big6 { char c[60]; int x; };
struct al6 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big6))));
struct outer6 { char c; struct al6 in; long l; };
struct big7 { char c[60]; int x; };
struct al7 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big7))));
struct outer7 { char c; struct al7 in; long l; };
struct big8 { char c[60]; int x; };
struct al8 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big8))));
struct outer8 { char c; struct al8 in; long l; };
struct big9 { char c[60]; int x; };
struct al9 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big9))));
struct outer9 { char c; struct al9 in; long l; };
struct big10 { char c[60]; int x; };
struct al10 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big10))));
struct outer10 { char c; struct al10 in; long l; };
struct big11 { char c[60]; int x; };
struct al11 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big11))));
struct outer11 { char c; struct al11 in; long l; };
struct big12 { char c[60]; int x; };
struct al12 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big12))));
struct outer12 { char c; struct al12 in; long l; };
struct big13 { char c[60]; int x; };
struct al13 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big13))));
struct outer13 { char c; struct al13 in; long l; };
struct big14 { char c[60]; int x; };
struct al14 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big14))));
struct outer14 { char c; struct al14 in; long l; };
struct big15 { char c[60]; int x; };
struct al15 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big15))));
struct outer15 { char c; struct al15 in; long l; };
struct big16 { char c[60]; int x; };
struct al16 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big16))));
struct outer16 { char c; struct al16 in; long l; };
struct big17 { char c[60]; int x; };
struct al17 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big17))));
struct outer17 { char c; struct al17 in; long l; };
struct big18 { char c[60]; int x; };
struct al18 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big18))));
struct outer18 { char c; struct al18 in; long l; };
struct big19 { char c[60]; int x; };
struct al19 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big19))));
struct outer19 { char c; struct al19 in; long l; };
struct big20 { char c[60]; int x; };
struct al20 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big20))));
struct outer20 { char c; struct al20 in; long l; };
struct big21 { char c[60]; int x; };
struct al21 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big21))));
struct outer21 { char c; struct al21 in; long l; };
struct big22 { char c[60]; int x; };
struct al22 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big22))));
struct outer22 { char c; struct al22 in; long l; };
struct big23 { char c[60]; int x; };
struct al23 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big23))));
struct outer23 { char c; struct al23 in; long l; };
struct big24 { char c[60]; int x; };
struct al24 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big24))));
struct outer24 { char c; struct al24 in; long l; };
struct big25 { char c[60]; int x; };
struct al25 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big25))));
struct outer25 { char c; struct al25 in; long l; };
struct big26 { char c[60]; int x; };
struct al26 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big26))));
struct outer26 { char c; struct al26 in; long l; };
struct big27 { char c[60]; int x; };
struct al27 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big27))));
struct outer27 { char c; struct al27 in; long l; };
struct big28 { char c[60]; int x; };
struct al28 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big28))));
struct outer28 { char c; struct al28 in; long l; };
struct big29 { char c[60]; int x; };
struct al29 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big29))));
struct outer29 { char c; struct al29 in; long l; };
struct big30 { char c[60]; int x; };
struct al30 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big30))));
struct outer30 { char c; struct al30 in; long l; };
struct big31 { char c[60]; int x; };
struct al31 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big31))));
struct outer31 { char c; struct al31 in; long l; };
struct big32 { char c[60]; int x; };
struct al32 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big32))));
struct outer32 { char c; struct al32 in; long l; };
struct big33 { char c[60]; int x; };
struct al33 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big33))));
struct outer33 { char c; struct al33 in; long l; };
struct big34 { char c[60]; int x; };
struct al34 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big34))));
struct outer34 { char c; struct al34 in; long l; };
struct big35 { char c[60]; int x; };
struct al35 { char a; int b[1]; } __attribute__((aligned(sizeof(struct big35))));
struct outer35 { char c; struct al35 in; long l; };
struct big36 { char c[60]; int x; };
struct al36 { char a; int b[2]; } __attribute__((aligned(sizeof(struct big36))));
struct outer36 { char c; struct al36 in; long l; };
struct big37 { char c[60]; int x; };
struct al37 { char a; int b[3]; } __attribute__((aligned(sizeof(struct big37))));
struct outer37 { char c; struct al37 in; long l; };
struct big38 { char c[60]; int x; };
struct al38 { char a; int b[4]; } __attribute__((aligned(sizeof(struct big38))));
struct outer38 { char c; struct al38 in; long l; };
struct big39 { char c[60]; int x; };
struct al39 { char a; int b[5]; } __attribute__((aligned(sizeof(struct big39))));
struct outer39 { char c; struct al39 in; long l; };

struct outer0 g0[4];
void *t0(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer0 *p = &g0[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al0) == 64);
    __goblint_check(_Alignof(struct al0) == 64);
    __goblint_check(offsetof(struct outer0, in) == 64);
    __goblint_check(sizeof(struct outer0) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer1 g1[4];
void *t1(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer1 *p = &g1[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al1) == 64);
    __goblint_check(_Alignof(struct al1) == 64);
    __goblint_check(offsetof(struct outer1, in) == 64);
    __goblint_check(sizeof(struct outer1) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer2 g2[4];
void *t2(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer2 *p = &g2[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al2) == 64);
    __goblint_check(_Alignof(struct al2) == 64);
    __goblint_check(offsetof(struct outer2, in) == 64);
    __goblint_check(sizeof(struct outer2) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer3 g3[4];
void *t3(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer3 *p = &g3[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al3) == 64);
    __goblint_check(_Alignof(struct al3) == 64);
    __goblint_check(offsetof(struct outer3, in) == 64);
    __goblint_check(sizeof(struct outer3) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer4 g4[4];
void *t4(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer4 *p = &g4[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al4) == 64);
    __goblint_check(_Alignof(struct al4) == 64);
    __goblint_check(offsetof(struct outer4, in) == 64);
    __goblint_check(sizeof(struct outer4) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer5 g5[4];
void *t5(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer5 *p = &g5[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al5) == 64);
    __goblint_check(_Alignof(struct al5) == 64);
    __goblint_check(offsetof(struct outer5, in) == 64);
    __goblint_check(sizeof(struct outer5) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer6 g6[4];
void *t6(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer6 *p = &g6[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al6) == 64);
    __goblint_check(_Alignof(struct al6) == 64);
    __goblint_check(offsetof(struct outer6, in) == 64);
    __goblint_check(sizeof(struct outer6) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer7 g7[4];
void *t7(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer7 *p = &g7[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al7) == 64);
    __goblint_check(_Alignof(struct al7) == 64);
    __goblint_check(offsetof(struct outer7, in) == 64);
    __goblint_check(sizeof(struct outer7) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer8 g8[4];
void *t8(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer8 *p = &g8[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al8) == 64);
    __goblint_check(_Alignof(struct al8) == 64);
    __goblint_check(offsetof(struct outer8, in) == 64);
    __goblint_check(sizeof(struct outer8) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer9 g9[4];
void *t9(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer9 *p = &g9[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al9) == 64);
    __goblint_check(_Alignof(struct al9) == 64);
    __goblint_check(offsetof(struct outer9, in) == 64);
    __goblint_check(sizeof(struct outer9) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer10 g10[4];
void *t10(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer10 *p = &g10[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al10) == 64);
    __goblint_check(_Alignof(struct al10) == 64);
    __goblint_check(offsetof(struct outer10, in) == 64);
    __goblint_check(sizeof(struct outer10) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer11 g11[4];
void *t11(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer11 *p = &g11[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al11) == 64);
    __goblint_check(_Alignof(struct al11) == 64);
    __goblint_check(offsetof(struct outer11, in) == 64);
    __goblint_check(sizeof(struct outer11) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer12 g12[4];
void *t12(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer12 *p = &g12[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al12) == 64);
    __goblint_check(_Alignof(struct al12) == 64);
    __goblint_check(offsetof(struct outer12, in) == 64);
    __goblint_check(sizeof(struct outer12) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer13 g13[4];
void *t13(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer13 *p = &g13[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al13) == 64);
    __goblint_check(_Alignof(struct al13) == 64);
    __goblint_check(offsetof(struct outer13, in) == 64);
    __goblint_check(sizeof(struct outer13) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer14 g14[4];
void *t14(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer14 *p = &g14[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al14) == 64);
    __goblint_check(_Alignof(struct al14) == 64);
    __goblint_check(offsetof(struct outer14, in) == 64);
    __goblint_check(sizeof(struct outer14) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer15 g15[4];
void *t15(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer15 *p = &g15[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al15) == 64);
    __goblint_check(_Alignof(struct al15) == 64);
    __goblint_check(offsetof(struct outer15, in) == 64);
    __goblint_check(sizeof(struct outer15) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer16 g16[4];
void *t16(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer16 *p = &g16[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al16) == 64);
    __goblint_check(_Alignof(struct al16) == 64);
    __goblint_check(offsetof(struct outer16, in) == 64);
    __goblint_check(sizeof(struct outer16) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer17 g17[4];
void *t17(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer17 *p = &g17[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al17) == 64);
    __goblint_check(_Alignof(struct al17) == 64);
    __goblint_check(offsetof(struct outer17, in) == 64);
    __goblint_check(sizeof(struct outer17) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer18 g18[4];
void *t18(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer18 *p = &g18[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al18) == 64);
    __goblint_check(_Alignof(struct al18) == 64);
    __goblint_check(offsetof(struct outer18, in) == 64);
    __goblint_check(sizeof(struct outer18) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer19 g19[4];
void *t19(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer19 *p = &g19[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al19) == 64);
    __goblint_check(_Alignof(struct al19) == 64);
    __goblint_check(offsetof(struct outer19, in) == 64);
    __goblint_check(sizeof(struct outer19) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer20 g20[4];
void *t20(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer20 *p = &g20[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al20) == 64);
    __goblint_check(_Alignof(struct al20) == 64);
    __goblint_check(offsetof(struct outer20, in) == 64);
    __goblint_check(sizeof(struct outer20) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer21 g21[4];
void *t21(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer21 *p = &g21[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al21) == 64);
    __goblint_check(_Alignof(struct al21) == 64);
    __goblint_check(offsetof(struct outer21, in) == 64);
    __goblint_check(sizeof(struct outer21) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer22 g22[4];
void *t22(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer22 *p = &g22[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al22) == 64);
    __goblint_check(_Alignof(struct al22) == 64);
    __goblint_check(offsetof(struct outer22, in) == 64);
    __goblint_check(sizeof(struct outer22) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer23 g23[4];
void *t23(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer23 *p = &g23[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al23) == 64);
    __goblint_check(_Alignof(struct al23) == 64);
    __goblint_check(offsetof(struct outer23, in) == 64);
    __goblint_check(sizeof(struct outer23) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer24 g24[4];
void *t24(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer24 *p = &g24[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al24) == 64);
    __goblint_check(_Alignof(struct al24) == 64);
    __goblint_check(offsetof(struct outer24, in) == 64);
    __goblint_check(sizeof(struct outer24) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer25 g25[4];
void *t25(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer25 *p = &g25[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al25) == 64);
    __goblint_check(_Alignof(struct al25) == 64);
    __goblint_check(offsetof(struct outer25, in) == 64);
    __goblint_check(sizeof(struct outer25) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer26 g26[4];
void *t26(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer26 *p = &g26[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al26) == 64);
    __goblint_check(_Alignof(struct al26) == 64);
    __goblint_check(offsetof(struct outer26, in) == 64);
    __goblint_check(sizeof(struct outer26) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer27 g27[4];
void *t27(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer27 *p = &g27[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al27) == 64);
    __goblint_check(_Alignof(struct al27) == 64);
    __goblint_check(offsetof(struct outer27, in) == 64);
    __goblint_check(sizeof(struct outer27) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer28 g28[4];
void *t28(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer28 *p = &g28[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al28) == 64);
    __goblint_check(_Alignof(struct al28) == 64);
    __goblint_check(offsetof(struct outer28, in) == 64);
    __goblint_check(sizeof(struct outer28) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer29 g29[4];
void *t29(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer29 *p = &g29[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al29) == 64);
    __goblint_check(_Alignof(struct al29) == 64);
    __goblint_check(offsetof(struct outer29, in) == 64);
    __goblint_check(sizeof(struct outer29) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer30 g30[4];
void *t30(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer30 *p = &g30[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al30) == 64);
    __goblint_check(_Alignof(struct al30) == 64);
    __goblint_check(offsetof(struct outer30, in) == 64);
    __goblint_check(sizeof(struct outer30) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer31 g31[4];
void *t31(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer31 *p = &g31[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al31) == 64);
    __goblint_check(_Alignof(struct al31) == 64);
    __goblint_check(offsetof(struct outer31, in) == 64);
    __goblint_check(sizeof(struct outer31) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer32 g32[4];
void *t32(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer32 *p = &g32[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al32) == 64);
    __goblint_check(_Alignof(struct al32) == 64);
    __goblint_check(offsetof(struct outer32, in) == 64);
    __goblint_check(sizeof(struct outer32) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer33 g33[4];
void *t33(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer33 *p = &g33[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al33) == 64);
    __goblint_check(_Alignof(struct al33) == 64);
    __goblint_check(offsetof(struct outer33, in) == 64);
    __goblint_check(sizeof(struct outer33) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer34 g34[4];
void *t34(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer34 *p = &g34[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al34) == 64);
    __goblint_check(_Alignof(struct al34) == 64);
    __goblint_check(offsetof(struct outer34, in) == 64);
    __goblint_check(sizeof(struct outer34) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer35 g35[4];
void *t35(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer35 *p = &g35[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al35) == 64);
    __goblint_check(_Alignof(struct al35) == 64);
    __goblint_check(offsetof(struct outer35, in) == 64);
    __goblint_check(sizeof(struct outer35) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer36 g36[4];
void *t36(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer36 *p = &g36[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al36) == 64);
    __goblint_check(_Alignof(struct al36) == 64);
    __goblint_check(offsetof(struct outer36, in) == 64);
    __goblint_check(sizeof(struct outer36) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer37 g37[4];
void *t37(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer37 *p = &g37[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al37) == 64);
    __goblint_check(_Alignof(struct al37) == 64);
    __goblint_check(offsetof(struct outer37, in) == 64);
    __goblint_check(sizeof(struct outer37) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer38 g38[4];
void *t38(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer38 *p = &g38[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al38) == 64);
    __goblint_check(_Alignof(struct al38) == 64);
    __goblint_check(offsetof(struct outer38, in) == 64);
    __goblint_check(sizeof(struct outer38) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
struct outer39 g39[4];
void *t39(void *arg) {
  for (int k = 0; k < 4; k++) {
    struct outer39 *p = &g39[k];
    p->in.b[0] = k; p->l = k;
    __goblint_check(sizeof(struct al39) == 64);
    __goblint_check(_Alignof(struct al39) == 64);
    __goblint_check(offsetof(struct outer39, in) == 64);
    __goblint_check(sizeof(struct outer39) == 192);
    __goblint_check((char*)&p->l - (char*)p == 128);
  }
  return 0;
}
int main() {
  pthread_t th[40];
  pthread_create(&th[0], 0, t0, 0);
  pthread_create(&th[1], 0, t1, 0);
  pthread_create(&th[2], 0, t2, 0);
  pthread_create(&th[3], 0, t3, 0);
  pthread_create(&th[4], 0, t4, 0);
  pthread_create(&th[5], 0, t5, 0);
  pthread_create(&th[6], 0, t6, 0);
  pthread_create(&th[7], 0, t7, 0);
  pthread_create(&th[8], 0, t8, 0);
  pthread_create(&th[9], 0, t9, 0);
  pthread_create(&th[10], 0, t10, 0);
  pthread_create(&th[11], 0, t11, 0);
  pthread_create(&th[12], 0, t12, 0);
  pthread_create(&th[13], 0, t13, 0);
  pthread_create(&th[14], 0, t14, 0);
  pthread_create(&th[15], 0, t15, 0);
  pthread_create(&th[16], 0, t16, 0);
  pthread_create(&th[17], 0, t17, 0);
  pthread_create(&th[18], 0, t18, 0);
  pthread_create(&th[19], 0, t19, 0);
  pthread_create(&th[20], 0, t20, 0);
  pthread_create(&th[21], 0, t21, 0);
  pthread_create(&th[22], 0, t22, 0);
  pthread_create(&th[23], 0, t23, 0);
  pthread_create(&th[24], 0, t24, 0);
  pthread_create(&th[25], 0, t25, 0);
  pthread_create(&th[26], 0, t26, 0);
  pthread_create(&th[27], 0, t27, 0);
  pthread_create(&th[28], 0, t28, 0);
  pthread_create(&th[29], 0, t29, 0);
  pthread_create(&th[30], 0, t30, 0);
  pthread_create(&th[31], 0, t31, 0);
  pthread_create(&th[32], 0, t32, 0);
  pthread_create(&th[33], 0, t33, 0);
  pthread_create(&th[34], 0, t34, 0);
  pthread_create(&th[35], 0, t35, 0);
  pthread_create(&th[36], 0, t36, 0);
  pthread_create(&th[37], 0, t37, 0);
  pthread_create(&th[38], 0, t38, 0);
  pthread_create(&th[39], 0, t39, 0);
  return 0;
}
