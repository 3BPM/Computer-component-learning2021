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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/CH/Desktop/verilog/p5/ext.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {16, 0};



static void Cont_27_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t18[8];
    char t25[8];
    char t26[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char t45[8];
    char t57[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t61 = (t0 + 1776);
    t62 = (t61 + 32U);
    t63 = *((char **)t62);
    t64 = (t63 + 40U);
    t65 = *((char **)t64);
    memcpy(t65, t3, 8);
    xsi_driver_vfirst_trans(t61, 0, 31);
    t66 = (t0 + 1732);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = ((char*)((ng1)));
    t19 = (t0 + 692U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t18, 16, 16, 1U, t20, 16);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t18, 16, t17, 16);
    goto LAB9;

LAB10:    t19 = (t0 + 784U);
    t27 = *((char **)t19);
    memset(t26, 0, 8);
    t19 = (t27 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t19) != 0)
        goto LAB19;

LAB20:    t34 = (t26 + 4);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB21;

LAB22:    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t34);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t34) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t26) > 0)
        goto LAB27;

LAB28:    memcpy(t25, t57, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t40 = (t0 + 692U);
    t41 = *((char **)t40);
    xsi_vlogtype_concat(t39, 16, 16, 1U, t41, 16);
    t40 = ((char*)((ng2)));
    t43 = (t0 + 692U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 15);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    xsi_vlog_mul_concat(t42, 16, 1, t40, 1U, t45, 1);
    xsi_vlogtype_concat(t38, 32, 32, 2U, t42, 16, t39, 16);
    goto LAB22;

LAB23:    t59 = (t0 + 692U);
    t60 = *((char **)t59);
    xsi_vlogtype_concat(t58, 16, 16, 1U, t60, 16);
    t59 = ((char*)((ng1)));
    xsi_vlogtype_concat(t57, 32, 32, 2U, t59, 16, t58, 16);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t25, 32, t38, 32, t57, 32);
    goto LAB29;

LAB27:    memcpy(t25, t38, 8);
    goto LAB29;

}


extern void work_m_00000000001563477083_4241813833_init()
{
	static char *pe[] = {(void *)Cont_27_0};
	xsi_register_didat("work_m_00000000001563477083_4241813833", "isim/mips_t_isim_beh.exe.sim/work/m_00000000001563477083_4241813833.didat");
	xsi_register_executes(pe);
}
