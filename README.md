# 2bit-counter predictor
initial prediction value is 0(Not taken)
說明：
連續錯誤兩次才會更換prediction value，在程式中塞入計數器當計數器達到2時，就更換prediction value(0 to 1 or 1 to 0)，當預測值跟實際值相同時，則將計數器歸零。
輸入說明:  
可鍵入  
1 or T 代表taken  
0 or N 代表Not taken  

輸入值:  
101010  

執行結果:  

prediction:0,Actual State:1  
result1 : N  

prediction:0,Actual State:0
result2 : T

prediction:0,Actual State:1
result3 : N

prediction:0,Actual State:0
result4 : T

prediction:0,Actual State:1
result5 : N

prediction:0,Actual State:0
result6 : T
