# DFRobot_YJY

没有实例图片

## Table of Contents

* [Summary](#summary)
* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

## Summary

这个库具备设置名字，设置年龄，读取名字，读取年龄功能

## Installation

To use this library, first download the library file, paste it into the \Arduino\libraries directory, then open the examples folder and run the demo in the folder.

## Methods

```C++
  /**
   * @setting_name 设置名字
   * @return 如果返回-1，返回名字则成功
   */
  int setting_name(char * name);
  /**
   * @setting_age 设置年龄
   * @return 如果返回-1，-2年龄不合理，返回年龄则成功
   */
  int setting_age(uint8_t age);
  /**
   * get_name 返回名字
   */
  String get_name(void);

```

## Compatibility

MCU                | Work Well    | Work Wrong   | Untested    | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Arduino uno        |      √       |              |             | 


## History

- data 2019-7-30
- version V0.1








