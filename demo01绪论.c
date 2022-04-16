基本概念：
    数据是客观事实的符号，表示指所有能输入到计算机中并被计算机程序处理的符号的总称。
    数据元素：数据元素是数据的基本单位。一个学生记录。
    数据项：是组成数据元素、有独立含义、不可分割的最小单位。学生基本信息表。
    数据对象:是相互之间存在一种或多种特定关系的数据元素的集合。换句话说,数据结构是带结构的数据元素的集合。
             结构:就是数据元素之间存在的关系。
    逻辑结构:从逻辑关系上描述数据,它与数据的存储无关,是独立于计算机的。因此数据的逻辑结构可以看做从具体问题抽象
             出来的数学模型
    存储结构:是数据对象在计算机中的存储表示,也成为物理结构
    抽象数据类型:是由用户定义的,表示应用问题的数学模型,以及定义在这个模型上的一组操作的总称。
                具体包括三部分:数据对象,数据对象上关系的集合和对数据对象的基本操作的集合。
    
1. 数据结构
        逻辑结构
            1.1 集合结构 :数据元素属于同一集合的关系外,别无其他关系
            1.2 线性结构 :一对一的关系
            1.3 树结构  :一对多的关系
            1.4 图结构或者网状结构:多对多关系
        也可以分为
            1.1 线性结构:线性表、栈和队列、字符串
            1.2 非线性结构:集合结构、树结构、图结构
        物理结构和存储结构
            顺序存储结构和链式存储结构
2. 算法
        特性:有穷性、确定性、正确性、输入、输出
        评价标准:正确性、健壮性、可读性、高效性
        效率度量:时间复杂度、空间复杂度