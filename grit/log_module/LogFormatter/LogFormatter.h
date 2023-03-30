/*
 * @Author: Cui XiaoJun
 * @Date: 2023-03-30 19:59:18
 * @LastEditTime: 2023-03-30 23:47:35
 * @email: cxj2856801855@gmail.com
 * @github: https://github.com/SocialistYouth/
 */
#ifndef __LOGFORMATTER_H__
#define __LOGFORMATTER_H__

#include <memory>
#include <ostream>

#include "../LogEvent/LogEvent.h"

namespace Grit {
class LogEvent;  // 前向声明
class LogFormatter {
   private:
   public:
    typedef std::shared_ptr<LogFormatter> ptr;
    LogFormatter(/* args */);
    ~LogFormatter();

   public:
    class FormatItem {  // 接口
       public:
        typedef std::shared_ptr<FormatItem> ptr;
        virtual ~FormatItem(){};
        virtual void format(std::ostream& os, LogEvent::ptr event) = 0;
    };
};

class DateTimeFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        // TODO
    }
};
/// @brief 换行
class TabFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << '\t';
    }
};
/// @brief 线程id
class ThreadIdFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << event->getThreadId();
    }
};
class ThreadNameFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << event->getThreadName();
    }
};
class FiberIdFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << event->getFiberId();
    }
};
class LevelFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << event->getLevel();
    }
};
class NameFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        // TODO
    }
};
class FileNameFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << event->getFileName();        
    }
};
class LineFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << event->getLine();
    }
};
class MessageFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        // TODO
    }
};
class NewLineFormatItem : public LogFormatter::FormatItem {
    void format(std::ostream& os, LogEvent::ptr event)override {
        os << std::endl;
    }
};
}  // namespace Grit

#endif  //__LOGFORMATTER_H__
