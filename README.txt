1、登录https://github.com并且注册帐号

2、如果你使用的是windows的话，可以下载“Git-1.8.1.2-preview20130201.exe”（也不一定是这个版本）当然，如果你使用的是github提供给你的for windows的工具，那么请自己研究。（那个东西具体如何并不清楚，但是Git-1.8.1.2-preview20130201.exe会让你在linux使用git也会很顺手）。

3、运行Git Bash(就是你刚才安装的东西，推荐除了路径之外的，都按照默认的设置)

4、在出现的命令行界面中，基本上的命令都是linux的命令：下面列出常用的命令
         ①pwd                查看当前目录
         ②ls                 列出当前目录下所有除了隐藏属性外的文件和文件夹（想要列出隐藏属性的文件，请在命令后加 -a）
         ③cd                 切换目录
         ④echo $HOME$        列出HOME所在目录
         ⑤
         ⑥
         ⑦

5、进入工程目录（简单的方法是在windows下，直接在工程的文件夹上鼠标右键，点击“Git Bash Here”）

6、在你的工程根目录下（不是工程目录的根目录，只是工程的最顶层），在git bash中使用命令 git init (如果工程下，多出了一个隐藏的.git文件夹，那么说明init成功)

7、执行命令
    $ ssh-keygen -t rsa -C "your_email@youremail.com"
    引号中，填写你自己的github的账户的email

8、

