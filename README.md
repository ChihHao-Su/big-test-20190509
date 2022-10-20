*这是从前我社团中一个使用GIT的考试，所用的仓库。*

BS TEST 20190509
===========
#第一场


A:
于main.cxx:
修改 new player("YSH")
为 new player("杨思唅")
推送至远程仓库A分支，推送至中心仓库A分支

B:
于player.cxx:
修改 void player::addItem(item *i)
为 void player::addItem(shared_ptr<item> i)
推送至远程仓库B分支，推送至中心仓库B分支


C:
于player.h
修改 void addItem(item* i);
为 void addItem(shared_ptr<item> i);
推送至远程仓库C分支，推送至中心仓库C分支


----------------------------------------
（旁白）
这时C B 去吃饭。
C B已将工作提交至远程仓库，并推送至中心仓库。
现在A要获得C B的所有修改（在分支C B），在之上做编辑。

----------------------------------------
#第二场



A:
拉取并合并分支C到自己工作分支
拉取并合并分支B到自己工作分支
推送至远程仓库master分支，推送至中心仓库master分支


----------------------------------------
（旁白）
这时C 归来， A 有事出去。
然而C不在时，A已经将工作提交至远程仓库，并推送至中心仓库。
现在C要获得A所做的修改(在master分支上)

----------------------------------------
#第三场


C:
拉取并合并分支master到自己工作分支

于 item.cxx
修改 #include <item.h>
为 #include "item.h"
推送至远程仓库C分支，推送至中心仓库C分支

---------------------------------------
（旁白）
这时A B归来， C 有事出去。
然而A B不在时，C已将工作提交至远程仓库，并推送至中心仓库。
现在A B要获得C所做的修改(在C分支上)
----------------------------------------
#第四场


A:
拉取并合并分支C到自己分支
于 item.cxx8++++
修改 cout<<"ITEM INFO:"<<en
为 cout<<"ITEM INFO:"<<endl;

推送至远程仓库A分支，推送至中心仓库A分支。


B：
拉取并合并分支C到自己分支

于 player.cxx
修改 for(auto -o : itemList){
为 for(auto &o : itemList){
推送至远程仓库B分支，推送至中心仓库B分支。

---------------------------------------------
（旁白）
这时C 归来， A B有事出去。
然而C不在时，A B已将工作提交至远程仓库，并推送至中心仓库。
现在C要获得A B所做的修改。（在A B分支上）
----------------------------------------------
#第五场

C:
拉取并合并分支A到自己分支
拉取并合并分支B到自己分支

推送至远程仓库C分支，推送至中心仓库C分支。

