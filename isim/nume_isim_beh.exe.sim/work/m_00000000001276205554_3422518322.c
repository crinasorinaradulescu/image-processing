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
static const char *ng0 = "C:/Users/crina/Desktop/tema2/implementare_tema2/image.v";
static const char *ng1 = "test.data";
static const char *ng2 = "r";
static const char *ng3 = "error opening data file\n";
static int ng4[] = {0, 0};
static int ng5[] = {2, 0};
static const char *ng6 = "%d\n";
static int ng7[] = {1, 0};
static const char *ng8 = "error reading test data\n";



static void Initial_22_0(char *t0)
{
    char t8[8];
    char t18[8];
    char t22[8];
    char t26[8];
    char t39[8];
    char t42[8];
    char t43[8];
    char t64[8];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    int t57;
    char *t58;
    int t59;
    int t60;
    int t61;
    int t62;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;

LAB0:    xsi_set_current_line(22, ng0);

LAB2:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = (t2 + 4);
    t3 = *((unsigned int *)t1);
    t4 = (~(t3));
    t5 = *((unsigned int *)t2);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(38, ng0);

LAB29:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB30:    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t8, 0, 8);
    xsi_vlog_signed_power(t8, 32, t10, 32, t12, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t9, 32, t8, 32);
    t11 = (t18 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t18);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB31;

LAB32:
LAB5:
LAB1:    return;
LAB3:    xsi_set_current_line(23, ng0);

LAB6:    xsi_set_current_line(24, ng0);
    *((int *)t8) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t9 = (t8 + 4);
    *((int *)t9) = 0;
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 32);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 3000);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    memset(t8, 0, 8);
    t10 = (t9 + 4);
    t3 = *((unsigned int *)t10);
    t4 = (~(t3));
    t5 = *((unsigned int *)t9);
    t6 = (t5 & t4);
    t7 = (t6 & 4294967295U);
    if (t7 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t10) == 0)
        goto LAB7;

LAB9:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;

LAB10:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(29, ng0);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB15:    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t8, 0, 8);
    xsi_vlog_signed_power(t8, 32, t10, 32, t12, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t9, 32, t8, 32);
    t11 = (t18 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t18);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 3000);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    xsi_vlogfile_fclose(*((unsigned int *)t9));
    goto LAB5;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(25, ng0);

LAB14:    xsi_set_current_line(26, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(27, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB16:    xsi_set_current_line(29, ng0);

LAB18:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 2840);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);

LAB19:    t1 = (t0 + 2840);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t8, 0, 8);
    xsi_vlog_signed_power(t8, 32, t10, 32, t12, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t9, 32, t8, 32);
    t11 = (t18 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t18);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB15;

LAB20:    xsi_set_current_line(30, ng0);

LAB22:    xsi_set_current_line(31, ng0);
    t19 = (t0 + 3000);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 2520);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t0 + 2520);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 2520);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 2680);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t0 + 2840);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t26, 24, t25, t29, t32, 2, 2, t35, 32, 1, t38, 32, 1);
    xsi_vlog_bit_copy(t22, 0, t26, 0, 24);
    *((int *)t39) = xsi_vlogfile_fscanf(*((unsigned int *)t21), ng6, 2, t0, (char)118, t22, 24);
    t40 = (t39 + 4);
    *((int *)t40) = 0;
    t41 = (t0 + 2520);
    t44 = (t0 + 2520);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 2520);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2680);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t0 + 2840);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    xsi_vlog_generic_convert_array_indices(t42, t43, t46, t49, 2, 2, t52, 32, 1, t55, 32, 1);
    t56 = (t42 + 4);
    t13 = *((unsigned int *)t56);
    t57 = (!(t13));
    t58 = (t43 + 4);
    t14 = *((unsigned int *)t58);
    t59 = (!(t14));
    t60 = (t57 && t59);
    if (t60 == 1)
        goto LAB23;

LAB24:    t63 = ((char*)((ng7)));
    memset(t64, 0, 8);
    xsi_vlog_signed_not_equal(t64, 32, t39, 32, t63, 32);
    t65 = (t64 + 4);
    t17 = *((unsigned int *)t65);
    t66 = (~(t17));
    t67 = *((unsigned int *)t64);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2840);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB19;

LAB23:    t15 = *((unsigned int *)t42);
    t16 = *((unsigned int *)t43);
    t61 = (t15 - t16);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t41, t22, 0, *((unsigned int *)t43), t62);
    goto LAB24;

LAB25:    xsi_set_current_line(31, ng0);

LAB28:    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(0, 0, 1, ng8, 1, t0);
    xsi_set_current_line(33, ng0);
    xsi_vlog_finish(1);
    goto LAB27;

LAB31:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 2840);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);

LAB33:    t1 = (t0 + 2840);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng5)));
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t8, 0, 8);
    xsi_vlog_signed_power(t8, 32, t10, 32, t12, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t9, 32, t8, 32);
    t11 = (t18 + 4);
    t3 = *((unsigned int *)t11);
    t4 = (~(t3));
    t5 = *((unsigned int *)t18);
    t6 = (t5 & t4);
    t7 = (t6 != 0);
    if (t7 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB30;

LAB34:    xsi_set_current_line(41, ng0);
    t19 = (t0 + 2680);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t0 + 2840);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t21, 32, t25, 32);
    t27 = (t0 + 2520);
    t28 = (t0 + 2520);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2520);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = (t0 + 2680);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 2840);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t26, t39, t30, t33, 2, 2, t36, 32, 1, t40, 32, 1);
    t41 = (t26 + 4);
    t13 = *((unsigned int *)t41);
    t57 = (!(t13));
    t44 = (t39 + 4);
    t14 = *((unsigned int *)t44);
    t59 = (!(t14));
    t60 = (t57 && t59);
    if (t60 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2840);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t9, 32, t10, 32);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB33;

LAB36:    t15 = *((unsigned int *)t26);
    t16 = *((unsigned int *)t39);
    t61 = (t15 - t16);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t27, t22, 0, *((unsigned int *)t39), t62);
    goto LAB37;

}

static void Cont_45_1(char *t0)
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2520);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2520);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    t12 = (t0 + 1640U);
    t14 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 24, t4, t8, t11, 2, 2, t13, 6, 2, t14, 6, 2);
    t12 = (t0 + 4832);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 16777215U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t12, 0, 23);
    t27 = (t0 + 4736);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_47_2(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4752);
    *((int *)t2) = 1;
    t3 = (t0 + 4448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1800U);
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
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);
    t11 = (t0 + 1960U);
    t12 = *((char **)t11);
    t11 = (t0 + 2520);
    t15 = (t0 + 2520);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2520);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1640U);
    t23 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 2, t22, 6, 2, t23, 6, 2);
    t21 = (t13 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (!(t24));
    t26 = (t14 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t14);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t33, 0LL);
    goto LAB10;

}


extern void work_m_00000000001276205554_3422518322_init()
{
	static char *pe[] = {(void *)Initial_22_0,(void *)Cont_45_1,(void *)Always_47_2};
	xsi_register_didat("work_m_00000000001276205554_3422518322", "isim/nume_isim_beh.exe.sim/work/m_00000000001276205554_3422518322.didat");
	xsi_register_executes(pe);
}
