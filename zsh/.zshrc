# zmodload zsh/zprof
export GALLIUM_DRIVER=virpipe
export MESA_GL_VERSION_OVERRIDE=4.0

# Lines configured by zsh-newuser-install
HISTFILE=~/.histfile
HISTSIZE=1000
SAVEHIST=1000
bindkey -v
# End of lines configured by zsh-newuser-install
# The following lines were added by compinstall
zstyle :compinstall filename '/home/mcreinii/.zshrc'

autoload -Uz compinit
compinit
# End of lines added by compinstall

# Created by `pipx` on 2026-03-01 09:34:46
export PATH="$PATH:/home/mcreinii/.local/bin"

eval "$(starship init zsh)"
eval "$(zoxide init zsh)"
# zprof
