import pandas as pd 
import numpy as np 
 

df_1 = pd.read_csv('data.csv')

print("First 10 rows of the DataFrame:")
df_1.head(10)
print(df_1.head(10))
print("Last 10 rows of the DataFrame:")
df_1.tail(10)
print(df_1.tail(10))
