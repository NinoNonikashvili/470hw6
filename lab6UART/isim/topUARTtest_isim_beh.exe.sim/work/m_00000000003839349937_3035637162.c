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
static const char *ng0 = "C:/Users/nino/Desktop/TsotneLab/470hw6/lab6UART/topUART.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {12, 0};
static int ng5[] = {11, 0};
static int ng6[] = {10, 0};
static int ng7[] = {9, 0};
static int ng8[] = {8, 0};
static int ng9[] = {7, 0};
static int ng10[] = {6, 0};
static int ng11[] = {5, 0};
static int ng12[] = {4, 0};
static int ng13[] = {3, 0};
static int ng14[] = {2, 0};



static void Cont_23_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t4);
    t6 = (t6 & 1);
    if (*((unsigned int *)t2) != 0)
        goto LAB4;

LAB5:    t8 = 1;

LAB7:    t9 = (t8 <= 7);
    if (t9 == 1)
        goto LAB8;

LAB9:    *((unsigned int *)t3) = t6;

LAB6:    t11 = (t0 + 6576);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 6448);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    t7 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB6;

LAB8:    t5 = (t5 >> 1);
    t10 = (t5 & 1);
    t6 = (t6 ^ t10);

LAB10:    t8 = (t8 + 1);
    goto LAB7;

}

static void Always_25_1(char *t0)
{
    char t8[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
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
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 5632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 6464);
    *((int *)t2) = 1;
    t3 = (t0 + 5664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 3344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 15, t7, 32);
    t9 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 15, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(28, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    t29 = (t0 + 3504);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t32) == 0)
        goto LAB14;

LAB16:    t38 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t38) = 1;

LAB17:    t39 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t39, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t28) = 1;
    goto LAB17;

}

static void Cont_34_2(char *t0)
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

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6640);
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
    t18 = (t0 + 6480);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_37_3(char *t0)
{
    char t13[8];
    char t35[8];
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
    char *t20;
    char *t21;
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
    unsigned int t32;
    unsigned int t33;
    int t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 6128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6496);
    *((int *)t2) = 1;
    t3 = (t0 + 6160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1824U);
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
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB32;

LAB29:    if (t26 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;

LAB32:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 3024);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2304U);
    t14 = *((char **)t12);
    t12 = (t0 + 1984U);
    t15 = *((char **)t12);
    t12 = (t0 + 3184);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t13, 12, 12, 4U, t17, 2, t15, 8, t14, 1, t11, 1);
    t18 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 12, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(47, ng0);

LAB16:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(50, ng0);

LAB20:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 3664);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 3664);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 4304);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t13, 1, t14, t17, 2, t20, 4, 2);
    t21 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t21, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB24;

LAB21:    if (t26 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t13) = 1;

LAB24:    t15 = (t13 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB19;

LAB23:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);

LAB28:    xsi_set_current_line(54, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 4, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB31:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(59, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    goto LAB35;

LAB36:    xsi_set_current_line(60, ng0);

LAB39:    xsi_set_current_line(61, ng0);
    t11 = (t0 + 2864);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 3824);
    t16 = (t0 + 3824);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t18, 2, t19, 32, 1);
    t20 = (t13 + 4);
    t22 = *((unsigned int *)t20);
    t34 = (!(t22));
    if (t34 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 11);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 11);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 10);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 9);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 9);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 8);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 6);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 5);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t22 = (t10 & 1);
    *((unsigned int *)t5) = t22;
    t12 = (t0 + 3824);
    t14 = (t0 + 3824);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t35, t16, 2, t17, 32, 1);
    t18 = (t35 + 4);
    t23 = *((unsigned int *)t18);
    t34 = (!(t23));
    if (t34 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB67;

LAB64:    if (t26 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t13) = 1;

LAB67:    t15 = (t13 + 4);
    t29 = *((unsigned int *)t15);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB68;

LAB69:
LAB70:    goto LAB38;

LAB40:    xsi_vlogvar_wait_assign_value(t15, t14, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB45;

LAB46:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB47;

LAB48:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB53;

LAB54:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB57;

LAB58:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB59;

LAB60:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB61;

LAB62:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB63;

LAB66:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(74, ng0);

LAB71:    xsi_set_current_line(75, ng0);
    t16 = (t0 + 3824);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t35, 0, 8);
    t19 = (t35 + 4);
    t20 = (t18 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (t36 >> 2);
    *((unsigned int *)t35) = t37;
    t38 = *((unsigned int *)t20);
    t39 = (t38 >> 2);
    *((unsigned int *)t19) = t39;
    t40 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t40 & 255U);
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t41 & 255U);
    t21 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t21, t35, 0, 0, 8, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    goto LAB70;

}


extern void work_m_00000000003839349937_3035637162_init()
{
	static char *pe[] = {(void *)Cont_23_0,(void *)Always_25_1,(void *)Cont_34_2,(void *)Always_37_3};
	xsi_register_didat("work_m_00000000003839349937_3035637162", "isim/topUARTtest_isim_beh.exe.sim/work/m_00000000003839349937_3035637162.didat");
	xsi_register_executes(pe);
}
