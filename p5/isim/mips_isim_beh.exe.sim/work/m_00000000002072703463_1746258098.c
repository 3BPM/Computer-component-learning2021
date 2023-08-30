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
static const char *ng0 = "H:/p5/Execute.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static int ng4[] = {31, 0};
static int ng5[] = {8, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {31U, 0U};



static void NetDecl_78_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 9088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 8008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 11888);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_79_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 11904);
    *((int *)t2) = 1;
    t3 = (t0 + 9368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 4408U);
    t5 = *((char **)t4);
    t4 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t2 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB2;

}

static void NetDecl_86_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t24[8];
    char t39[8];
    char t47[8];
    char t79[8];
    char t93[8];
    char t109[8];
    char t117[8];
    char t165[8];
    char t166[8];
    char t170[8];
    char t185[8];
    char t199[8];
    char t206[8];
    char t238[8];
    char t252[8];
    char t268[8];
    char t276[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    int t141;
    int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t167;
    char *t168;
    char *t169;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    int t230;
    int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    char *t253;
    char *t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    char *t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    char *t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    char *t290;
    char *t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    int t300;
    int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    char *t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    char *t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    char *t325;
    char *t326;
    char *t327;
    char *t328;
    char *t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    unsigned int t336;
    unsigned int t337;
    char *t338;

LAB0:    t1 = (t0 + 9584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = (t0 + 7848);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB12;

LAB13:    memcpy(t47, t24, 8);

LAB14:    memset(t79, 0, 8);
    t80 = (t47 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t47);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t80) != 0)
        goto LAB24;

LAB25:    t87 = (t79 + 4);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB26;

LAB27:    memcpy(t117, t79, 8);

LAB28:    memset(t4, 0, 8);
    t149 = (t117 + 4);
    t150 = *((unsigned int *)t149);
    t151 = (~(t150));
    t152 = *((unsigned int *)t117);
    t153 = (t152 & t151);
    t154 = (t153 & 1U);
    if (t154 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t149) != 0)
        goto LAB42;

LAB43:    t156 = (t4 + 4);
    t157 = *((unsigned int *)t4);
    t158 = *((unsigned int *)t156);
    t159 = (t157 || t158);
    if (t159 > 0)
        goto LAB44;

LAB45:    t161 = *((unsigned int *)t4);
    t162 = (~(t161));
    t163 = *((unsigned int *)t156);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t156) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t4) > 0)
        goto LAB50;

LAB51:    memcpy(t3, t165, 8);

LAB52:    t325 = (t0 + 12144);
    t326 = (t325 + 56U);
    t327 = *((char **)t326);
    t328 = (t327 + 56U);
    t329 = *((char **)t328);
    memset(t329, 0, 8);
    t330 = 3U;
    t331 = t330;
    t332 = (t3 + 4);
    t333 = *((unsigned int *)t3);
    t330 = (t330 & t333);
    t334 = *((unsigned int *)t332);
    t331 = (t331 & t334);
    t335 = (t329 + 4);
    t336 = *((unsigned int *)t329);
    *((unsigned int *)t329) = (t336 | t330);
    t337 = *((unsigned int *)t335);
    *((unsigned int *)t335) = (t337 | t331);
    xsi_driver_vfirst_trans(t325, 0, 1U);
    t338 = (t0 + 11920);
    *((int *)t338) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t36 = (t0 + 7048);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t38);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t40) != 0)
        goto LAB17;

LAB18:    t48 = *((unsigned int *)t24);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t24 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB17:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB18;

LAB19:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t24 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t24);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB21;

LAB22:    *((unsigned int *)t79) = 1;
    goto LAB25;

LAB24:    t86 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB25;

LAB26:    t91 = (t0 + 1048U);
    t92 = *((char **)t91);
    t91 = ((char*)((ng1)));
    memset(t93, 0, 8);
    t94 = (t92 + 4);
    t95 = (t91 + 4);
    t96 = *((unsigned int *)t92);
    t97 = *((unsigned int *)t91);
    t98 = (t96 ^ t97);
    t99 = *((unsigned int *)t94);
    t100 = *((unsigned int *)t95);
    t101 = (t99 ^ t100);
    t102 = (t98 | t101);
    t103 = *((unsigned int *)t94);
    t104 = *((unsigned int *)t95);
    t105 = (t103 | t104);
    t106 = (~(t105));
    t107 = (t102 & t106);
    if (t107 != 0)
        goto LAB30;

LAB29:    if (t105 != 0)
        goto LAB31;

LAB32:    memset(t109, 0, 8);
    t110 = (t93 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t93);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t110) != 0)
        goto LAB35;

LAB36:    t118 = *((unsigned int *)t79);
    t119 = *((unsigned int *)t109);
    t120 = (t118 & t119);
    *((unsigned int *)t117) = t120;
    t121 = (t79 + 4);
    t122 = (t109 + 4);
    t123 = (t117 + 4);
    t124 = *((unsigned int *)t121);
    t125 = *((unsigned int *)t122);
    t126 = (t124 | t125);
    *((unsigned int *)t123) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 != 0);
    if (t128 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB30:    *((unsigned int *)t93) = 1;
    goto LAB32;

LAB31:    t108 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t109) = 1;
    goto LAB36;

LAB35:    t116 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB36;

