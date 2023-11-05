import tushare as ts
pro = ts.pro_api()
df = pro.daily(trade_date='20231024')
print(df)