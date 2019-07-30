#include <DFRobot_YJY.h>
#include <string.h>
//构造函数 
DFRobot_YJY::DFRobot_YJY(){ 
    //串口打印
    Serial.println("hello Constructor");
}
//析构函数
DFRobot_YJY::~DFRobot_YJY(){ 
    Serial.println("hello Deconstruction");
}
//定义设置姓名函数
int DFRobot_YJY::setting_name(char *name){
    //名字不能为空，如果名字为空就返回一个错误码
    if(name == NULL){
        return -1;
    }
    // 名字长度不能过长，如果过长就返回一个对应的错误码 
    if ((strlen(name) == 0) || (strlen(name) > 20)){
        return -2;
    }
    //最终变量接收经过验证的名字
    end_name = name; 
}
// 定义设置年龄函数
int DFRobot_YJY::setting_age(uint8_t age){
    //验证年龄是否正确
    if ((age<10)||(age>40)){
        return -1;
    }
    end_age = age;
}
// 定义重加载的函数
int DFRobot_YJY::setting_age(String age){
    //将字符串转换为整数 
    uint8_t tmp = age.toInt();
    if((tmp<10)||(tmp>40)){
        return -1;
    }
    end_age = tmp;
}
// 定义返回函数 
String DFRobot_YJY::get_name(void){
    return end_name;
}
int DFRobot_YJY::get_age(void){
    return end_age;
}