LAB37:    t129 = *((unsigned int *)t117);
    t130 = *((unsigned int *)t123);
    *((unsigned int *)t117) = (t129 | t130);
    t131 = (t79 + 4);
    t132 = (t109 + 4);
    t133 = *((unsigned int *)t79);
    t134 = (~(t133));
    t135 = *((unsigned int *)t131);
    t136 = (~(t135));
    t137 = *((unsigned int *)t109);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (~(t139));
    t141 = (t134 & t136);
    t142 = (t138 & t140);
    t143 = (~(t141));
    t144 = (~(t142));
    t145 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t145 & t143);
    t146 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t146 & t144);
    t147 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t147 & t143);
    t148 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t148 & t144);
    goto LAB39;

LAB40:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB42:    t155 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB43;

LAB44:    t160 = ((char*)((ng2)));
    goto LAB45;

LAB46:    t167 = (t0 + 1048U);
    t168 = *((char **)t167);
    t167 = (t0 + 3448U);
    t169 = *((char **)t167);
    memset(t170, 0, 8);
    t167 = (t168 + 4);
    t171 = (t169 + 4);
    t172 = *((unsigned int *)t168);
    t173 = *((unsigned int *)t169);
    t174 = (t172 ^ t173);
    t175 = *((unsigned int *)t167);
    t176 = *((unsigned int *)t171);
    t177 = (t175 ^ t176);
    t178 = (t174 | t177);
    t179 = *((unsigned int *)t167);
    t180 = *((unsigned int *)t171);
    t181 = (t179 | t180);
    t182 = (~(t181));
    t183 = (t178 & t182);
    if (t183 != 0)
        goto LAB56;

LAB53:    if (t181 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t170) = 1;

LAB56:    memset(t185, 0, 8);
    t186 = (t170 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t170);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t186) != 0)
        goto LAB59;

LAB60:    t193 = (t185 + 4);
    t194 = *((unsigned int *)t185);
    t195 = *((unsigned int *)t193);
    t196 = (t194 || t195);
    if (t196 > 0)
        goto LAB61;

LAB62:    memcpy(t206, t185, 8);

LAB63:    memset(t238, 0, 8);
    t239 = (t206 + 4);
    t240 = *((unsigned int *)t239);
    t241 = (~(t240));
    t242 = *((unsigned int *)t206);
    t243 = (t242 & t241);
    t244 = (t243 & 1U);
    if (t244 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t239) != 0)
        goto LAB73;

LAB74:    t246 = (t238 + 4);
    t247 = *((unsigned int *)t238);
    t248 = *((unsigned int *)t246);
    t249 = (t247 || t248);
    if (t249 > 0)
        goto LAB75;

LAB76:    memcpy(t276, t238, 8);

LAB77:    memset(t166, 0, 8);
    t308 = (t276 + 4);
    t309 = *((unsigned int *)t308);
    t310 = (~(t309));
    t311 = *((unsigned int *)t276);
    t312 = (t311 & t310);
    t313 = (t312 & 1U);
    if (t313 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t308) != 0)
        goto LAB91;

LAB92:    t315 = (t166 + 4);
    t316 = *((unsigned int *)t166);
    t317 = *((unsigned int *)t315);
    t318 = (t316 || t317);
    if (t318 > 0)
        goto LAB93;

LAB94:    t320 = *((unsigned int *)t166);
    t321 = (~(t320));
    t322 = *((unsigned int *)t315);
    t323 = (t321 || t322);
    if (t323 > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t315) > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t166) > 0)
        goto LAB99;

LAB100:    memcpy(t165, t324, 8);

LAB101:    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t3, 32, t160, 32, t165, 32);
    goto LAB52;

LAB50:    memcpy(t3, t160, 8);
    goto LAB52;

LAB55:    t184 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t184) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t185) = 1;
    goto LAB60;

LAB59:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB60;

LAB61:    t197 = (t0 + 3608U);
    t198 = *((char **)t197);
    memset(t199, 0, 8);
    t197 = (t198 + 4);
    t200 = *((unsigned int *)t197);
    t201 = (~(t200));
    t202 = *((unsigned int *)t198);
    t203 = (t202 & t201);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t197) != 0)
        goto LAB66;

LAB67:    t207 = *((unsigned int *)t185);
    t208 = *((unsigned int *)t199);
    t209 = (t207 & t208);
    *((unsigned int *)t206) = t209;
    t210 = (t185 + 4);
    t211 = (t199 + 4);
    t212 = (t206 + 4);
    t213 = *((unsigned int *)t210);
    t214 = *((unsigned int *)t211);
    t215 = (t213 | t214);
    *((unsigned int *)t212) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 != 0);
    if (t217 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB63;

LAB64:    *((unsigned int *)t199) = 1;
    goto LAB67;

LAB66:    t205 = (t199 + 4);
    *((unsigned int *)t199) = 1;
    *((unsigned int *)t205) = 1;
    goto LAB67;

LAB68:    t218 = *((unsigned int *)t206);
    t219 = *((unsigned int *)t212);
    *((unsigned int *)t206) = (t218 | t219);
    t220 = (t185 + 4);
    t221 = (t199 + 4);
    t222 = *((unsigned int *)t185);
    t223 = (~(t222));
    t224 = *((unsigned int *)t220);
    t225 = (~(t224));
    t226 = *((unsigned int *)t199);
    t227 = (~(t226));
    t228 = *((unsigned int *)t221);
    t229 = (~(t228));
    t230 = (t223 & t225);
    t231 = (t227 & t229);
    t232 = (~(t230));
    t233 = (~(t231));
    t234 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t234 & t232);
    t235 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t235 & t233);
    t236 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t236 & t232);
    t237 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t237 & t233);
    goto LAB70;

