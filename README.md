BS TEST 20190509
===========
#要求
A:
于main.cxx:
修改 new player("YSH")
为 new player("杨思唅")
提交至远程仓库A分支，推送至中心仓库A分支

B:
于player.cxx:
修改 void player::addItem(item *i)
为 void player::addItem(shared_ptr<item> i)
提交至远程仓库B分支，推送至中心仓库B分支


C:
于player.h
修改 void addItem(item* i);
为 void addItem(shared_ptr<item> i);
提交至远程仓库C分支，推送至中心仓库C分支

这时C B 去吃饭。
请C B将工作提交至远程仓库，并推送至中心仓库。

----------------------------------------

A:
拉取并合并分支C
拉取并合并分支B
提交至远程仓库master分支，推送至中心仓库master分支

这时C 归来， A 有事出去。
请A将工作提交至远程仓库，并推送至中心仓库。

----------------------------------------

C:
于 player.h
修改 #include <item.h>
为 #include "item.h"
提交至远程仓库C分支，推送至中心仓库C分支

这时A 归来， C 有事出去。
请C将工作提交至远程仓库，并推送至中心仓库。

----------------------------------------

A:
于 player.h
拉取并合并分支C
修改 cout<<"ITEM INFO:"<<en
为 cout<<"ITEM INFO:"<<endl;

提交至远程仓库master分支，推送至中心仓库master分支


半身不遂半身不遂半身不遂半身不遂！！！！
