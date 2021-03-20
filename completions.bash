#
# Bash completion definition for CliFM
#
# Author:
#   L. Abramovich <johndoe.arch@outlook.com>
#

_clifm ()
{
    COMPREPLY=()
    local IFS=$'\n'
    local cur=$2 prev=$3
    local -a opts
    opts=(
        -a
        --no-hidden
        -A
        --show-hidden
        -b
        --bookmarks-file
        -c
        --config-file
        -f
        --no-folders-first
        -F
        --folders-first
        -g
        --pager
        -G
        --no-pager
        -h
        --help
        -i
        --no-case-sensitive
        -I
        --case-sensitive
        -k
        --keybindings-file
        -l
        --no-long-view
        -L
        --long-view
        -m
        --dihist-map
        -o
        --no-list-on-the-fly
        -O
        --list-on-the-fly
        -p
        --path
        -P
        --profile
        -s
        --splash
        -S
        --stealth-mode
        -u
        --no-unicode
        -U
        --unicode
        -v
        --version
		-w
		--workspace
        -x
        --ext-cmds
        -y
        --light-mode
        -z
		--sort
        --cd-on-quit
		--color-scheme
        --disk-usage
        --enable-logs
        --expand-bookmarks
        --icons
		--icons-use-file-color
        --list-and-quit
        --max-dirhist
		--max-files
        --max-path
        --no-autojump
        --no-cd-auto
        --no-classify
        --no-clear-screen
		--no-colors
		--no-columns
        --no-files-counter
        --no-open-auto
        --no-tips
        --no-welcome-message
        --only-dirs
        --opener
        --restore-last-path
        --rl-vi-mode
        --share-selbox
        --sort-reverse
    )

    if [[ $prev == -b || $prev == -c || $prev == -k || $prev == -p ]]; then
        COMPREPLY=( $(compgen -f -d -- "$cur") )

    elif [[ $prev == -P ]]; then
        local profiles=$(basename -a $(ls -Ad ~/.config/clifm/*/))
        COMPREPLY=( $(compgen -W "$profiles" -- "$cur") )

    elif [[ $prev == --color-scheme ]]; then
        local schemes=$(basename -a $(ls -Ad ~/.config/clifm/colors/*) | cut -d"." -f1)
        COMPREPLY=( $(compgen -W "$schemes" -- "$cur") )

    elif [[ $prev == --classify ]]; then
        local args=$(echo -e "0\n1\n2")
        COMPREPLY=( $(compgen -W "$args" -- "$cur") )

    elif [[ $prev == -z || $prev == "--sort" ]]; then
        local args=$(echo -e "0\n1\n2\n3\n4\n5\n6\n7\n8\n9")
        COMPREPLY=( $(compgen -W "$args" -- "$cur") )

    elif [[ $prev == --opener ]]; then
	local apps=$(ls -AG $(echo $PATH | awk -F':' '{ for (i=1; i<NF; i++) print $i}') | grep -v "/\|^$")
        COMPREPLY=( $(compgen -W "$apps" -- "$cur") )

    elif [[ $cur == -* ]]; then
        COMPREPLY=( $(compgen -W "${opts[*]}" -- "$cur") )

    else
        COMPREPLY=( $(compgen -f -d -- "$cur") )

    fi
}

complete -o filenames -F _clifm clifm
