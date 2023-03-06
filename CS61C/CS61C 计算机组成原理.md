# CS61C 计算机架构的伟大想法/Greate Idea in Computer Archetecture

## 0. 

早就想学一些国外的开放课程了，想在巩固自己知识体系的同时得到眼界的开阔。初步计划学习 CS61C、CS152/252A 等这一系列的伯克利课程，在体系结构上做出一些project。

CS61C 主要包括 C语言和汇编语言编程，高级程序到机器语言，计算机组成，Cache，性能，并行性，CPU设计等。基本上相当于计算机系统基础和计算机组成原理。版本上我采用的是**2021 fall** 的版本，之后可能会横跨几个版本来理解，这个问题不大。

- [B站视频课程1](https://www.bilibili.com/video/BV1Lu411X7u7?p=1&vd_source=4a83c831c5458c234bb7ce23c54c2b63)
- [B站视频课程2](https://www.bilibili.com/video/BV1P34y1h76n?p=27&vd_source=4a83c831c5458c234bb7ce23c54c2b63)
- [课程主页](https://inst.eecs.berkeley.edu/~cs61c/fa21/)，可以找到课件，视频是私享的，主页上看不到。

## 1. Introduction

### 1.1 课堂相关

讲了一些纪律..

- 参考书：

  - RISC-V 5th

  - the C programming language,2nd Edition 

    ANSI C

  - The Datacenter as a Computer,2nd Edition

### 1.2 课程概述

- 课程是有关硬件-软件接口的，了解硬件如何工作，软件如何使用硬件来工作，以及如何更好地利用硬件
- C语言最接近硬件，可与之相比的就是Rust了。课程会讲解C语言是如何引发安全漏洞和bug的。
- 这门课的处理器是基于RISC-V的，用RISC-V汇编语言在处理器指令集层面进行学习。硬件电路设计是基于Logisim的，上手比较快，不必学习硬件描述语言Verilog。
- 学习从晶体管到数字逻辑的电路，最后构建处理器、内存系统、I/O，再向上软件部分的汇编语言、编译器、操作系统、应用软件。这门课主要是这个体系结构的中间部分。
- CS61C引入了并行的概念。在软件方面可能会有跨多个核的并行请求，比如用Google搜索的时候，搜索会在不同处理器上的数据库的不同部分同时进行。处理器内部也是并行的线程。指令层面，在处理器内核中可以同时执行多条指令。数据层面，数据以向量和数组形式存在，处理器可以同时进行一堆数字的运算。硬件逻辑层，所有硬件单元是并行工作的。
- 五大思想：抽象、摩尔定律、局部性原理、并行和阿姆达尔定律、可靠性和冗余（这里用的是Dependability **via** Redundancy）



