/*
 * @Author: Cui XiaoJun
 * @Date: 2023-03-30 20:57:00
 * @LastEditTime: 2023-03-30 23:45:58
 * @email: cxj2856801855@gmail.com
 * @github: https://github.com/SocialistYouth/
 */
#ifndef __LOGEVENT_H__
#define __LOGEVENT_H__

#include <memory>
#include <sstream>
#include <string>

#include "../LogLevel/LogLevel.h"
#include "../Logger/logger.h"

namespace Grit {
class Logger;  // 前向声明
class LogEvent {
   private:
    const char* m_file;        // 文件名
    int32_t m_line;            // 行数
    uint32_t m_elapse;         // 程序启动开始到现在的毫秒数
    uint32_t m_threadId;       // 线程id
    uint32_t m_fiberId;        // 协程id
    uint64_t m_time;           // 时间
    std::string m_threadName;  // 线程名称
    std::stringstream m_ss;    //
    Logger::ptr m_logger;      // 日志器
    LogLevel::Level m_level;   // 日志级别
   public:
    typedef std::shared_ptr<LogEvent> ptr;
    LogEvent(const char* file, int32_t line, uint32_t elapse, uint32_t threadId,
             uint32_t fiberId, uint64_t time, std::string& threadName);
   const char* getFileName() const { return m_file; }
   const int32_t& getLine() const { return m_line; }
   const uint32_t& getElapse() const { return m_elapse; }
   const uint32_t& getThreadId() const { return m_threadId; }
   const uint64_t& getFiberId() const { return m_fiberId; }
   const uint64_t& getTime() const { return m_time; }
   const std::string& getThreadName() const { return m_threadName; }
   const Logger::ptr getLogger() const { return m_logger; }
   const LogLevel::Level getLevel() const { return m_level; }
};
}  // namespace Grit

#endif  //__LOGEVENT_H__