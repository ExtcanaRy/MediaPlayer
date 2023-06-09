# MediaPlayer

[![wakatime](https://wakatime.com/badge/user/2838d0e1-1416-4f45-bc46-cbda8f4d9e75/project/193328a5-c16a-4ad4-9ab2-f18b70349042.svg)](https://wakatime.com/badge/user/2838d0e1-1416-4f45-bc46-cbda8f4d9e75/project/193328a5-c16a-4ad4-9ab2-f18b70349042)

[![CodeFactor](https://www.codefactor.io/repository/github/extcanary/mediaplayer/badge)](https://www.codefactor.io/repository/github/extcanary/mediaplayer)

English | [简体中文](README_ZH.md)

## Introduction
This plugin is used to play NBS music and map videos in BDS server.
This project uses the [LittleHooker](https://github.com/ExtcanaRy/LittleHooker) framework for HOOK.

## Use
### NBS music playback
NBS music files should be placed in the ``plugins\MediaPlayer\nbs`` folder

Use ``/mpm`` as the main command in the game
The subcommands are ``list``, ``play`` and ``stop``.

| Subcommands | Parameters                            | Examples      | Explanation                           |
| ----------- | ------------------------------------- | ------------- | ------------------------------------- |
| list        | none                                  | /mpm list     | Get song index                        |
| play        | Song index, Optional: Number of loops | /mpm play 1 3 | Play song (index 1, loop three times) |
| stop        | none                                  | /mpm stop     | stop playing                          |

Note: Before playing music, please use ``/mpm list`` to get the music list first.
You can also use the ``/mpm`` command inside the game to see how to use it
If there is a video with the same name as the music in the ``plugins\MediaPlayer\video`` folder, then it will be played together (if the player is holding the used map)
For example, if the following files and folders exist, then the plugin will try to play both music and video:
``plugins\MediaPlayer\nbs\test.nbs``
``plugins\MediaPlayer\video\test``

#### Recommended NBS music resources
It's not easy to make original nbs music ~ come and support them!

[Original nbs music collection](https://www.minebbs.com/resources/nbs.4773/)

[nbs music "water"](https://www.minebbs.com/resources/nbs-water.4365/)

[nbs music collection](https://github.com/nickg2/NBSsongs)

### Video playback
Please place the video folder in the ``plugins\MediaPlayer\video`` folder

Use ``/mpv`` as the main command in the game
The subcommands are ``list``, ``play`` and ``stop``.

| Subcommands | Parameters                             | Examples      | Explanation                            |
| ----------- | -------------------------------------- | ------------- | -------------------------------------- |
| list        | none                                   | /mpv list     | Get video index                        |
| play        | Video index, Optional: Number of loops | /mpv play 1 3 | Play video (index 1, loop three times) |
| stop        | none                                   | /mpv stop     | stop playing                           |

Note: Please use ``/mpv list`` to get the video list before playing the video. And must be holding the used map
You can also use the ``/mpv`` command in-game to see how to use it

#### Generate playable video files
Overview:
We use ``ffmpeg`` to convert the video to 128x128 resolution at 20FPS.
Each frame in the video is then extracted as a single image, which is then played by the plugin.

First, download ``ffmpeg`` from [here](https://www.gyan.dev/ffmpeg/builds/ffmpeg-git-full.7z)
Extract it and put ``ffmpeg.exe`` from the ``bin`` folder into the ``plugins\MediaPlayer\video`` folder under the server
Rename the video you need to generate as ``input.mp4`` and put it into the ``plugins\MediaPlayer\video`` folder on the server side
Open ``convert.bat`` in the ``plugins\MediaPlayer\video`` folder for conversion.

If the conversion is successful, a folder named ``output`` should be created, and you can rename it to the same name as the music if there is any music that matches it. The plugin will automatically play the video while the music is playing.
Please delete both ``input.mp4`` and ``output.mp4`` files for the next conversion.

## Acknowledgements

- [yqs112358](https://github.com/yqs112358) providing technical support at send packet level
- [lgc2333](https://github.com/lgc2333) participated in the development of [nbsparser](https://github.com/ExtcanaRy/nbsparser) and provided basic technical support.

Without their support, this project would not have been possible

## License

| Project                                                      | License                                                                   |
| ------------------------------------------------------------ | ------------------------------------------------------------------------- |
| [LittleHooker](https://github.com/ExtcanaRy/LittleHooker) | GPL-3.0                                                                   |
| [nbsparser](https://github.com/ExtcanaRy/nbsparser)       | GPL-3.0                                                                   |
| [dirent](https://github.com/tronkko/dirent)                  | MIT                                                                       |
| [minhook](https://github.com/TsudaKageyu/minhook)            | [license](https://github.com/TsudaKageyu/minhook/blob/master/LICENSE.txt) |
| [uthash](https://github.com/troydhanson/uthash)              | [license](https://github.com/troydhanson/uthash/blob/master/LICENSE)      |
| [microsoft-pdb](https://github.com/microsoft/microsoft-pdb)  | [license](https://github.com/microsoft/microsoft-pdb/blob/master/LICENSE) |
| [Horion](https://github.com/horionclient/Horion)             | [license](https://github.com/horionclient/Horion/blob/master/LICENSE)     |
| [libspng](https://github.com/randy408/libspng/)              | BSD-2-Clause                                                              |
| [miniz](https://github.com/richgel999/miniz)                 | MIT                                                                       |
