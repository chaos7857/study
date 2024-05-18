import machine
import utime
import _thread

led_red = machine.Pin(15, machine.Pin.OUT)
led_amber = machine.Pin(14, machine.Pin.OUT)
led_green = machine.Pin(13, machine.Pin.OUT)
# 很多个可见，是输入的管脚需要考虑默认，那么这个是必须的吗
button = machine.Pin(16, machine.Pin.IN, machine.Pin.PULL_UP)
buzzer = machine.Pin(12, machine.Pin.OUT)

global button_pressed# 为什么用全局
button_pressed = False

def button_reader_thread():
    global button_pressed
    # 这里为什么再次声明？
    button = machine.Pin(16, machine.Pin.IN, machine.Pin.PULL_UP)
    while True:
        if button.value() == 0:
            button_pressed = True
            
# 启动一个新线程来运行按钮读取函数
_thread.start_new_thread(button_reader_thread, ())
# 神奇，1是关闭
buzzer.value(1) # 关闭蜂鸣器

while True:
    if button_pressed == True:
        led_red.value(1)
        for i in range(10):
            # 开启蜂鸣器0.2秒
            buzzer.value(0)
            utime.sleep(0.2)
            # 关闭蜂鸣器
            buzzer.value(1)
            utime.sleep(0.2)
        
        global button_pressed
        button_pressed = False
'''        
    led_red.value(1)
    utime.sleep(1)
    led_amber.value(1)
    utime.sleep(0.5)
    led_red.value(0)
    led_amber.value(0)
    led_green.value(1)
    utime.sleep(1)
    led_green.value(0)
    led_amber.value(1)
    utime.sleep(1)
    led_amber.value(0)
'''        
