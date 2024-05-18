import machine
import utime

sensor_ir = machine.Pin(28, machine.Pin.IN, machine.Pin.PULL_UP)
led = machine.Pin(15, machine.Pin.OUT)

def ir_handler(pin):
    print("Obstacle detected!")
    for i in range(5):
        led.toggle()
        utime.sleep_ms(100)
# 当引脚上的信号从高电平变为低电平时（即下降沿触发），调用指定的处理程序 ir_handler
sensor_ir.irq(trigger=machine.Pin.IRQ_FALLING, handler=ir_handler)

while True:
    pass# ???

