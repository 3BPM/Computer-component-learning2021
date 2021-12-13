# CO-study
BUAA CO-study 大二上  
Mars自动测试方法是  
java -jar mars.jar a mc CompactDataAtZero dump .text HexText out.txt mips1.asm  
生成标准code.txt可放入p4文件夹 打开iSim进行测试  
```
@echo off
set/p a=
java -jar mars.jar me a dump .text HexText %a%.txt %a%.asm 2>nul
type %a%.txt
pause
```
生成标准结果  
(感谢马婧颖 (助教)【往届讨论区精华-Mars】Mars 命令行使用【18373686】) http://cscore.buaa.edu.cn/#/discussion_area/24/174/postsn   
iSim自动化方法比较复杂 贺梓源 20373934 (学生)http://cscore.buaa.edu.cn/#/discussion_area/284/194/posts    