LAB71:    *((unsigned int *)t238) = 1;
    goto LAB74;

LAB73:    t245 = (t238 + 4);
    *((unsigned int *)t238) = 1;
    *((unsigned int *)t245) = 1;
    goto LAB74;

LAB75:    t250 = (t0 + 1048U);
    t251 = *((char **)t250);
    t250 = ((char*)((ng1)));
    memset(t252, 0, 8);
    t253 = (t251 + 4);
    t254 = (t250 + 4);
    t255 = *((unsigned int *)t251);
    t256 = *((unsigned int *)t250);
    t257 = (t255 ^ t256);
    t258 = *((unsigned int *)t253);
    t259 = *((unsigned int *)t254);
    t260 = (t258 ^ t259);
    t261 = (t257 | t260);
    t262 = *((unsigned int *)t253);
    t263 = *((unsigned int *)t254);
    t264 = (t262 | t263);
    t265 = (~(t264));
    t266 = (t261 & t265);
    if (t266 != 0)
        goto LAB79;

LAB78:    if (t264 != 0)
        goto LAB80;

LAB81:    memset(t268, 0, 8);
    t269 = (t252 + 4);
    t270 = *((unsigned int *)t269);
    t271 = (~(t270));
    t272 = *((unsigned int *)t252);
    t273 = (t272 & t271);
    t274 = (t273 & 1U);
    if (t274 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t269) != 0)
        goto LAB84;

LAB85:    t277 = *((unsigned int *)t238);
    t278 = *((unsigned int *)t268);
    t279 = (t277 & t278);
    *((unsigned int *)t276) = t279;
    t280 = (t238 + 4);
    t281 = (t268 + 4);
    t282 = (t276 + 4);
    t283 = *((unsigned int *)t280);
    t284 = *((unsigned int *)t281);
    t285 = (t283 | t284);
    *((unsigned int *)t282) = t285;
    t286 = *((unsigned int *)t282);
    t287 = (t286 != 0);
    if (t287 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB77;

LAB79:    *((unsigned int *)t252) = 1;
    goto LAB81;

LAB80:    t267 = (t252 + 4);
    *((unsigned int *)t252) = 1;
    *((unsigned int *)t267) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t268) = 1;
    goto LAB85;

LAB84:    t275 = (t268 + 4);
    *((unsigned int *)t268) = 1;
    *((unsigned int *)t275) = 1;
    goto LAB85;

LAB86:    t288 = *((unsigned int *)t276);
    t289 = *((unsigned int *)t282);
    *((unsigned int *)t276) = (t288 | t289);
    t290 = (t238 + 4);
    t291 = (t268 + 4);
    t292 = *((unsigned int *)t238);
    t293 = (~(t292));
    t294 = *((unsigned int *)t290);
    t295 = (~(t294));
    t296 = *((unsigned int *)t268);
    t297 = (~(t296));
    t298 = *((unsigned int *)t291);
    t299 = (~(t298));
    t300 = (t293 & t295);
    t301 = (t297 & t299);
    t302 = (~(t300));
    t303 = (~(t301));
    t304 = *((unsigned int *)t282);
    *((unsigned int *)t282) = (t304 & t302);
    t305 = *((unsigned int *)t282);
    *((unsigned int *)t282) = (t305 & t303);
    t306 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t306 & t302);
    t307 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t307 & t303);
    goto LAB88;

LAB89:    *((unsigned int *)t166) = 1;
    goto LAB92;

LAB91:    t314 = (t166 + 4);
    *((unsigned int *)t166) = 1;
    *((unsigned int *)t314) = 1;
    goto LAB92;

LAB93:    t319 = ((char*)((ng3)));
    goto LAB94;

LAB95:    t324 = ((char*)((ng1)));
    goto LAB96;

LAB97:    xsi_vlog_unsigned_bit_combine(t165, 32, t319, 32, t324, 32);
    goto LAB101;

LAB99:    memcpy(t165, t319, 8);
    goto LAB101;

}

static void NetDecl_88_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t24[8];
    char t39[8];
    char t47[8];
    char t79[8];
    char t93[8];
    char t109[8];
    char t117[8];
    char t165[8];
    char t166[8];
    char t170[8];
    char t185[8];
    char t199[8];
    char t206[8];
    char t238[8];
    char t252[8];
    char t268[8];
    char t276[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    int t141;
    int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t167;
    char *t168;
    char *t169;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    int t230;
    int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    char *t253;
    char *t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    char *t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    char *t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    char *t290;
    char *t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    int t300;
    int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    char *t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    char *t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    char *t325;
    char *t326;
    char *t327;
    char *t328;
    char *t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    unsigned int t336;
    unsigned int t337;
    char *t338;

LAB0:    t1 = (t0 + 9832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = (t0 + 7848);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB12;

LAB13:    memcpy(t47, t24, 8);

LAB14:    memset(t79, 0, 8);
    t80 = (t47 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t47);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t80) != 0)
        goto LAB24;

LAB25:    t87 = (t79 + 4);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB26;

LAB27:    memcpy(t117, t79, 8);

LAB28:    memset(t4, 0, 8);
    t149 = (t117 + 4);
    t150 = *((unsigned int *)t149);
    t151 = (~(t150));
    t152 = *((unsigned int *)t117);
    t153 = (t152 & t151);
    t154 = (t153 & 1U);
    if (t154 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t149) != 0)
        goto LAB42;

LAB43:    t156 = (t4 + 4);
    t157 = *((unsigned int *)t4);
    t158 = *((unsigned int *)t156);
    t159 = (t157 || t158);
    if (t159 > 0)
        goto LAB44;

