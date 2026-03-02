#!/usr/bin/bash
wal -i $(cat $HOME/.wall_cache) -o $HOME/.scripts/pywal.sh
pywalfox update
