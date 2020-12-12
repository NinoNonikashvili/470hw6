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
static const char *ng0 = "C:/Users/nino/Desktop/TsotneLab/470hw6/uart_simple/transmitter.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {11, 0};



static void Initial_13_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(13, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Cont_21_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t12[8];
    char t16[8];
    char t32[8];
    char t36[8];
    char t52[8];
    char t56[8];
    char t72[8];
    char t76[8];
    char t92[8];
    char t96[8];
    char t112[8];
    char t116[8];
    char t132[8];
    char t136[8];
    char t151[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = (t0 + 1648U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = (t0 + 1688U);
    t11 = *((char **)t10);
    t10 = (t0 + 1648U);
    t13 = (t10 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t12, 32, t11, t14, 2, t15, 32, 1);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    *((unsigned int *)t16) = t19;
    t20 = (t6 + 4);
    t21 = (t12 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB4;

LAB5:
LAB6:    t30 = (t0 + 1688U);
    t31 = *((char **)t30);
    t30 = (t0 + 1648U);
    t33 = (t30 + 72U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t32, 32, t31, t34, 2, t35, 32, 1);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    *((unsigned int *)t36) = t39;
    t40 = (t16 + 4);
    t41 = (t32 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB7;

LAB8:
LAB9:    t50 = (t0 + 1688U);
    t51 = *((char **)t50);
    t50 = (t0 + 1648U);
    t53 = (t50 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t52, 32, t51, t54, 2, t55, 32, 1);
    t57 = *((unsigned int *)t36);
    t58 = *((unsigned int *)t52);
    t59 = (t57 ^ t58);
    *((unsigned int *)t56) = t59;
    t60 = (t36 + 4);
    t61 = (t52 + 4);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB10;

LAB11:
LAB12:    t70 = (t0 + 1688U);
    t71 = *((char **)t70);
    t70 = (t0 + 1648U);
    t73 = (t70 + 72U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t72, 32, t71, t74, 2, t75, 32, 1);
    t77 = *((unsigned int *)t56);
    t78 = *((unsigned int *)t72);
    t79 = (t77 ^ t78);
    *((unsigned int *)t76) = t79;
    t80 = (t56 + 4);
    t81 = (t72 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB13;

LAB14:
LAB15:    t90 = (t0 + 1688U);
    t91 = *((char **)t90);
    t90 = (t0 + 1648U);
    t93 = (t90 + 72U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t92, 32, t91, t94, 2, t95, 32, 1);
    t97 = *((unsigned int *)t76);
    t98 = *((unsigned int *)t92);
    t99 = (t97 ^ t98);
    *((unsigned int *)t96) = t99;
    t100 = (t76 + 4);
    t101 = (t92 + 4);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t100);
    t104 = *((unsigned int *)t101);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB16;

LAB17:
LAB18:    t110 = (t0 + 1688U);
    t111 = *((char **)t110);
    t110 = (t0 + 1648U);
    t113 = (t110 + 72U);
    t114 = *((char **)t113);
    t115 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t112, 32, t111, t114, 2, t115, 32, 1);
    t117 = *((unsigned int *)t96);
    t118 = *((unsigned int *)t112);
    t119 = (t117 ^ t118);
    *((unsigned int *)t116) = t119;
    t120 = (t96 + 4);
    t121 = (t112 + 4);
    t122 = (t116 + 4);
    t123 = *((unsigned int *)t120);
    t124 = *((unsigned int *)t121);
    t125 = (t123 | t124);
    *((unsigned int *)t122) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 != 0);
    if (t127 == 1)
        goto LAB19;

LAB20:
LAB21:    t130 = (t0 + 1688U);
    t131 = *((char **)t130);
    t130 = (t0 + 1648U);
    t133 = (t130 + 72U);
    t134 = *((char **)t133);
    t135 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t132, 32, t131, t134, 2, t135, 32, 1);
    t137 = *((unsigned int *)t116);
    t138 = *((unsigned int *)t132);
    t139 = (t137 ^ t138);
    *((unsigned int *)t136) = t139;
    t140 = (t116 + 4);
    t141 = (t132 + 4);
    t142 = (t136 + 4);
    t143 = *((unsigned int *)t140);
    t144 = *((unsigned int *)t141);
    t145 = (t143 | t144);
    *((unsigned int *)t142) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 != 0);
    if (t147 == 1)
        goto LAB22;

LAB23:
LAB24:    t150 = ((char*)((ng2)));
    memset(t151, 0, 8);
    t152 = (t136 + 4);
    t153 = (t150 + 4);
    t154 = *((unsigned int *)t136);
    t155 = *((unsigned int *)t150);
    t156 = (t154 ^ t155);
    t157 = *((unsigned int *)t152);
    t158 = *((unsigned int *)t153);
    t159 = (t157 ^ t158);
    t160 = (t156 | t159);
    t161 = *((unsigned int *)t152);
    t162 = *((unsigned int *)t153);
    t163 = (t161 | t162);
    t164 = (~(t163));
    t165 = (t160 & t164);
    if (t165 != 0)
        goto LAB28;

LAB25:    if (t163 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t151) = 1;

LAB28:    memset(t4, 0, 8);
    t167 = (t151 + 4);
    t168 = *((unsigned int *)t167);
    t169 = (~(t168));
    t170 = *((unsigned int *)t151);
    t171 = (t170 & t169);
    t172 = (t171 & 1U);
    if (t172 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t167) != 0)
        goto LAB31;

