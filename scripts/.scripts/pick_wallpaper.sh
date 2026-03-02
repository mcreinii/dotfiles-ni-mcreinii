#!/usr/bin/bash

WALLDIR="$HOME/Wallpapers/"

chosen=$(find "$WALLDIR" -type f \( -iname "*.png" -o -iname "*.jpg" \) \
    | while read -r img; do
        echo -en " \x00icon\x1f$img\x1finfo\x1f$img\n"
      done | rofi -dmenu -i -show-icons -format 'i' -theme $HOME/.config/rofi/wallpaper_picker.rasi)

if [ -n "$chosen" ]; then
    selected=$(find "$WALLDIR" -type f \( -iname "*.png" -o -iname "*.jpg" \) | sed -n "$((chosen+1))p")
    echo "$selected" > "$HOME/.wall_cache"
    $HOME/.scripts/set_wallpaper.sh
fi
