# 创码未来-桌面编程赛-C语言基础测试

## 使用教程

将远程仓库 clone 到本地或者使用 webIDE 进行实验

1. 在网络浏览器中用自己的 github id 登录 github.com。
2. 请将本仓库 fork 到您的 github 账号下（点击仓库右上方绿色醒目的`use this template`按钮->`create a new repository`->输入仓库名字，例如`Code-Futrue-C-BeginnerTests`->右下方的醒目绿色按钮，进行创建），然后参照以下步骤完成环境配置和实验提交:
   - 本地环境：

     1.  **安装Linux的环境。** 对于windows的用户，推荐使用wsl2安装Ubuntu 22.04，也可以使用vmware等虚拟机进行安装。如果在这一步存在问题，请联系助教。
     2.  **创建ssh key，用于ssh方式克隆github代码。** 在linux环境下，使用`ssh-keygen -t rsa -b 4096 -C "你的邮箱"`命令，创建ssh key，下面的选项全部直接敲回车即可。 随后使用 `cat ~/.ssh/id_rsa.pub` 命令查看生成的公钥，并完整的复制下来。 在github仓库界面点击自己的头像，选择 settings 。进入到设置页面后，点击左侧的 SSH and GPG keys 选项。点击 New SSH key 选项，并将复制下来的内容粘贴上去，添加该 ssh key 的描述。随后点击 Add SSH key ，并一路点击确认即可。
     3.  **配置本地Linux环境。** 进入Linux的命令行界面，输入`gcc -v`，如果能显示出来版本号，则说明gcc已经安装成功。再输入`make -v`，如果能显示出来版本号，则说明make已经安装成功。
     4.  **clone实验仓库到本地。** 在前面生成的仓库中，同样点击醒目的 code 绿色按钮，选择local下的ssh选项，复制下面的链接。随后回到本地linux环境下，使用git clone 复制的链接的方式，将目标仓库clone到本地(`git clone 你复制的链接`)。随后，使用`ls`命令查看自己clone下来的文件夹，再使用`cd 文件夹名`命令进入到该文件夹下(例如`cd Code-Futrue-C-BeginnerTests`)。
     5.  **进行练习吧！** 使用vscode等编辑器远程连接WSL（例如：在Linux命令行环境下输入`code .`，如果出现提示，则跟着提示来即可；或者在本地VSCode选择连接到WSL等方式均可），进入clone下来的目录，（按`Ctrl + J`或点击右上角图标切换出面板）执行`make test-output`查看完成情况，进入exercises文件夹并依次完成对应的练习。对于单一练习的测试，可以使用`make test-one one=测试名称(不带后缀)`来完成，例如`make test-one one=01_helloWorld`。
     6.  **提交完成情况。** 当做完部分或所有练习之后，在仓库根目录（即有Makefile文件的那个目录，可以通过`ls`来查看当前目录下有什么文件）下执行 `git add .;` `git commit -m "update";` `git push` 命令，把更新提交到Github的CI进行自动评测。你可以在github仓库页面的actions页面，看到你的CI提交结果。

   - 在线环境：

     1. 如果使用在线环境，在本网页的中上部可以看到一个醒目的 `code` 绿色按钮，点击后，可以进一步看到 `codespace` 标签和醒目的 `create codesapce on main` 绿色按钮。请点击这个绿色按钮，就可以进入到在线的 buntu + vscode 环境中

     2. 再按照下面的环境安装提示在vscode的 console 中安装配置开发环境，各种拓展等。

     3. 然后就可以基于在线vscode进行测试 （执行命令 `make test-output` ），编辑代码的循环实验过程了。

3. 上述步骤有任何问题都可以找助教。

<br /><br /><br /><br />

本地测试

```
make test-output
```

会对所有题目进行测试。

<br /><br />

项目结构

```
.
├── exercises //所有习题都在此文件夹下
├── LICENSE
├── Makefile 
├── README.en.md
├── README.md
└── test //所有测例都在此文件夹下
```

<br /><br /><br />
贡献者（排名不分先后，仅按字母序排列）：程臻 李锦想 马康博 [张景尧](https://github.com/popcoin-522) 赵士杰<br />
特别感谢：徐堃元