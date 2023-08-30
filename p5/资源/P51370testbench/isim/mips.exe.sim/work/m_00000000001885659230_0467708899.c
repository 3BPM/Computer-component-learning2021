/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "code.txt";
static unsigned int ng1[] = {3072U, 0U};



static void Initial_8_0(char *t0)
{
    char *t1;

LAB0:
LAB2:    t1 = (t0 + 1608);
    xsi_vlogfile_readmemh(ng0, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_11_1(char *t0)
{
    char t5[8];
    char t12[8];
    char t23[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1608);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 4095U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 4095U);
    t22 = ((char*)((ng1)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 12, t12, 12, t22, 12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t23, 12, 2);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t26 = (t5 + 4);
    t27 = *((unsigned int *)t5);
    t28 = (t27 >> 0);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 0);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 4294967295U);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 & 4294967295U);
    t33 = (t0 + 3176);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t24, 8);
    xsi_driver_vfirst_trans(t33, 0, 31);
    t38 = (t0 + 3096);
    *((int *)t38) = 1;

LAB1:    return;
}


extern void work_m_00000000001885659230_0467708899_init()
{
	static char *pe[] = {(void *)Initial_8_0,(void *)Cont_11_1};
	xsi_register_didat("work_m_00000000001885659230_0467708899", "isim/mips.exe.sim/work/m_00000000001885659230_0467708899.didat");
	xsi_register_executes(pe);
}