LAB45:    t161 = *((unsigned int *)t4);
    t162 = (~(t161));
    t163 = *((unsigned int *)t156);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t156) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t4) > 0)
        goto LAB50;

LAB51:    memcpy(t3, t165, 8);

LAB52:    t325 = (t0 + 12208);
    t326 = (t325 + 56U);
    t327 = *((char **)t326);
    t328 = (t327 + 56U);
    t329 = *((char **)t328);
    memset(t329, 0, 8);
    t330 = 3U;
    t331 = t330;
    t332 = (t3 + 4);
    t333 = *((unsigned int *)t3);
    t330 = (t330 & t333);
    t334 = *((unsigned int *)t332);
    t331 = (t331 & t334);
    t335 = (t329 + 4);
    t336 = *((unsigned int *)t329);
    *((unsigned int *)t329) = (t336 | t330);
    t337 = *((unsigned int *)t335);
    *((unsigned int *)t335) = (t337 | t331);
    xsi_driver_vfirst_trans(t325, 0, 1U);
    t338 = (t0 + 11936);
    *((int *)t338) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t36 = (t0 + 7048);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t38);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t40) != 0)
        goto LAB17;

LAB18:    t48 = *((unsigned int *)t24);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t24 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB17:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB18;

LAB19:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t24 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t24);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB21;

LAB22:    *((unsigned int *)t79) = 1;
    goto LAB25;

LAB24:    t86 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB25;

LAB26:    t91 = (t0 + 1208U);
    t92 = *((char **)t91);
    t91 = ((char*)((ng1)));
    memset(t93, 0, 8);
    t94 = (t92 + 4);
    t95 = (t91 + 4);
    t96 = *((unsigned int *)t92);
    t97 = *((unsigned int *)t91);
    t98 = (t96 ^ t97);
    t99 = *((unsigned int *)t94);
    t100 = *((unsigned int *)t95);
    t101 = (t99 ^ t100);
    t102 = (t98 | t101);
    t103 = *((unsigned int *)t94);
    t104 = *((unsigned int *)t95);
    t105 = (t103 | t104);
    t106 = (~(t105));
    t107 = (t102 & t106);
    if (t107 != 0)
        goto LAB30;

LAB29:    if (t105 != 0)
        goto LAB31;

LAB32:    memset(t109, 0, 8);
    t110 = (t93 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t93);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t110) != 0)
        goto LAB35;

LAB36:    t118 = *((unsigned int *)t79);
    t119 = *((unsigned int *)t109);
    t120 = (t118 & t119);
    *((unsigned int *)t117) = t120;
    t121 = (t79 + 4);
    t122 = (t109 + 4);
    t123 = (t117 + 4);
    t124 = *((unsigned int *)t121);
    t125 = *((unsigned int *)t122);
    t126 = (t124 | t125);
    *((unsigned int *)t123) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 != 0);
    if (t128 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB30:    *((unsigned int *)t93) = 1;
    goto LAB32;

LAB31:    t108 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t109) = 1;
    goto LAB36;

LAB35:    t116 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB36;

LAB37:    t129 = *((unsigned int *)t117);
    t130 = *((unsigned int *)t123);
    *((unsigned int *)t117) = (t129 | t130);
    t131 = (t79 + 4);
    t132 = (t109 + 4);
    t133 = *((unsigned int *)t79);
    t134 = (~(t133));
    t135 = *((unsigned int *)t131);
    t136 = (~(t135));
    t137 = *((unsigned int *)t109);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (~(t139));
    t141 = (t134 & t136);
    t142 = (t138 & t140);
    t143 = (~(t141));
    t144 = (~(t142));
    t145 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t145 & t143);
    t146 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t146 & t144);
    t147 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t147 & t143);
    t148 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t148 & t144);
    goto LAB39;

LAB40:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB42:    t155 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB43;

LAB44:    t160 = ((char*)((ng2)));
    goto LAB45;

LAB46:    t167 = (t0 + 1208U);
    t168 = *((char **)t167);
    t167 = (t0 + 3448U);
    t169 = *((char **)t167);
    memset(t170, 0, 8);
    t167 = (t168 + 4);
    t171 = (t169 + 4);
    t172 = *((unsigned int *)t168);
    t173 = *((unsigned int *)t169);
    t174 = (t172 ^ t173);
    t175 = *((unsigned int *)t167);
    t176 = *((unsigned int *)t171);
    t177 = (t175 ^ t176);
    t178 = (t174 | t177);
    t179 = *((unsigned int *)t167);
    t180 = *((unsigned int *)t171);
    t181 = (t179 | t180);
    t182 = (~(t181));
    t183 = (t178 & t182);
    if (t183 != 0)
        goto LAB56;

LAB53:    if (t181 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t170) = 1;

LAB56:    memset(t185, 0, 8);
    t186 = (t170 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t170);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t186) != 0)
        goto LAB59;

LAB60:    t193 = (t185 + 4);
    t194 = *((unsigned int *)t185);
    t195 = *((unsigned int *)t193);
    t196 = (t194 || t195);
    if (t196 > 0)
        goto LAB61;

LAB62:    memcpy(t206, t185, 8);

LAB63:    memset(t238, 0, 8);
    t239 = (t206 + 4);
    t240 = *((unsigned int *)t239);
    t241 = (~(t240));
    t242 = *((unsigned int *)t206);
    t243 = (t242 & t241);
    t244 = (t243 & 1U);
    if (t244 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t239) != 0)
        goto LAB73;

