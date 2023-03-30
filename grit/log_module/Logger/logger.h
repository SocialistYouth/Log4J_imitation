/*
 * @Author: Cui XiaoJun
 * @Date: 2023-03-30 11:38:24
 * @LastEditTime: 2023-03-30 20:55:01
 * @email: cxj2856801855@gmail.com
 * @github: https://github.com/SocialistYouth/
 */
#ifndef __LOGGER_H__
#define __LOGGER_H__

#include <memory>
#include <list>

#include "../LogAppender/LogAppender.h"
#include "../LogLevel/LogLevel.h"

namespace Grit {
class LogAppender; // 前向声明
class LogLevel; // 前向声明
class Logger {
public:
    typedef std::shared_ptr<Logger> ptr;
    Logger();
private:
    std::list<LogAppender::ptr> m_appenders; // 日志输出器
    LogLevel::Level m_level; // 日志级别
};
}  // namespace Grit

#endif  //__LOGGER_H__