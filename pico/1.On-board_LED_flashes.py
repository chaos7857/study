import machine
import utime

led_onboard = machine.Pin(25, machine.Pin.OUT)
# 方法1
'''
while True:
    led_onboard.value(1)
    utime.sleep(1)
    led_onboard.value(0)
    utime.sleep(1)
'''
while True:
    led_onboard.toggle()
    utime.sleep(1)
    