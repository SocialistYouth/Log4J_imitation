/*
 * @Author: Cui XiaoJun
 * @Date: 2023-03-30 19:59:45
 * @LastEditTime: 2023-03-30 22:01:03
 * @email: cxj2856801855@gmail.com
 * @github: https://github.com/SocialistYouth/
 */
#ifndef __LOGAPPENDER_H__
#define __LOGAPPENDER_H__

#include <memory>

#include "../LogFormatter/LogFormatter.h"
#include "../LogLevel/LogLevel.h"
#include "../LogEvent/LogEvent.h"

namespace Grit
{
class LogFormatter; // 前向声明
class LogEvent;     // 前向声明

class LogAppender
{
private:
    LogFormatter::ptr m_formatter; // appender日志格式器
    LogLevel::Level m_level;       // appender日志级别
public:
    typedef std::shared_ptr<LogAppender> ptr;
    virtual void log(LogEvent::ptr event) = 0;
    LogAppender() {}
    virtual ~LogAppender() {}
    void setFormatter(LogFormatter::ptr formatter) { m_formatter = formatter; }
    LogFormatter::ptr getFormatter() const { return m_formatter; }
    void setLevel(LogLevel::Level level) { m_level = level; }
    LogLevel::Level getLevel() const { return m_level; }
};
} // namespace Grit

#endif //__LOGAPPENDER_H__