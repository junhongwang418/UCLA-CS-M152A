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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_12655698025911621603_1208434039_init();
    work_m_04658013560494801740_1463512774_init();
    work_m_02725957312397803988_2178944355_init();
    work_m_11328768263720332404_3598138731_init();
    work_m_13386383531635860278_0365506110_init();
    work_m_09653594290698887419_1906350187_init();
    work_m_04591905678490662075_3330788944_init();
    work_m_04335139740966908019_1373088347_init();
    work_m_16692292754030186403_1641814760_init();
    work_m_18247052049066401049_3671711236_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_18247052049066401049_3671711236");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
