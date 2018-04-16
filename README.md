# The mini jsk_imu hardware firmware repository
This circuit can publish IMU data and 4 ADC channel data.


## Depending on
* rosserial_stm (https://github.com/tongtybj/rosserial)
* TrueSTUDIO
* STM32CubeMx

## How to use
```
// write firmware via TrueSTUDIO
cd jsk_imu_mini_msgs
catkin bt
roslaunch rosserial_stm rosserial.launch

hoge