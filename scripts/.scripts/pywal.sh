#!/usr/bin/bash

# Merge xrdb
xrdb -merge $HOME/.cache/wal/colors.Xresources

# Set alacritty, I did it like this so it auto reloads.
# this triggers the live_config_reload
touch $HOME/.config/alacritty/alacritty.toml

# Starship
cp -f $HOME/.cache/wal/starship.toml $HOME/.config/starship.toml

cp -f $HOME/.cache/wal/dunstrc $HOME/.config/dunst/.
