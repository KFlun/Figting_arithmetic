# Figting_luogu
洛谷刷关  
# 津津是否开心？？
是一个寻找最大值的问题。___（写法有待改进，如：用对象来写）___
### 题目链接：
https://www.luogu.org/problemnew/show/P1085
### 感悟
思考的完整性很重要，一个优秀的程序员需要想到各种可能出现的情况，并对之进行预处理。  
在津津是否开心这段代码中，我们需要判断的情况比较简单：每天的学校和妈妈布置的学习时间不能超过10h，每天的总时间不能超过24h。相应的，我们需要对数据的输入做出限制，以保证程序运行的正常。
********************************************************
# JinJin_saving
计算津津开支和收入的关系。  
### 题目链接：
https://www.luogu.org/problemnew/show/P1089
### 感悟
主要是关于暂存数据的思维，还有就是判断结点。
*********************************************************
# Super_Marie
### 题目链接：
https://www.luogu.org/problemnew/show/P1000
*********************************************************
# buy_Pencil
### 题目链接：  
https://www.luogu.org/problemnew/show/P1909
### 题目改进：
不同铅笔组合买，寻找价格最低的方案。 *（还没写）*
### 别人的算法：  
貌似有个什么用倍增的思想进行优化。
**********************************************************
# three_Shot
### 题目链接
https://www.luogu.org/problemnew/show/P1008
### 感悟
1、对一个集合中的元素是否符合标准，可以用 *计数器* 的思想。
2、要满足一个条件不一定要用 *匹配* 的方式，也可以用 *创建* 的方式。
***********************************************************
# hank_SSA
### 题目
![image](https://github.com/KnifeofLondon/Figting_arithmetic/blob/master/hack_SSA.png)  
### 感悟
1、暴力是可以出奇迹，但是效率太低。数学要学好！
***********************************************************
# 二进制反转
### 题目
![image](https://github.com/KnifeofLondon/Figting_arithmetic/blob/master/%E4%BA%8C%E8%BF%9B%E5%88%B6%E5%8F%8D%E8%BD%AC.png)
### 感悟
1、对较大的数据进行处理的时候，有三种方式：  
（1）定义为long long int型  
（2）求模运算  
（3）用数组进行保存
***未完结待补充***
************************************************************
# 字母矩阵
### 题目
![image](https://github.com/KnifeofLondon/Figting_arithmetic/blob/master/%E5%AD%97%E6%AF%8D%E7%9F%A9%E9%98%B5.png)
### 感悟
*************************************************************
# 果矩拼盘
### 题目
![image](https://github.com/KnifeofLondon/Figting_arithmetic/blob/master/%E6%9E%9C%E7%9F%A9%E6%8B%BC%E7%9B%98.png)
### 感悟
*************************************************************
# 级数求和
### 题目链接
https://www.luogu.org/problemnew/show/P1035
### 感悟
1、用好循环，运算时注意变量类型（精度损失），注意变量类型的有效位数。
*************************************************************
# 蒙特卡洛法
### 题目
![image](https://github.com/KnifeofLondon/Figting_arithmetic/blob/master/%E8%92%99%E7%89%B9%E5%8D%A1%E6%B4%9B%E6%B3%951.png)
![image](https://github.com/KnifeofLondon/Figting_arithmetic/blob/master/%E8%92%99%E7%89%B9%E5%8D%A1%E6%B4%9B%E6%B3%952.png)
### 感悟
*************************************************************
# 小玉在游泳
### 题目链接
https://www.luogu.org/problemnew/show/P1423
### 感悟
无
*************************************************************
# 小鱼的航程（改进版）
### 题目链接
https://www.luogu.org/problemnew/show/P1424
### 感悟
```
1、//erro   day = (day++) % 7; 
2、//right  day = (day+1) % 7;  
```
最好不要用 *1* 的写法，在VS中可以通过编译，但是是不规范的语法。
************************************************************
# 计数问题
### 题目链接
https://www.luogu.org/problemnew/show/P1980
### 感悟
无
************************************************************
# 淘淘摘苹果
### 题目链接
https://www.luogu.org/problemnew/show/P1046
### 感悟
无
*************************************************************
# 校门外的树
### 题目链接
https://www.luogu.org/problemnew/show/P1047
### 感悟
仔细读题…… **注意考虑边界值** 。
*************************************************************
# 小鱼的数字游戏
### 题目链接
https://www.luogu.org/problemnew/show/P1427
### 感悟
用for循环进行连续cin的时候，无论是在一行中输入还是每一行回车后再输入，不影响对循环退出条件的判断。
***************************************************************
# 小鱼比可爱
### 题目链接
https://www.luogu.org/problemnew/show/P1428
### 感悟
无
***************************************************************
# 珠心算测验
### 题目链接
https://www.luogu.org/problemnew/show/P2141
### 感悟
类似于约瑟夫环,以下为代码注释：
```
int judgement(int size, int arry[])
{
	int *arry_1 = new int[size];
	for (int n = 0; n < size; n++)
		arry_1[n] = arry[n];            //建立一个与arry的值对应相同的数组
	int count = 0;                          //目的：使得第29行的操作不会影响到原数组进行循环判断
	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
		{
			int num = arry[i] + arry[j];
			for (int k = 0; k < size; k++)
			{
				if (arry_1[k] != 0 && num == arry_1[k] && arry[i] != num && arry[j] != num)
				{
					arry_1[k] = 0;    //当某数字出现一次与另外两数的和相等时，该数不再进行下一次判断，见if语句中的（arry_1[k] != 0）
					count++;
				}
			}
				
		}
	return count;
}
```
# 统计天数
### 题目链接
https://www.luogu.org/problemnew/show/P1567  
### 感悟
（无）
# ISBN号码
### 题目链接
https://www.luogu.org/problemnew/show/P1055  
### 感悟
1、字符的计算都得用到ASCLL码表中所对应的编号。  
2、字符串之间的比较实际上是对应ASCLL表对应编号进行比较。
