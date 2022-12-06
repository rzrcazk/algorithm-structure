/**
某项任务需要在A、B、C、D、E、F这6个人中挑选人来完成，但挑选人受限于以下的条件：
(1) A和B两个人至少去一人；
(2) A和D不能同时去；
(3) A、E和F三人中要挑选两个人去；
(4) B和C同时去或者都不去；
(5) C和D两人中只能去一个；
(6) 如果D不去，那么E也不去。

试编程求出应该让哪几个人去完成这项任务。
*/

#include <stdio.h>

int main()
{
    int A, B, C, D, E, F;
    for(A=0; A<=1; A++)
        for(B=0; B<=1; B++)
            for(C=0; C<=1; C++)
                for(D=0; D<=1; D++)
                    for(E=0; E<=1; E++)
                        for(F=0; F<=1; F++)
                            if(A+B>=1 && A+D!=2 && A+E+F==2
                               && (B+C==0 || B+C==2)
                               && C+D==1 && (D+E==0 || D==1))
                            {
                                printf("A%s被选择去完成任务。\n",A?"":"未");
                                printf("B%s被选择去完成任务。\n",B?"":"未");
                                printf("C%s被选择去完成任务。\n",C?"":"未");
                                printf("D%s被选择去完成任务。\n",D?"":"未");
                                printf("E%s被选择去完成任务。\n",E?"":"未");
                                printf("F%s被选择去完成任务。\n",F?"":"未");
                               
                            }
   
    return 0;
}

//运行结果：

//A被选择去完成任务。
//B被选择去完成任务。
//C被选择去完成任务。
//D未被选择去完成任务。
//E未被选择去完成任务。
//F被选择去完成任务。
