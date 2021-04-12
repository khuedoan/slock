# slock - simple screen locker

simple screen locker utility for X. 

![slock](https://i.imgur.com/2R315sM.gif)

## Requirements

In order to build slock you need the Xlib header files.

## Installation

Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

```sh
make clean install
```

## Running slock

Simply invoke the 'slock' command. To get out of it, enter your password.

## Blur effect

This fork leverages picom's new kawase blur method instead of taking a screenshot, blur it using ImageMagick without hardware acceleration and then set it as the lock screen wallpaper.
The end result is much higher performance and much lower latency.

Currently, you will need to enable the experimental backend in picom using `picom --experimental-backends`, you can check out my picom config [here](https://github.com/khuedoan/dotfiles/blob/master/.config/picom/picom.conf#L29).
