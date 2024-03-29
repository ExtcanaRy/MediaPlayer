# MediaPlayer

[![wakatime](https://wakatime.com/badge/user/2838d0e1-1416-4f45-bc46-cbda8f4d9e75/project/193328a5-c16a-4ad4-9ab2-f18b70349042.svg)](https://wakatime.com/badge/user/2838d0e1-1416-4f45-bc46-cbda8f4d9e75/project/193328a5-c16a-4ad4-9ab2-f18b70349042)

[![CodeFactor](https://www.codefactor.io/repository/github/extcanary/mediaplayer/badge)](https://www.codefactor.io/repository/github/extcanary/mediaplayer)

[English](README.md) | 简体中文


## 简介
本插件用于在BDS服务器播放NBS音乐和地图视频。
本项目使用了[LightBase](https://github.com/ExtcanaRy/LightBase)框架进行HOOK。

## 使用
### NBS 音乐播放
NBS音乐文件请放置到``plugins\MediaPlayer\nbs``文件夹中

#### 命令

``mpm``
- 主命令，执行后可获取帮助

``mpm list [name: string]``
- 列出所有的音乐并显示名称与索引。
- 若提供参数：搜索关键词 ``name``，则只显示搜索匹配成功的项目

``mpm play <index: number> [loop: number] [music bar type: number]``
- 播放指定索引 ``index`` 的音乐
- 若提供参数：循环次数 ``loop``，则循环播放音乐指定次数
- 若提供参数：音乐栏类型 ``music bar type``，则使用指定的类型，必须填入下表代码之一

| 代码 | 进度条类型               |
| ---| -----------------------|
| 0    | 不显示                   |
| 1    | bossbar                  |
| 2    | actionbar: JUKEBOX_POPUP |
| 3    | actionbar: POPUP         |
| 4    | actionbar: TIP           |

``mpm stop``
- 停止播放音乐，若同时播放视频，也会停止播放视频



注意：在播放音乐之前，请先使用``/mpm list``来获取音乐列表。
具体使用方法，也可以在游戏内使用``/mpm``命令查看
如果``plugins\MediaPlayer\video``文件夹下存在与音乐同名的视频，那么将会一同播放（如果玩家手持已使用的地图）
比如存在如下文件和文件夹，那么插件将会尝试同时播放音乐和视频：
``plugins\MediaPlayer\nbs\test.nbs``
``plugins\MediaPlayer\video\test``

#### 推荐NBS音乐资源
制作原创nbs音乐可不容易呢~来支持一下他们吧

[原创nbs音乐集合](https://www.minebbs.com/resources/nbs.4773/)

[nbs音乐《water》](https://www.minebbs.com/resources/nbs-water.4365/)

[nbs音乐集合](https://github.com/nickg2/NBSsongs)

### 视频播放
视频文件夹请放置到``plugins\MediaPlayer\video``文件夹中

#### 命令

``mpv``
- 主命令，执行后可获取帮助

``mpv list [name: string]``
- 列出所有的音乐并显示名称与索引。
- 若提供参数：搜索关键词 ``name``，则只显示搜索匹配成功的项目

``mpv play <index: number> [loop: number]``
- 播放指定索引 ``index`` 的音乐
- 若提供参数：循环次数 ``loop``，则循环播放视频指定次数

``mpv stop``
- 停止播放视频

注意：在播放视频之前，请先使用``/mpv list``来获取视频列表。且必须手持已使用的地图
具体使用方法，也可以在游戏内使用``/mpv``命令查看

#### 生成可播放的视频文件
概述：
我们使用``ffmpeg``将视频转换为128x128分辨率，20FPS。
然后将视频中的每一帧提取为单个图片，再由插件进行播放。

首先，在[此处](https://www.gyan.dev/ffmpeg/builds/ffmpeg-git-full.7z)下载``ffmpeg``
将其解压，并将``bin``文件夹中的``ffmpeg.exe``放入服务端下的``plugins\MediaPlayer\video``文件夹
将你需要生成的视频重命名为``input.mp4``，并且放入服务端下的``plugins\MediaPlayer\video``文件夹
在``plugins\MediaPlayer\video``文件夹中打开``convert.bat``进行转换。

如果转换成功，应该会产生一个名为``output``的文件夹，如果有与之匹配的音乐，你可以将其重命名为和音乐同名。插件会在播放音乐的同时自动播放视频。
请将``input.mp4``和``output.mp4``两个文件删除，以便于下一次转换。

## 致谢

- [yqs112358](https://github.com/yqs112358) 提供了在发包层面的技术支持
- [lgc2333](https://github.com/lgc2333) 参与了[nbsparser](https://github.com/ExtcanaRy/nbsparser)的开发，提供了基础技术支持

没有他们的支持，这个项目不可能实现

## 许可证

| 项目                                                        | 许可证                                                                   |
| ----------------------------------------------------------- | ------------------------------------------------------------------------ |
| [LightBase](https://github.com/ExtcanaRy/LightBase)   | GPL-3.0                                                                  |
| [nbsparser](https://github.com/ExtcanaRy/nbsparser)         | GPL-3.0                                                                  |
| [dirent](https://github.com/tronkko/dirent)                 | MIT                                                                      |
| [minhook](https://github.com/TsudaKageyu/minhook)           | [许可证](https://github.com/TsudaKageyu/minhook/blob/master/LICENSE.txt) |
| [uthash](https://github.com/troydhanson/uthash)             | [许可证](https://github.com/troydhanson/uthash/blob/master/LICENSE)      |
| [microsoft-pdb](https://github.com/microsoft/microsoft-pdb) | [许可证](https://github.com/microsoft/microsoft-pdb/blob/master/LICENSE) |
| [Horion](https://github.com/horionclient/Horion)            | [许可证](https://github.com/horionclient/Horion/blob/master/LICENSE)     |
| [libspng](https://github.com/randy408/libspng/)             | BSD-2-Clause                                                             |
| [miniz](https://github.com/richgel999/miniz)                | MIT                                                                      |
