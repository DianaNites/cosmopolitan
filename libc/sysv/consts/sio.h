#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_SIO_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_SIO_H_
#include "libc/runtime/symbolic.h"

#define SIOCADDDLCI SYMBOLIC(SIOCADDDLCI)
#define SIOCADDMULTI SYMBOLIC(SIOCADDMULTI)
#define SIOCADDRT SYMBOLIC(SIOCADDRT)
#define SIOCATMARK SYMBOLIC(SIOCATMARK)
#define SIOCDARP SYMBOLIC(SIOCDARP)
#define SIOCDELDLCI SYMBOLIC(SIOCDELDLCI)
#define SIOCDELMULTI SYMBOLIC(SIOCDELMULTI)
#define SIOCDELRT SYMBOLIC(SIOCDELRT)
#define SIOCDEVPRIVATE SYMBOLIC(SIOCDEVPRIVATE)
#define SIOCDIFADDR SYMBOLIC(SIOCDIFADDR)
#define SIOCDRARP SYMBOLIC(SIOCDRARP)
#define SIOCGARP SYMBOLIC(SIOCGARP)
#define SIOCGIFADDR SYMBOLIC(SIOCGIFADDR)
#define SIOCGIFBR SYMBOLIC(SIOCGIFBR)
#define SIOCGIFBRDADDR SYMBOLIC(SIOCGIFBRDADDR)
#define SIOCGIFCONF SYMBOLIC(SIOCGIFCONF)
#define SIOCGIFCOUNT SYMBOLIC(SIOCGIFCOUNT)
#define SIOCGIFDSTADDR SYMBOLIC(SIOCGIFDSTADDR)
#define SIOCGIFENCAP SYMBOLIC(SIOCGIFENCAP)
#define SIOCGIFFLAGS SYMBOLIC(SIOCGIFFLAGS)
#define SIOCGIFHWADDR SYMBOLIC(SIOCGIFHWADDR)
#define SIOCGIFINDEX SYMBOLIC(SIOCGIFINDEX)
#define SIOCGIFMAP SYMBOLIC(SIOCGIFMAP)
#define SIOCGIFMEM SYMBOLIC(SIOCGIFMEM)
#define SIOCGIFMETRIC SYMBOLIC(SIOCGIFMETRIC)
#define SIOCGIFMTU SYMBOLIC(SIOCGIFMTU)
#define SIOCGIFNAME SYMBOLIC(SIOCGIFNAME)
#define SIOCGIFNETMASK SYMBOLIC(SIOCGIFNETMASK)
#define SIOCGIFPFLAGS SYMBOLIC(SIOCGIFPFLAGS)
#define SIOCGIFSLAVE SYMBOLIC(SIOCGIFSLAVE)
#define SIOCGIFTXQLEN SYMBOLIC(SIOCGIFTXQLEN)
#define SIOCGPGRP SYMBOLIC(SIOCGPGRP)
#define SIOCGRARP SYMBOLIC(SIOCGRARP)
#define SIOCGSTAMP SYMBOLIC(SIOCGSTAMP)
#define SIOCGSTAMPNS SYMBOLIC(SIOCGSTAMPNS)
#define SIOCPROTOPRIVATE SYMBOLIC(SIOCPROTOPRIVATE)
#define SIOCRTMSG SYMBOLIC(SIOCRTMSG)
#define SIOCSARP SYMBOLIC(SIOCSARP)
#define SIOCSIFADDR SYMBOLIC(SIOCSIFADDR)
#define SIOCSIFBR SYMBOLIC(SIOCSIFBR)
#define SIOCSIFBRDADDR SYMBOLIC(SIOCSIFBRDADDR)
#define SIOCSIFDSTADDR SYMBOLIC(SIOCSIFDSTADDR)
#define SIOCSIFENCAP SYMBOLIC(SIOCSIFENCAP)
#define SIOCSIFFLAGS SYMBOLIC(SIOCSIFFLAGS)
#define SIOCSIFHWADDR SYMBOLIC(SIOCSIFHWADDR)
#define SIOCSIFHWBROADCAST SYMBOLIC(SIOCSIFHWBROADCAST)
#define SIOCSIFLINK SYMBOLIC(SIOCSIFLINK)
#define SIOCSIFMAP SYMBOLIC(SIOCSIFMAP)
#define SIOCSIFMEM SYMBOLIC(SIOCSIFMEM)
#define SIOCSIFMETRIC SYMBOLIC(SIOCSIFMETRIC)
#define SIOCSIFMTU SYMBOLIC(SIOCSIFMTU)
#define SIOCSIFNAME SYMBOLIC(SIOCSIFNAME)
#define SIOCSIFNETMASK SYMBOLIC(SIOCSIFNETMASK)
#define SIOCSIFPFLAGS SYMBOLIC(SIOCSIFPFLAGS)
#define SIOCSIFSLAVE SYMBOLIC(SIOCSIFSLAVE)
#define SIOCSIFTXQLEN SYMBOLIC(SIOCSIFTXQLEN)
#define SIOCSPGRP SYMBOLIC(SIOCSPGRP)
#define SIOCSRARP SYMBOLIC(SIOCSRARP)
#define SIOGIFINDEX SYMBOLIC(SIOGIFINDEX)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

