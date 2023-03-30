/*
 * @Author: Cui XiaoJun
 * @Date: 2023-03-30 20:40:05
 * @LastEditTime: 2023-03-30 20:45:11
 * @email: cxj2856801855@gmail.com
 * @github: https://github.com/SocialistYouth/
 */
#ifndef __LOGLEVEL_H__
#define __LOGLEVEL_H__

namespace Grit
{
class LogLevel
{
public:
    enum Level {
        UNKNOW = 0, // 未知级别
        DEBUG = 1,  // DEBUG级别
        INFO = 2,   // INFO级别
        WARN = 3,   // WRAN级别
        ERROR = 4,  // ERROR级别
        FATAL = 5,  // FATAL级别
    };
};
} // namespace Grit


#endif //__LOGLEVEL_H__