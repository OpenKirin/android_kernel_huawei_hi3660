//******************************************************************************
// Copyright (C), 2008-2014, Hisilicon Technologies Co., Ltd.
// Project name   : HiDMAV
// File name      : reg_offset.h
// Author         : 叶雷、王渝、李勇、潘伟
// Abstract       : The offset address definition for the module ASP_DMAC
// Others         : Generated automatically by nManager 
//------------------------------------------------------------------------------
// Modification History: 
// 
//******************************************************************************

/* ASP_DMAC 模块寄存器基地址 */
#define HI3650_ASP_EDMAC_BASE                           (0xE804B000)

/******************************************************************************/
/*                      HiDMAV ASP_DMAC 寄存器定义                            */
/******************************************************************************/
#define HI3650_ASP_EDMAC_INT_STAT_0_REG                 (0 + 0x0)         /* 处理器X的中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_STAT_1_REG                 (0 + 0x40)        /* 处理器X的中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC1_0_REG                  (0 + 0x4)         /* 处理器X的通道传输完成中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC1_1_REG                  (0 + 0x44)        /* 处理器X的通道传输完成中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC2_0_REG                  (0 + 0x8)         /* 处理器X的链表节点传输完成中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC2_1_REG                  (0 + 0x48)        /* 处理器X的链表节点传输完成中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR1_0_REG                 (0 + 0xC)         /* 处理器X的配置错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR1_1_REG                 (0 + 0x4C)        /* 处理器X的配置错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR2_0_REG                 (0 + 0x10)        /* 处理器X的数据传输错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR2_1_REG                 (0 + 0x50)        /* 处理器X的数据传输错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR3_0_REG                 (0 + 0x14)        /* 处理器X的读链表错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR3_1_REG                 (0 + 0x54)        /* 处理器X的读链表错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC1_MASK_0_REG             (0 + 0x18)        /* 处理器X的通道传输完成中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC1_MASK_1_REG             (0 + 0x58)        /* 处理器X的通道传输完成中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC2_MASK_0_REG             (0 + 0x1C)        /* 处理器X的链表节点传输完成中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC2_MASK_1_REG             (0 + 0x5C)        /* 处理器X的链表节点传输完成中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR1_MASK_0_REG            (0 + 0x20)        /* 处理器X的配置错误中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR1_MASK_1_REG            (0 + 0x60)        /* 处理器X的配置错误中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR2_MASK_0_REG            (0 + 0x24)        /* 处理器X的数据传输错误中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR2_MASK_1_REG            (0 + 0x64)        /* 处理器X的数据传输错误中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR3_MASK_0_REG            (0 + 0x28)        /* 处理器X的链表读取错误中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR3_MASK_1_REG            (0 + 0x68)        /* 处理器X的链表读取错误中断屏蔽寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC1_RAW_REG                (0 + 0x600)       /* 原始通道传输完成中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_TC2_RAW_REG                (0 + 0x608)       /* 原始链表节点传输完成中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR1_RAW_REG               (0 + 0x610)       /* 原始配置错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR2_RAW_REG               (0 + 0x618)       /* 原始数据传输错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_INT_ERR3_RAW_REG               (0 + 0x620)       /* 原始链表读取错误中断状态寄存器。 */
#define HI3650_ASP_EDMAC_SREQ_REG                       (0 + 0x660)       /* 单传输请求寄存器。 */
#define HI3650_ASP_EDMAC_LSREQ_REG                      (0 + 0x664)       /* 末次单传输请求寄存器。 */
#define HI3650_ASP_EDMAC_BREQ_REG                       (0 + 0x668)       /* 突发传输请求寄存器。 */
#define HI3650_ASP_EDMAC_LBREQ_REG                      (0 + 0x66C)       /* 末次突发传输请求寄存器。 */
#define HI3650_ASP_EDMAC_FREQ_REG                       (0 + 0x670)       /* 批量传输请求寄存器。 */
#define HI3650_ASP_EDMAC_LFREQ_REG                      (0 + 0x674)       /* 末次批量传输请求寄存器。 */
#define HI3650_ASP_EDMAC_CH_PRI_REG                     (0 + 0x688)       /* 优先级控制寄存器。 */
#define HI3650_ASP_EDMAC_CH_STAT_REG                    (0 + 0x690)       /* 全局DMA状态寄存器。 */
#define HI3650_ASP_EDMAC_SEC_CTRL_REG                   (0 + 0x694)       /* DMA全局安全控制寄存器。 */
#define HI3650_ASP_EDMAC_DMA_CTRL_REG                   (0 + 0x698)       /* DMA全局控制寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_0_REG             (0 + 0x700)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_1_REG             (0 + 0x710)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_2_REG             (0 + 0x720)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_3_REG             (0 + 0x730)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_4_REG             (0 + 0x740)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_5_REG             (0 + 0x750)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_6_REG             (0 + 0x760)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_7_REG             (0 + 0x770)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_8_REG             (0 + 0x780)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_9_REG             (0 + 0x790)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_10_REG            (0 + 0x7A0)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT1_11_REG            (0 + 0x7B0)       /* 通道X的三维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_0_REG             (0 + 0x704)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_1_REG             (0 + 0x714)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_2_REG             (0 + 0x724)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_3_REG             (0 + 0x734)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_4_REG             (0 + 0x744)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_5_REG             (0 + 0x754)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_6_REG             (0 + 0x764)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_7_REG             (0 + 0x774)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_8_REG             (0 + 0x784)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_9_REG             (0 + 0x794)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_10_REG            (0 + 0x7A4)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_CNT0_11_REG            (0 + 0x7B4)       /* 通道X的一、二维传输剩余size状态寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_0_REG         (0 + 0x708)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_1_REG         (0 + 0x718)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_2_REG         (0 + 0x728)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_3_REG         (0 + 0x738)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_4_REG         (0 + 0x748)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_5_REG         (0 + 0x758)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_6_REG         (0 + 0x768)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_7_REG         (0 + 0x778)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_8_REG         (0 + 0x788)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_9_REG         (0 + 0x798)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_10_REG        (0 + 0x7A8)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_SRC_ADDR_11_REG        (0 + 0x7B8)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_0_REG         (0 + 0x70C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_1_REG         (0 + 0x71C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_2_REG         (0 + 0x72C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_3_REG         (0 + 0x73C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_4_REG         (0 + 0x74C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_5_REG         (0 + 0x75C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_6_REG         (0 + 0x76C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_7_REG         (0 + 0x77C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_8_REG         (0 + 0x78C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_9_REG         (0 + 0x79C)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_10_REG        (0 + 0x7AC)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CURR_DES_ADDR_11_REG        (0 + 0x7BC)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_0_REG                   (0 + 0x800)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_1_REG                   (0 + 0x840)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_2_REG                   (0 + 0x880)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_3_REG                   (0 + 0x8C0)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_4_REG                   (0 + 0x900)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_5_REG                   (0 + 0x940)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_6_REG                   (0 + 0x980)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_7_REG                   (0 + 0x9C0)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_8_REG                   (0 + 0xA00)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_9_REG                   (0 + 0xA40)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_10_REG                  (0 + 0xA80)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_LLI_11_REG                  (0 + 0xAC0)       /* 通道X的链表地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_0_REG                 (0 + 0x804)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_1_REG                 (0 + 0x844)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_2_REG                 (0 + 0x884)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_3_REG                 (0 + 0x8C4)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_4_REG                 (0 + 0x904)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_5_REG                 (0 + 0x944)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_6_REG                 (0 + 0x984)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_7_REG                 (0 + 0x9C4)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_8_REG                 (0 + 0xA04)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_9_REG                 (0 + 0xA44)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_10_REG                (0 + 0xA84)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_BINDX_11_REG                (0 + 0xAC4)       /* 通道X的二维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_0_REG                 (0 + 0x808)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_1_REG                 (0 + 0x848)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_2_REG                 (0 + 0x888)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_3_REG                 (0 + 0x8C8)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_4_REG                 (0 + 0x908)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_5_REG                 (0 + 0x948)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_6_REG                 (0 + 0x988)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_7_REG                 (0 + 0x9C8)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_8_REG                 (0 + 0xA08)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_9_REG                 (0 + 0xA48)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_10_REG                (0 + 0xA88)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CINDX_11_REG                (0 + 0xAC8)       /* 通道X的三维地址偏移量配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_0_REG                  (0 + 0x80C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_1_REG                  (0 + 0x84C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_2_REG                  (0 + 0x88C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_3_REG                  (0 + 0x8CC)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_4_REG                  (0 + 0x90C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_5_REG                  (0 + 0x94C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_6_REG                  (0 + 0x98C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_7_REG                  (0 + 0x9CC)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_8_REG                  (0 + 0xA0C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_9_REG                  (0 + 0xA4C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_10_REG                 (0 + 0xA8C)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT1_11_REG                 (0 + 0xACC)       /* 通道X的传输长度1配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_0_REG                  (0 + 0x810)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_1_REG                  (0 + 0x850)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_2_REG                  (0 + 0x890)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_3_REG                  (0 + 0x8D0)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_4_REG                  (0 + 0x910)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_5_REG                  (0 + 0x950)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_6_REG                  (0 + 0x990)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_7_REG                  (0 + 0x9D0)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_8_REG                  (0 + 0xA10)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_9_REG                  (0 + 0xA50)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_10_REG                 (0 + 0xA90)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CNT0_11_REG                 (0 + 0xAD0)       /* 通道X的传输长度配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_0_REG              (0 + 0x814)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_1_REG              (0 + 0x854)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_2_REG              (0 + 0x894)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_3_REG              (0 + 0x8D4)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_4_REG              (0 + 0x914)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_5_REG              (0 + 0x954)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_6_REG              (0 + 0x994)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_7_REG              (0 + 0x9D4)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_8_REG              (0 + 0xA14)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_9_REG              (0 + 0xA54)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_10_REG             (0 + 0xA94)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_SRC_ADDR_11_REG             (0 + 0xAD4)       /* 通道X的源地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_0_REG              (0 + 0x818)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_1_REG              (0 + 0x858)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_2_REG              (0 + 0x898)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_3_REG              (0 + 0x8D8)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_4_REG              (0 + 0x918)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_5_REG              (0 + 0x958)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_6_REG              (0 + 0x998)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_7_REG              (0 + 0x9D8)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_8_REG              (0 + 0xA18)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_9_REG              (0 + 0xA58)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_10_REG             (0 + 0xA98)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_DES_ADDR_11_REG             (0 + 0xAD8)       /* 通道X的目的地址寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_0_REG                (0 + 0x81C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_1_REG                (0 + 0x85C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_2_REG                (0 + 0x89C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_3_REG                (0 + 0x8DC)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_4_REG                (0 + 0x91C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_5_REG                (0 + 0x95C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_6_REG                (0 + 0x99C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_7_REG                (0 + 0x9DC)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_8_REG                (0 + 0xA1C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_9_REG                (0 + 0xA5C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_10_REG               (0 + 0xA9C)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_CONFIG_11_REG               (0 + 0xADC)       /* 通道X的配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_0_REG              (0 + 0x820)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_1_REG              (0 + 0x860)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_2_REG              (0 + 0x8A0)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_3_REG              (0 + 0x8E0)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_4_REG              (0 + 0x920)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_5_REG              (0 + 0x960)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_6_REG              (0 + 0x9A0)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_7_REG              (0 + 0x9E0)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_8_REG              (0 + 0xA20)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_9_REG              (0 + 0xA60)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_10_REG             (0 + 0xAA0)       /* 通道X的AXI特殊操作配置寄存器。 */
#define HI3650_ASP_EDMAC_CX_AXI_CONF_11_REG             (0 + 0xAE0)       /* 通道X的AXI特殊操作配置寄存器。 */