LAB74:    t246 = (t238 + 4);
    t247 = *((unsigned int *)t238);
    t248 = *((unsigned int *)t246);
    t249 = (t247 || t248);
    if (t249 > 0)
        goto LAB75;

LAB76:    memcpy(t276, t238, 8);

LAB77:    memset(t166, 0, 8);
    t308 = (t276 + 4);
    t309 = *((unsigned int *)t308);
    t310 = (~(t309));
    t311 = *((unsigned int *)t276);
    t312 = (t311 & t310);
    t313 = (t312 & 1U);
    if (t313 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t308) != 0)
        goto LAB91;

LAB92:    t315 = (t166 + 4);
    t316 = *((unsigned int *)t166);
    t317 = *((unsigned int *)t315);
    t318 = (t316 || t317);
    if (t318 > 0)
        goto LAB93;

LAB94:    t320 = *((unsigned int *)t166);
    t321 = (~(t320));
    t322 = *((unsigned int *)t315);
    t323 = (t321 || t322);
    if (t323 > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t315) > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t166) > 0)
        goto LAB99;

LAB100:    memcpy(t165, t324, 8);

LAB101:    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t3, 32, t160, 32, t165, 32);
    goto LAB52;

LAB50:    memcpy(t3, t160, 8);
    goto LAB52;

LAB55:    t184 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t184) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t185) = 1;
    goto LAB60;

LAB59:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB60;

LAB61:    t197 = (t0 + 3608U);
    t198 = *((char **)t197);
    memset(t199, 0, 8);
    t197 = (t198 + 4);
    t200 = *((unsigned int *)t197);
    t201 = (~(t200));
    t202 = *((unsigned int *)t198);
    t203 = (t202 & t201);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t197) != 0)
        goto LAB66;

LAB67:    t207 = *((unsigned int *)t185);
    t208 = *((unsigned int *)t199);
    t209 = (t207 & t208);
    *((unsigned int *)t206) = t209;
    t210 = (t185 + 4);
    t211 = (t199 + 4);
    t212 = (t206 + 4);
    t213 = *((unsigned int *)t210);
    t214 = *((unsigned int *)t211);
    t215 = (t213 | t214);
    *((unsigned int *)t212) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 != 0);
    if (t217 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB63;

LAB64:    *((unsigned int *)t199) = 1;
    goto LAB67;

LAB66:    t205 = (t199 + 4);
    *((unsigned int *)t199) = 1;
    *((unsigned int *)t205) = 1;
    goto LAB67;

LAB68:    t218 = *((unsigned int *)t206);
    t219 = *((unsigned int *)t212);
    *((unsigned int *)t206) = (t218 | t219);
    t220 = (t185 + 4);
    t221 = (t199 + 4);
    t222 = *((unsigned int *)t185);
    t223 = (~(t222));
    t224 = *((unsigned int *)t220);
    t225 = (~(t224));
    t226 = *((unsigned int *)t199);
    t227 = (~(t226));
    t228 = *((unsigned int *)t221);
    t229 = (~(t228));
    t230 = (t223 & t225);
    t231 = (t227 & t229);
    t232 = (~(t230));
    t233 = (~(t231));
    t234 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t234 & t232);
    t235 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t235 & t233);
    t236 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t236 & t232);
    t237 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t237 & t233);
    goto LAB70;

LAB71:    *((unsigned int *)t238) = 1;
    goto LAB74;

LAB73:    t245 = (t238 + 4);
    *((unsigned int *)t238) = 1;
    *((unsigned int *)t245) = 1;
    goto LAB74;

LAB75:    t250 = (t0 + 1208U);
    t251 = *((char **)t250);
    t250 = ((char*)((ng1)));
    memset(t252, 0, 8);
    t253 = (t251 + 4);
    t254 = (t250 + 4);
    t255 = *((unsigned int *)t251);
    t256 = *((unsigned int *)t250);
    t257 = (t255 ^ t256);
    t258 = *((unsigned int *)t253);
    t259 = *((unsigned int *)t254);
    t260 = (t258 ^ t259);
    t261 = (t257 | t260);
    t262 = *((unsigned int *)t253);
    t263 = *((unsigned int *)t254);
    t264 = (t262 | t263);
    t265 = (~(t264));
    t266 = (t261 & t265);
    if (t266 != 0)
        goto LAB79;

LAB78:    if (t264 != 0)
        goto LAB80;

LAB81:    memset(t268, 0, 8);
    t269 = (t252 + 4);
    t270 = *((unsigned int *)t269);
    t271 = (~(t270));
    t272 = *((unsigned int *)t252);
    t273 = (t272 & t271);
    t274 = (t273 & 1U);
    if (t274 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t269) != 0)
        goto LAB84;

LAB85:    t277 = *((unsigned int *)t238);
    t278 = *((unsigned int *)t268);
    t279 = (t277 & t278);
    *((unsigned int *)t276) = t279;
    t280 = (t238 + 4);
    t281 = (t268 + 4);
    t282 = (t276 + 4);
    t283 = *((unsigned int *)t280);
    t284 = *((unsigned int *)t281);
    t285 = (t283 | t284);
    *((unsigned int *)t282) = t285;
    t286 = *((unsigned int *)t282);
    t287 = (t286 != 0);
    if (t287 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB77;

LAB79:    *((unsigned int *)t252) = 1;
    goto LAB81;

LAB80:    t267 = (t252 + 4);
    *((unsigned int *)t252) = 1;
    *((unsigned int *)t267) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t268) = 1;
    goto LAB85;