hidden extern const long SIOCADDDLCI;
hidden extern const long SIOCADDMULTI;
hidden extern const long SIOCADDRT;
hidden extern const long SIOCATMARK;
hidden extern const long SIOCDARP;
hidden extern const long SIOCDELDLCI;
hidden extern const long SIOCDELMULTI;
hidden extern const long SIOCDELRT;
hidden extern const long SIOCDEVPRIVATE;
hidden extern const long SIOCDIFADDR;
hidden extern const long SIOCDRARP;
hidden extern const long SIOCGARP;
hidden extern const long SIOCGIFADDR;
hidden extern const long SIOCGIFBR;
hidden extern const long SIOCGIFBRDADDR;
hidden extern const long SIOCGIFCONF;
hidden extern const long SIOCGIFCOUNT;
hidden extern const long SIOCGIFDSTADDR;
hidden extern const long SIOCGIFENCAP;
hidden extern const long SIOCGIFFLAGS;
hidden extern const long SIOCGIFHWADDR;
hidden extern const long SIOCGIFINDEX;
hidden extern const long SIOCGIFMAP;
hidden extern const long SIOCGIFMEM;
hidden extern const long SIOCGIFMETRIC;
hidden extern const long SIOCGIFMTU;
hidden extern const long SIOCGIFNAME;
hidden extern const long SIOCGIFNETMASK;
hidden extern const long SIOCGIFPFLAGS;
hidden extern const long SIOCGIFSLAVE;
hidden extern const long SIOCGIFTXQLEN;
hidden extern const long SIOCGPGRP;
hidden extern const long SIOCGRARP;
hidden extern const long SIOCGSTAMP;
hidden extern const long SIOCGSTAMPNS;
hidden extern const long SIOCPROTOPRIVATE;
hidden extern const long SIOCRTMSG;
hidden extern const long SIOCSARP;
hidden extern const long SIOCSIFADDR;
hidden extern const long SIOCSIFBR;
hidden extern const long SIOCSIFBRDADDR;
hidden extern const long SIOCSIFDSTADDR;
hidden extern const long SIOCSIFENCAP;
hidden extern const long SIOCSIFFLAGS;
hidden extern const long SIOCSIFHWADDR;
hidden extern const long SIOCSIFHWBROADCAST;
hidden extern const long SIOCSIFLINK;
hidden extern const long SIOCSIFMAP;
hidden extern const long SIOCSIFMEM;
hidden extern const long SIOCSIFMETRIC;
hidden extern const long SIOCSIFMTU;
hidden extern const long SIOCSIFNAME;
hidden extern const long SIOCSIFNETMASK;
hidden extern const long SIOCSIFPFLAGS;
hidden extern const long SIOCSIFSLAVE;
hidden extern const long SIOCSIFTXQLEN;
hidden extern const long SIOCSPGRP;
hidden extern const long SIOCSRARP;
hidden extern const long SIOGIFINDEX;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_SIO_H_ */