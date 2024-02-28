import logging
# 这行是固定的，记住咯
# logging.basicConfig(level=logging.DEBUG, format='%(asctime)s-%(levelname)s-%(message)s')
logging.basicConfig(filename='log.txt',level=logging.DEBUG, format='%(asctime)s-%(levelname)s-%(message)s')

logging.debug('start of pro')
def factorial(n):
    logging.debug('start (%s%%)' % (n))
    total = 1
    for i in range(n+1):
        total *= i
        logging.debug(str(total))
    logging.debug('end')
    return total

print(factorial(5))
logging.debug("end of end")
logging.disable(logging.CRITICAL)