LAB84:    t275 = (t268 + 4);
    *((unsigned int *)t268) = 1;
    *((unsigned int *)t275) = 1;
    goto LAB85;

LAB86:    t288 = *((unsigned int *)t276);
    t289 = *((unsigned int *)t282);
    *((unsigned int *)t276) = (t288 | t289);
    t290 = (t238 + 4);
    t291 = (t268 + 4);
    t292 = *((unsigned int *)t238);
    t293 = (~(t292));
    t294 = *((unsigned int *)t290);
    t295 = (~(t294));
    t296 = *((unsigned int *)t268);
    t297 = (~(t296));
    t298 = *((unsigned int *)t291);
    t299 = (~(t298));
    t300 = (t293 & t295);
    t301 = (t297 & t299);
    t302 = (~(t300));
    t303 = (~(t301));
    t304 = *((unsigned int *)t282);
    *((unsigned int *)t282) = (t304 & t302);
    t305 = *((unsigned int *)t282);
    *((unsigned int *)t282) = (t305 & t303);
    t306 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t306 & t302);
    t307 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t307 & t303);
    goto LAB88;

LAB89:    *((unsigned int *)t166) = 1;
    goto LAB92;

LAB91:    t314 = (t166 + 4);
    *((unsigned int *)t166) = 1;
    *((unsigned int *)t314) = 1;
    goto LAB92;

LAB93:    t319 = ((char*)((ng3)));
    goto LAB94;

LAB95:    t324 = ((char*)((ng1)));
    goto LAB96;

LAB97:    xsi_vlog_unsigned_bit_combine(t165, 32, t319, 32, t324, 32);
    goto LAB101;

LAB99:    memcpy(t165, t319, 8);
    goto LAB101;

}

static void NetDecl_109_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t107[8];
    char t112[8];
    char t113[8];
    char t116[8];
    char t132[8];
    char t146[8];
    char t162[8];
    char t170[8];
    char t215[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
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
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    char *t222;
    char *t223;
    char *t224;
    char *t225;
    char *t226;

LAB0:    t1 = (t0 + 10080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t62, t22, 8);

LAB14:    memset(t4, 0, 8);
    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t94) != 0)
        goto LAB28;

LAB29:    t101 = (t4 + 4);
    t102 = *((unsigned int *)t4);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB30;

LAB31:    t108 = *((unsigned int *)t4);
    t109 = (~(t108));
    t110 = *((unsigned int *)t101);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t101) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t112, 8);

LAB38:    t220 = (t0 + 12272);
    t222 = (t220 + 56U);
    t223 = *((char **)t222);
    t224 = (t223 + 56U);
    t225 = *((char **)t224);
    memcpy(t225, t3, 8);
    xsi_driver_vfirst_trans(t220, 0, 31U);
    t226 = (t0 + 11952);
    *((int *)t226) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 7208);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB18;

LAB15:    if (t50 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t38) = 1;

LAB18:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t55) != 0)
        goto LAB21;

LAB22:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t22 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t54) = 1;
    goto LAB22;

LAB21:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB22;

LAB23:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t22 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t22);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t100 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB29;

LAB30:    t105 = (t0 + 4728U);
    t106 = *((char **)t105);
    t105 = ((char*)((ng5)));
    memset(t107, 0, 8);
    xsi_vlog_unsigned_add(t107, 32, t106, 32, t105, 32);
    goto LAB31;

LAB32:    t114 = (t0 + 1208U);
    t115 = *((char **)t114);
    t114 = ((char*)((ng4)));
    memset(t116, 0, 8);
    t117 = (t115 + 4);
    t118 = (t114 + 4);
    t119 = *((unsigned int *)t115);
    t120 = *((unsigned int *)t114);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = (t121 | t124);
    t126 = *((unsigned int *)t117);
    t127 = *((unsigned int *)t118);
    t128 = (t126 | t127);
    t129 = (~(t128));
    t130 = (t125 & t129);
    if (t130 != 0)
        goto LAB42;

LAB39:    if (t128 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t116) = 1;

LAB42:    memset(t132, 0, 8);
    t133 = (t116 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t116);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t133) != 0)
        goto LAB45;

LAB46:    t140 = (t132 + 4);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB47;

LAB48:    memcpy(t170, t132, 8);

LAB49:    memset(t113, 0, 8);
    t202 = (t170 + 4);
    t203 = *((unsigned int *)t202);
    t204 = (~(t203));
    t205 = *((unsigned int *)t170);
    t206 = (t205 & t204);
    t207 = (t206 & 1U);
    if (t207 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t202) != 0)
        goto LAB63;

LAB64:    t209 = (t113 + 4);
    t210 = *((unsigned int *)t113);
    t211 = *((unsigned int *)t209);
    t212 = (t210 || t211);
    if (t212 > 0)
        goto LAB65;

LAB66:    t216 = *((unsigned int *)t113);
    t217 = (~(t216));
    t218 = *((unsigned int *)t209);
    t219 = (t217 || t218);
    if (t219 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t209) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t113) > 0)
        goto LAB71;

LAB72:    memcpy(t112, t221, 8);

LAB73:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t107, 32, t112, 32);
    goto LAB38;

LAB36:    memcpy(t3, t107, 8);
    goto LAB38;

LAB41:    t131 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t132) = 1;
    goto LAB46;

LAB45:    t139 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB46;

