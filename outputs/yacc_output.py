import pandas as pd 
import numpy as np 
 

df_1 = pd.read_csv('weather_data.csv')

df_filled = df_1.fillna(value = df_1.mean())

df_filled = df_1.fillna(method = 'ffill')

df_1.replace(to_replace=r'[0-9]',value = 'intro')




pd.concat([df1,df2],axis = 0)
pd.merge(df_1,df_2,how = 'inner',on = 'ok',suffixes = ['ok' , 'ok'])





df_filled.head(5)

df_filled.tail(5)



pd.concat([df1,df2],axis = 0)
suvedh(a,b)






foo(3,4)
