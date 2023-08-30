# CO-study

2021 BUAA CO-study 大二上  

**文件夹：**

1. p0 logism计组基础数字电路 完成

2. p1 verilog基本语法 完成

3. p2 mips汇编 非常小的程序 完成

4. p3 logism MIPS单周期cpu 完成

5. p3p4_to_p2q4 完成了p3p4cpu上运行p2q4的代码的闭环测试 完成

6. p4 verilogMIPS单周期cpu 完成

7. p5  verilog经典MIPS五级流水线cpu，冒险处理结合了co2019的做法，还有一点bug 没过强测 有一些别人的参考和自动测试脚本等资料

5：
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