LAB47:    t144 = (t0 + 2968U);
    t145 = *((char **)t144);
    t144 = ((char*)((ng2)));
    memset(t146, 0, 8);
    t147 = (t145 + 4);
    t148 = (t144 + 4);
    t149 = *((unsigned int *)t145);
    t150 = *((unsigned int *)t144);
    t151 = (t149 ^ t150);
    t152 = *((unsigned int *)t147);
    t153 = *((unsigned int *)t148);
    t154 = (t152 ^ t153);
    t155 = (t151 | t154);
    t156 = *((unsigned int *)t147);
    t157 = *((unsigned int *)t148);
    t158 = (t156 | t157);
    t159 = (~(t158));
    t160 = (t155 & t159);
    if (t160 != 0)
        goto LAB53;

LAB50:    if (t158 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t146) = 1;

LAB53:    memset(t162, 0, 8);
    t163 = (t146 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t146);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t163) != 0)
        goto LAB56;

LAB57:    t171 = *((unsigned int *)t132);
    t172 = *((unsigned int *)t162);
    t173 = (t171 & t172);
    *((unsigned int *)t170) = t173;
    t174 = (t132 + 4);
    t175 = (t162 + 4);
    t176 = (t170 + 4);
    t177 = *((unsigned int *)t174);
    t178 = *((unsigned int *)t175);
    t179 = (t177 | t178);
    *((unsigned int *)t176) = t179;
    t180 = *((unsigned int *)t176);
    t181 = (t180 != 0);
    if (t181 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t161 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t162) = 1;
    goto LAB57;

LAB56:    t169 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB57;

LAB58:    t182 = *((unsigned int *)t170);
    t183 = *((unsigned int *)t176);
    *((unsigned int *)t170) = (t182 | t183);
    t184 = (t132 + 4);
    t185 = (t162 + 4);
    t186 = *((unsigned int *)t132);
    t187 = (~(t186));
    t188 = *((unsigned int *)t184);
    t189 = (~(t188));
    t190 = *((unsigned int *)t162);
    t191 = (~(t190));
    t192 = *((unsigned int *)t185);
    t193 = (~(t192));
    t194 = (t187 & t189);
    t195 = (t191 & t193);
    t196 = (~(t194));
    t197 = (~(t195));
    t198 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t198 & t196);
    t199 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t199 & t197);
    t200 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t200 & t196);
    t201 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t201 & t197);
    goto LAB60;

LAB61:    *((unsigned int *)t113) = 1;
    goto LAB64;

LAB63:    t208 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t208) = 1;
    goto LAB64;

LAB65:    t213 = (t0 + 4248U);
    t214 = *((char **)t213);
    t213 = ((char*)((ng5)));
    memset(t215, 0, 8);
    xsi_vlog_unsigned_add(t215, 32, t214, 32, t213, 32);
    goto LAB66;

LAB67:    t220 = (t0 + 5368U);
    t221 = *((char **)t220);
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t112, 32, t215, 32, t221, 32);
    goto LAB73;

LAB71:    memcpy(t112, t215, 8);
    goto LAB73;

}

static void Cont_126_5(char *t0)
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

LAB0:    t1 = (t0 + 10328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t0 + 12336);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
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
    t16 = (t0 + 11968);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_131_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t107[8];
    char t112[8];
    char t113[8];
    char t116[8];
    char t132[8];
    char t146[8];
    char t162[8];
    char t170[8];
    char t215[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
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
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    char *t222;
    char *t223;
    char *t224;
    char *t225;
    char *t226;

LAB0:    t1 = (t0 + 10576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t62, t22, 8);

LAB14:    memset(t4, 0, 8);
    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t94) != 0)
        goto LAB28;

LAB29:    t101 = (t4 + 4);
    t102 = *((unsigned int *)t4);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB30;

LAB31:    t108 = *((unsigned int *)t4);
    t109 = (~(t108));
    t110 = *((unsigned int *)t101);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t101) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t112, 8);

LAB38:    t220 = (t0 + 12400);
    t222 = (t220 + 56U);
    t223 = *((char **)t222);
    t224 = (t223 + 56U);
    t225 = *((char **)t224);
    memcpy(t225, t3, 8);
    xsi_driver_vfirst_trans(t220, 0, 31U);
    t226 = (t0 + 11984);
    *((int *)t226) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 7208);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB18;

LAB15:    if (t50 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t38) = 1;

LAB18:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t55) != 0)
        goto LAB21;

LAB22:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t22 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t54) = 1;
    goto LAB22;

LAB21:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB22;

LAB23:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t22 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t22);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t100 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB29;

LAB30:    t105 = (t0 + 4728U);
    t106 = *((char **)t105);
    t105 = ((char*)((ng5)));
    memset(t107, 0, 8);
    xsi_vlog_unsigned_add(t107, 32, t106, 32, t105, 32);
    goto LAB31;

LAB32:    t114 = (t0 + 1048U);
    t115 = *((char **)t114);
    t114 = ((char*)((ng4)));
    memset(t116, 0, 8);
    t117 = (t115 + 4);
    t118 = (t114 + 4);
    t119 = *((unsigned int *)t115);
    t120 = *((unsigned int *)t114);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = (t121 | t124);
    t126 = *((unsigned int *)t117);
    t127 = *((unsigned int *)t118);
    t128 = (t126 | t127);
    t129 = (~(t128));
    t130 = (t125 & t129);
    if (t130 != 0)
        goto LAB42;

LAB39:    if (t128 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t116) = 1;

LAB42:    memset(t132, 0, 8);
    t133 = (t116 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t116);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t133) != 0)
        goto LAB45;

