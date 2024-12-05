import pandas as pd 
import numpy as np 
 

df_1 = pd.read_csv('data.csv')

print("First 10 rows of the DataFrame:")
df_1.head(10)
print(print(df_1.head(10)))
print("Last 10 rows of the DataFrame:")
df_1.tail(10)
print(print(df_1.tail(10)))
df_1.reset_index(drop = True ,inplace = True)

print("\nDataFrame after resetting the index:")
print(df_1)
df_1.to_csv('output.csv' , index = True
)

df_1 = df_1.fillna(value = 50)

print("\nDataFrame after filling missing values with 0:")
print(df_1)
df_1.replace(to_replace=r'\b60000\b',value = 50000,inplace = True)
print("\nDataFrame after exchanging a value:")
print(df_1)
