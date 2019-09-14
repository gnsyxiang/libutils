/**
 * 
 * Release under GPLv2.
 * 
 * @file    utils.c
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    14/09 2019 23:50
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        14/09 2019      create the file
 * 
 *     last modified: 14/09 2019 23:50
 */
#include <stdio.h>

void DumpHexData(char *buf, size_t len)
{
    int i;
    printf("len: %d ---->> ", len);
    for (i = 0; i < len; i++) {
        printf("%02x ", (unsigned char )buf[i]);
    }
    printf("\n");
}