LAB32:    t174 = (t4 + 4);
    t175 = *((unsigned int *)t4);
    t176 = *((unsigned int *)t174);
    t177 = (t175 || t176);
    if (t177 > 0)
        goto LAB33;

LAB34:    t179 = *((unsigned int *)t4);
    t180 = (~(t179));
    t181 = *((unsigned int *)t174);
    t182 = (t180 || t181);
    if (t182 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t174) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t4) > 0)
        goto LAB39;

LAB40:    memcpy(t3, t183, 8);

LAB41:    t184 = (t0 + 5304);
    t185 = (t184 + 56U);
    t186 = *((char **)t185);
    t187 = (t186 + 56U);
    t188 = *((char **)t187);
    memset(t188, 0, 8);
    t189 = 1U;
    t190 = t189;
    t191 = (t3 + 4);
    t192 = *((unsigned int *)t3);
    t189 = (t189 & t192);
    t193 = *((unsigned int *)t191);
    t190 = (t190 & t193);
    t194 = (t188 + 4);
    t195 = *((unsigned int *)t188);
    *((unsigned int *)t188) = (t195 | t189);
    t196 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t196 | t190);
    xsi_driver_vfirst_trans(t184, 0, 0);
    t197 = (t0 + 5192);
    *((int *)t197) = 1;

LAB1:    return;
LAB4:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    goto LAB6;

LAB7:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    goto LAB9;

LAB10:    t68 = *((unsigned int *)t56);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t56) = (t68 | t69);
    goto LAB12;

LAB13:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    goto LAB15;

LAB16:    t108 = *((unsigned int *)t96);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t96) = (t108 | t109);
    goto LAB18;

LAB19:    t128 = *((unsigned int *)t116);
    t129 = *((unsigned int *)t122);
    *((unsigned int *)t116) = (t128 | t129);
    goto LAB21;

LAB22:    t148 = *((unsigned int *)t136);
    t149 = *((unsigned int *)t142);
    *((unsigned int *)t136) = (t148 | t149);
    goto LAB24;

LAB27:    t166 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB31:    t173 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t173) = 1;
    goto LAB32;

LAB33:    t178 = ((char*)((ng2)));
    goto LAB34;

LAB35:    t183 = ((char*)((ng1)));
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t3, 32, t178, 32, t183, 32);
    goto LAB41;

LAB39:    memcpy(t3, t178, 8);
    goto LAB41;

}

static void Always_23_2(char *t0)
{
    char t13[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5208);
    *((int *)t2) = 1;
    t3 = (t0 + 4656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);

LAB10:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 12, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2008U);
    t14 = *((char **)t12);
    t12 = (t0 + 1688U);
    t15 = *((char **)t12);
    t12 = (t0 + 3048);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t13, 12, 12, 4U, t17, 2, t15, 8, t14, 1, t11, 1);
    t18 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 12, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(34, ng0);

LAB17:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 3208);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_index_select_value(t13, 1, t11, t15, 2, t18, 3, 2);
    t19 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB21;

LAB18:    if (t24 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t13) = 1;

LAB21:    t15 = (t13 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB16;

LAB20:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(38, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 3, 0LL);
    goto LAB24;

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
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5224);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002185260297_4260589381_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Cont_21_1,(void *)Always_23_2,(void *)Cont_42_3};
	xsi_register_didat("work_m_00000000002185260297_4260589381", "isim/transmitter_isim_beh.exe.sim/work/m_00000000002185260297_4260589381.didat");
	xsi_register_executes(pe);
}
