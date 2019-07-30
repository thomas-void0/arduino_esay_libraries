#include <DFRobot_YJY.h>
void setup(void){
    // 设置串口波特率
    Serial.begin(115200);
    //延迟执行，防止运行错误 
    delay(100);
    //新建实例
    DFRobot_YJY new_object;
    // 串口打印
    Serial.println("hello DFRobot......");
    //调用实例对象中的函数
    new_object.setting_age(22);
    new_object.setting_name("thomas");
    // 通过串口将姓名和年龄打印出来
    Serial.print("name is: ");
    Serial.println(new_object.get_name());
    Serial.print("age is: ");
    Serial.println(new_object.get_age());    
}

void loop(void){
    
}