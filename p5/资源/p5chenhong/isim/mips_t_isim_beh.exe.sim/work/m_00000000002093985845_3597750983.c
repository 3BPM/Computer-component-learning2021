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
static const char *ng0 = "C:/Users/CH/Desktop/verilog/p5/Iji.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {12292U, 0U};



static void Cont_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t0 + 2960);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 2900);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 2996);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 2908);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Initial_43_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_47_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2916);
    *((int *)t2) = 1;
    t3 = (t0 + 2732);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(56, ng0);

LAB14:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(52, ng0);

LAB13:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1656);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB12;

}


extern void work_m_00000000002093985845_3597750983_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_40_1,(void *)Initial_43_2,(void *)Always_47_3};
	xsi_register_didat("work_m_00000000002093985845_3597750983", "isim/mips_t_isim_beh.exe.sim/work/m_00000000002093985845_3597750983.didat");
	xsi_register_executes(pe);
}
