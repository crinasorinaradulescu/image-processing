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
static const char *ng0 = "C:/Users/crina/Desktop/tema2/implementare_tema2/base2_to_base3.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Always_33_0(char *t0)
{
    char t11[8];
    char t12[8];
    char t21[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 2816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t2, 32, t3, 32);
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t11, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(37, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t2) != 0)
        goto LAB19;

LAB20:    t5 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB21;

LAB22:    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t5) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t12) > 0)
        goto LAB27;

LAB28:    memcpy(t11, t7, 8);

LAB29:    t10 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t10, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t2) != 0)
        goto LAB32;

LAB33:    t5 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t5);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB34;

LAB35:    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t5) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t12) > 0)
        goto LAB40;

LAB41:    memcpy(t11, t9, 8);

LAB42:    t10 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t10, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(45, ng0);

LAB43:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 3296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t2, 32, t3, 32);
    t4 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 2, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(50, ng0);

LAB44:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3296);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(57, ng0);

LAB51:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB47:    goto LAB15;

LAB13:    xsi_set_current_line(61, ng0);

LAB52:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB15;

LAB17:    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB19:    t4 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB21:    t7 = (t0 + 1456U);
    t9 = *((char **)t7);
    memcpy(t21, t9, 8);
    goto LAB22;

LAB23:    t7 = ((char*)((ng1)));
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t11, 32, t21, 32, t7, 32);
    goto LAB29;

LAB27:    memcpy(t11, t21, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t12) = 1;
    goto LAB33;

LAB32:    t4 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB34:    t7 = ((char*)((ng2)));
    goto LAB35;

LAB36:    t9 = ((char*)((ng1)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t11, 32, t7, 32, t9, 32);
    goto LAB42;

LAB40:    memcpy(t11, t7, 8);
    goto LAB42;

LAB45:    xsi_set_current_line(52, ng0);

LAB48:    xsi_set_current_line(53, ng0);
    t10 = (t0 + 3136);
    t26 = (t10 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t27, 5, t28, 32);
    t29 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t29, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 3U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 3U);
    t5 = (t0 + 2496);
    t7 = (t0 + 2496);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 3136);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 32, t26, 32, t29, 5);
    t32 = ((char*)((ng3)));
    xsi_vlog_convert_indexed_partindices(t12, t21, t30, ((int*)(t10)), 2, t31, 32, 2, t32, 32, 1, 1);
    t33 = (t12 + 4);
    t19 = *((unsigned int *)t33);
    t8 = (!(t19));
    t34 = (t21 + 4);
    t20 = *((unsigned int *)t34);
    t35 = (!(t20));
    t36 = (t8 && t35);
    t37 = (t30 + 4);
    t22 = *((unsigned int *)t37);
    t38 = (!(t22));
    t39 = (t36 && t38);
    if (t39 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB47;

LAB49:    t23 = *((unsigned int *)t30);
    t40 = (t23 + 0);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t21);
    t41 = (t24 - t25);
    t42 = (t41 + 1);
    xsi_vlogvar_wait_assign_value(t5, t11, t40, *((unsigned int *)t21), t42, 0LL);
    goto LAB50;

}


extern void work_m_00000000000886556646_4283313649_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000000886556646_4283313649", "isim/nume_isim_beh.exe.sim/work/m_00000000000886556646_4283313649.didat");
	xsi_register_executes(pe);
}
