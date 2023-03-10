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
static const char *ng0 = "C:/Users/crina/Desktop/tema2/implementare_tema2/test.v";
static int ng1[] = {0, 0};
static const char *ng2 = "test.string";
static const char *ng3 = "r";
static const char *ng4 = "error opening data file\n";
static int ng5[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng6 = "error reading from data file\n";



static void Initial_26_0(char *t0)
{
    char t6[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 4400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);

LAB4:    t2 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 4208);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t5) == 0)
        goto LAB7;

LAB9:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB10:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4096);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    *((int *)t20) = xsi_vlogfile_fgets(t4, 4096, *((unsigned int *)t13));
    t19 = (t20 + 4);
    *((int *)t19) = 0;
    memset(t6, 0, 8);
    t21 = (t20 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    t9 = *((unsigned int *)t20);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t21) == 0)
        goto LAB15;

LAB17:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;

LAB18:    t23 = (t6 + 4);
    t14 = *((unsigned int *)t23);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4096);
    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB5:    t3 = (t0 + 4208);
    xsi_vlog_dispose_process_subprogram_invocation(t3);

LAB1:    return;
LAB7:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(34, ng0);
    t19 = (t0 + 280);
    xsi_vlogfile_write(0, 0, 1, ng4, 1, t19);
    xsi_set_current_line(35, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB15:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);

LAB22:    xsi_set_current_line(41, ng0);
    t24 = (t0 + 280);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t24);
    xsi_set_current_line(42, ng0);
    xsi_vlog_finish(1);
    goto LAB21;

}

static void Always_50_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4456);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 3000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 3000);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}


extern void work_m_00000000000899987018_3823007873_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Always_50_1};
	xsi_register_didat("work_m_00000000000899987018_3823007873", "isim/nume_isim_beh.exe.sim/work/m_00000000000899987018_3823007873.didat");
	xsi_register_executes(pe);
}
