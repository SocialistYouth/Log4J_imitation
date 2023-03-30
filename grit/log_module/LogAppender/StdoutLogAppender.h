/*
 * @Author: Cui XiaoJun
 * @Date: 2023-03-30 20:51:46
 * @LastEditTime: 2023-03-30 22:02:20
 * @email: cxj2856801855@gmail.com
 * @github: https://github.com/SocialistYouth/
 */
#ifndef __STDOUTLOGAPPENDER_H__
#define __STDOUTLOGAPPENDER_H__

#include "LogAppender.h"

namespace Grit {

class StdoutLogAppender : public LogAppender {
private:
    
public:
    StdoutLogAppender(/* args */);
    ~StdoutLogAppender();
    void log(LogEvent::ptr event) override;
};
} // namespace Grit


#endif //__STDOUTLOGAPPENDER_H__