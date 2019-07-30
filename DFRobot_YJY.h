#ifndef DFRobot_YJY_H
#define DFRobot_YJY_H

#include <Arduino.h>

class DFRobot_YJY{
    //外部可以使用
    public:
        // 1,写一个构造函数,用于实例化对象
        DFRobot_YJY();
        // 2,写一个析构函数,用于释放内存
        ~DFRobot_YJY();
        // 3, 声明一个设置姓名的函数
        int setting_name(char *name);
        // 4, 声明一个设置年龄的函数
        int setting_age(uint8_t age);
        // 5, 声明重加载
        int setting_age(String age);
        // 6, 声明两个函数得到参数
        String get_name(void);
        int get_age(void);
    //只有内部能进行使用
    private:
        //声明一个变量用于接收正确的返回值
        String end_name;
        int end_age;
};

#endif