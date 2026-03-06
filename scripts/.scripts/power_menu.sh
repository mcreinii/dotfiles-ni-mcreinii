#!/usr/bin/bash

# Options
shutdown="  Shutdown"
reboot="  Reboot"
lock="  Lock"
logout="  Logout"
suspend="󰤄  Suspend"

chosen=$(printf "%s\n%s\n%s\n%s\n%s" \
    "$logout" \
    "$lock" \
    "$shutdown" \
    "$reboot" \
    "$suspend" \
    | rofi -dmenu -theme $HOME/.config/rofi/power_menu.rasi)

case "$chosen" in
    "$shutdown")
        systemctl poweroff
        ;;
    "$reboot")
        systemctl reboot
        ;;
    "$lock")
        # change this to your locker
        i3lock
        ;;
    "$logout")
        i3-msg exit
        ;;
    "$suspend")
        systemctl suspend
        ;;
esac
