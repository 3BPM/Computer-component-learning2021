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
static const char *ng0 = "C:/Users/CH/Desktop/verilog/p5/grf.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "%d@%h: $%d <= %h";



static void Initial_38_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB2:    t1 = (t0 + 1932);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB3;

LAB4:
LAB1:    return;
LAB3:    xsi_set_current_line(38, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1840);
    t16 = (t0 + 1840);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1840);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1932);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1932);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1932);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB2;

LAB5:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB6;

}

static void Cont_40_1(char *t0)
{
    char t5[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1840);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1840);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 692U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 3448);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 3372);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_41_2(char *t0)
{
    char t5[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1840);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1840);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 784U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 3484);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 3380);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_42_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 3520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 4);
    t16 = (t0 + 3388);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_43_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t0 + 3556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 3396);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_44_5(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t60[8];
    char t66[8];
    char t101[8];
    char t102[8];
    char t118[16];
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
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
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
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;

LAB0:    t1 = (t0 + 3176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3404);
    *((int *)t2) = 1;
    t3 = (t0 + 3204);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB17;

LAB14:    if (t37 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    memset(t15, 0, 8);
    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB21:    t17 = (t15 + 4);
    t45 = *((unsigned int *)t15);
    t46 = *((unsigned int *)t17);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB22;

LAB23:    memcpy(t66, t15, 8);

LAB24:    t93 = (t66 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t66);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB45;

LAB42:    if (t37 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t13) = 1;

LAB45:    memset(t15, 0, 8);
    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t12) != 0)
        goto LAB48;

LAB49:    t17 = (t15 + 4);
    t45 = *((unsigned int *)t15);
    t46 = *((unsigned int *)t17);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB50;

LAB51:    memcpy(t66, t15, 8);

LAB52:    t93 = (t66 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t66);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB64;

LAB65:
LAB66:
LAB38:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB9:    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(45, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 1840);
    t17 = (t0 + 1840);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 1840);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 1932);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1932);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB9;

LAB12:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB13;

LAB16:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB20:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB22:    t18 = (t0 + 1520U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t48 = *((unsigned int *)t19);
    t49 = *((unsigned int *)t18);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t21);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t20);
    t56 = *((unsigned int *)t21);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB26;

LAB25:    if (t57 != 0)
        goto LAB27;

LAB28:    memset(t60, 0, 8);
    t23 = (t16 + 4);
    t61 = *((unsigned int *)t23);
    t62 = (~(t61));
    t63 = *((unsigned int *)t16);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t23) != 0)
        goto LAB31;

LAB32:    t67 = *((unsigned int *)t15);
    t68 = *((unsigned int *)t60);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t25 = (t15 + 4);
    t26 = (t60 + 4);
    t29 = (t66 + 4);
    t70 = *((unsigned int *)t25);
    t71 = *((unsigned int *)t26);
    t72 = (t70 | t71);
    *((unsigned int *)t29) = t72;
    t73 = *((unsigned int *)t29);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB26:    *((unsigned int *)t16) = 1;
    goto LAB28;

LAB27:    t22 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t60) = 1;
    goto LAB32;

LAB31:    t24 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB32;

LAB33:    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t29);
    *((unsigned int *)t66) = (t75 | t76);
    t77 = (t15 + 4);
    t78 = (t60 + 4);
    t79 = *((unsigned int *)t15);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t60);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t28 = (t80 & t82);
    t31 = (t84 & t86);
    t87 = (~(t28));
    t88 = (~(t31));
    t89 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t89 & t87);
    t90 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t90 & t88);
    t91 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t91 & t87);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t88);
    goto LAB35;

LAB36:    xsi_set_current_line(46, ng0);

LAB39:    xsi_set_current_line(46, ng0);
    t99 = (t0 + 1612U);
    t100 = *((char **)t99);
    t99 = (t0 + 1840);
    t103 = (t0 + 1840);
    t104 = (t103 + 44U);
    t105 = *((char **)t104);
    t106 = (t0 + 1840);
    t107 = (t106 + 40U);
    t108 = *((char **)t107);
    t109 = (t0 + 1520U);
    t110 = *((char **)t109);
    xsi_vlog_generic_convert_array_indices(t101, t102, t105, t108, 2, 1, t110, 5, 2);
    t109 = (t101 + 4);
    t111 = *((unsigned int *)t109);
    t32 = (!(t111));
    t112 = (t102 + 4);
    t113 = *((unsigned int *)t112);
    t35 = (!(t113));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(47, ng0);
    t2 = xsi_vlog_time(t118, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 1520U);
    t5 = *((char **)t3);
    t3 = (t0 + 1612U);
    t11 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t118, 64, (char)118, t4, 32, (char)118, t5, 5, (char)118, t11, 32);
    goto LAB38;

LAB40:    t114 = *((unsigned int *)t101);
    t115 = *((unsigned int *)t102);
    t116 = (t114 - t115);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t99, t100, 0, *((unsigned int *)t102), t117);
    goto LAB41;

LAB44:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t15) = 1;
    goto LAB49;

LAB48:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB49;

LAB50:    t18 = (t0 + 1520U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t48 = *((unsigned int *)t19);
    t49 = *((unsigned int *)t18);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t21);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t20);
    t56 = *((unsigned int *)t21);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB56;

LAB53:    if (t57 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t16) = 1;

LAB56:    memset(t60, 0, 8);
    t23 = (t16 + 4);
    t61 = *((unsigned int *)t23);
    t62 = (~(t61));
    t63 = *((unsigned int *)t16);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t23) != 0)
        goto LAB59;

LAB60:    t67 = *((unsigned int *)t15);
    t68 = *((unsigned int *)t60);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t25 = (t15 + 4);
    t26 = (t60 + 4);
    t29 = (t66 + 4);
    t70 = *((unsigned int *)t25);
    t71 = *((unsigned int *)t26);
    t72 = (t70 | t71);
    *((unsigned int *)t29) = t72;
    t73 = *((unsigned int *)t29);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t22 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t60) = 1;
    goto LAB60;

LAB59:    t24 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB60;

LAB61:    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t29);
    *((unsigned int *)t66) = (t75 | t76);
    t77 = (t15 + 4);
    t78 = (t60 + 4);
    t79 = *((unsigned int *)t15);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t60);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t28 = (t80 & t82);
    t31 = (t84 & t86);
    t87 = (~(t28));
    t88 = (~(t31));
    t89 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t89 & t87);
    t90 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t90 & t88);
    t91 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t91 & t87);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t88);
    goto LAB63;

LAB64:    xsi_set_current_line(49, ng0);
    t99 = xsi_vlog_time(t118, 1000.0000000000000, 1000.0000000000000);
    t100 = (t0 + 600U);
    t103 = *((char **)t100);
    t100 = (t0 + 1520U);
    t104 = *((char **)t100);
    t100 = (t0 + 1612U);
    t105 = *((char **)t100);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t118, 64, (char)118, t103, 32, (char)118, t104, 5, (char)118, t105, 32);
    goto LAB66;

}


extern void work_m_00000000001162654453_4127636709_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Cont_40_1,(void *)Cont_41_2,(void *)Cont_42_3,(void *)Cont_43_4,(void *)Always_44_5};
	xsi_register_didat("work_m_00000000001162654453_4127636709", "isim/mips_t_isim_beh.exe.sim/work/m_00000000001162654453_4127636709.didat");
	xsi_register_executes(pe);
}