LAB46:    t140 = (t132 + 4);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB47;

LAB48:    memcpy(t170, t132, 8);

LAB49:    memset(t113, 0, 8);
    t202 = (t170 + 4);
    t203 = *((unsigned int *)t202);
    t204 = (~(t203));
    t205 = *((unsigned int *)t170);
    t206 = (t205 & t204);
    t207 = (t206 & 1U);
    if (t207 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t202) != 0)
        goto LAB63;

LAB64:    t209 = (t113 + 4);
    t210 = *((unsigned int *)t113);
    t211 = *((unsigned int *)t209);
    t212 = (t210 || t211);
    if (t212 > 0)
        goto LAB65;

LAB66:    t216 = *((unsigned int *)t113);
    t217 = (~(t216));
    t218 = *((unsigned int *)t209);
    t219 = (t217 || t218);
    if (t219 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t209) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t113) > 0)
        goto LAB71;

LAB72:    memcpy(t112, t221, 8);

LAB73:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t107, 32, t112, 32);
    goto LAB38;

LAB36:    memcpy(t3, t107, 8);
    goto LAB38;

LAB41:    t131 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t132) = 1;
    goto LAB46;

LAB45:    t139 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB46;

LAB47:    t144 = (t0 + 2968U);
    t145 = *((char **)t144);
    t144 = ((char*)((ng2)));
    memset(t146, 0, 8);
    t147 = (t145 + 4);
    t148 = (t144 + 4);
    t149 = *((unsigned int *)t145);
    t150 = *((unsigned int *)t144);
    t151 = (t149 ^ t150);
    t152 = *((unsigned int *)t147);
    t153 = *((unsigned int *)t148);
    t154 = (t152 ^ t153);
    t155 = (t151 | t154);
    t156 = *((unsigned int *)t147);
    t157 = *((unsigned int *)t148);
    t158 = (t156 | t157);
    t159 = (~(t158));
    t160 = (t155 & t159);
    if (t160 != 0)
        goto LAB53;

LAB50:    if (t158 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t146) = 1;

LAB53:    memset(t162, 0, 8);
    t163 = (t146 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t146);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t163) != 0)
        goto LAB56;

LAB57:    t171 = *((unsigned int *)t132);
    t172 = *((unsigned int *)t162);
    t173 = (t171 & t172);
    *((unsigned int *)t170) = t173;
    t174 = (t132 + 4);
    t175 = (t162 + 4);
    t176 = (t170 + 4);
    t177 = *((unsigned int *)t174);
    t178 = *((unsigned int *)t175);
    t179 = (t177 | t178);
    *((unsigned int *)t176) = t179;
    t180 = *((unsigned int *)t176);
    t181 = (t180 != 0);
    if (t181 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t161 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t162) = 1;
    goto LAB57;

LAB56:    t169 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB57;

LAB58:    t182 = *((unsigned int *)t170);
    t183 = *((unsigned int *)t176);
    *((unsigned int *)t170) = (t182 | t183);
    t184 = (t132 + 4);
    t185 = (t162 + 4);
    t186 = *((unsigned int *)t132);
    t187 = (~(t186));
    t188 = *((unsigned int *)t184);
    t189 = (~(t188));
    t190 = *((unsigned int *)t162);
    t191 = (~(t190));
    t192 = *((unsigned int *)t185);
    t193 = (~(t192));
    t194 = (t187 & t189);
    t195 = (t191 & t193);
    t196 = (~(t194));
    t197 = (~(t195));
    t198 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t198 & t196);
    t199 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t199 & t197);
    t200 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t200 & t196);
    t201 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t201 & t197);
    goto LAB60;

LAB61:    *((unsigned int *)t113) = 1;
    goto LAB64;

LAB63:    t208 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t208) = 1;
    goto LAB64;

LAB65:    t213 = (t0 + 4248U);
    t214 = *((char **)t213);
    t213 = ((char*)((ng5)));
    memset(t215, 0, 8);
    xsi_vlog_unsigned_add(t215, 32, t214, 32, t213, 32);
    goto LAB66;

LAB67:    t220 = (t0 + 5208U);
    t221 = *((char **)t220);
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t112, 32, t215, 32, t221, 32);
    goto LAB73;

LAB71:    memcpy(t112, t215, 8);
    goto LAB73;

}

static void Always_145_7(char *t0)
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

LAB0:    t1 = (t0 + 10824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 12000);
    *((int *)t2) = 1;
    t3 = (t0 + 10856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);

LAB5:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 3128U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(154, ng0);

LAB10:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6008U);
    t3 = *((char **)t2);
    t2 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(146, ng0);

LAB9:    xsi_set_current_line(147, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB8;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 11072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng6)));
    t3 = (t0 + 12464);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
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

LAB0:    t1 = (t0 + 11320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t3 = (t0 + 12528);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig3_execute(char *t0)
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

LAB0:    t1 = (t0 + 11568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng8)));
    t3 = (t0 + 12592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 4);

LAB1:    return;
}


extern void work_m_00000000002072703463_1746258098_init()
{
	static char *pe[] = {(void *)NetDecl_78_0,(void *)Always_79_1,(void *)NetDecl_86_2,(void *)NetDecl_88_3,(void *)NetDecl_109_4,(void *)Cont_126_5,(void *)NetDecl_131_6,(void *)Always_145_7,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000002072703463_1746258098", "isim/mips_isim_beh.exe.sim/work/m_00000000002072703463_1746258098.didat");
	xsi_register_executes(pe);
}
