# This file is part of CliFM

# Prompts for CliFM

# Do not edit this file directly: use rather the 'prompt' command 

# The regular prompt (just as the warning one) is built using command
# substitution ($(cmd)), string literals and/or one or more of the
# following escape sequences:

# The prompt line is build using command substitution ($(cmd)), string
# literals and/or the following escape sequences:
#
# \e: Escape character
# \u: The username
# \H: The full hostname
# \h: The hostname, up to the first dot (.)
# \s: The name of the shell (everything after the last slash) currently
#    used by CliFM
# \S: Current workspace number
# \l: Print an L if running in light mode
# \P: The current profile name
# \n: A newline character
# \r: A carriage return
# \a: A bell character
# \d: The date, in abbreviated form (ex: Tue May 26)
# \t: The time, in 24-hour HH:MM:SS format
# \T: The time, in 12-hour HH:MM:SS format
# \@: The time, in 12-hour am/pm format
# \A: The time, in 24-hour HH:MM format
# \w: The full current working directory, with $HOME abbreviated with a
#     tilde
# \W: The basename of $PWD, with $HOME abbreviated with a tilde
# \p: A mix of the two above, it abbreviates the current working directory
#     only if longer than PathMax (a value defined in the configuration
#     file).
# \z: Exit code of the last executed command (printed in green in case of
#     success and in bold red in case of error)
# \$: #, if the effective user ID is 0 (root), and $ otherwise
# \nnn: The character whose ASCII code is the octal value nnn
# \\: A literal backslash
# \[: Begin a sequence of non-printing characters. This is mostly used to
#     add color to the prompt line (using full ANSI escape sequences)
# \]: End a sequence of non-printing characters
#
# The following files statistics escape sequences are available as well:
#
# \D: Amount of sub-directories in the current directory
# \R: Amount of regular files in the current directory
# \X: Amount of executable files in the current directory
# \.: Amount of hidden files in the current directory
# \U: Amount of SUID files in the current directory
# \G: Amount of SGID files in the current directory
# \F: Amount of FIFO/pipe files in the current directory
# \K: Amount of socket files in the current directory
# \B: Amount of block device files in the current directory
# \C: Amount of character device files in the current directory
# \x: Amount of files with capabilities in the current directory
# \L: Amount of symbolic links in the current directory
# \o: Amount of broken symbolic links in the current directory
# \M: Amount of multi-link files in the current directory
# \E: Amount of files with extended attributes in the current directory
# \O: Amount of other-writable files in the current directory
# \*: Amount of files with the sticky bit set in the current directory
# \?: Amount of files of unknown file type in the current directory
# \!: Amount of unstatable files in the current directory

# Unicode characters could be inserted by directly pasting the
# corresponding char, or by inserting its hex code
# ('echo -ne "paste_your_char" | hexdump -C')

# To permanetly set any of the below prompts edit your color scheme file
# (via the 'cs edit' command) and set Prompt to either the prompt code
# or the prompt name you want (e.g. Prompt="classic")

# If using a non-default prompt, you might want to set 'PromptStyle' in the
# configuration file to 'custom' to prevent the automatic insertion of
# workspace number, last exit code, stealth mode, trash, and selected files
# indicators, etc.
# This information however is available as environment variables. Consult
# the manpage and/or the Wiki for more information

[default]
RegularPrompt="\[\e[0m\][\[\e[0;36m\]\S\[\e[0m\]]\l \A \u:\H \[\e[0;36m\]\w\n\[\e[0m\]<\z\[\e[0m\]> \[\e[0;34m\]\$ \[\e[0m\]"
WarningPrompt="\[\e[00;02;31m\](!) > "

[default-colorless]
RegularPrompt="\[\e[0m\][\S]\l \A \u:\H \w\n<\z\[\e[0m\]> \$ "
WarningPrompt="(!) > "

[default-box-drawing]
RegularPrompt="\[\e[0m\]\[\e[0;36m\]\[\e(0\]lq\[\e(B\]\[\e[0m\][\[\e[0;36m\]\S\[\e[0m\]]\l \A \u:\H \[\e[0;36m\]\w\n\[\e[0;36m\]\[\e(0\]mq\[\e(B\]\[\e[0m\]<\z\[\e[0m\]> \[\e[0;34m\]\$ \[\e[0m\]"
WarningPrompt="\[\e[0;36m\]\[\e(0\]mq\[\e(B\]\[\e[0m\]<\z\[\e[0m\]> \[\e[1;31m\]\! \[\e[00;02;31m\]"

[classic]
RegularPrompt="\[\e[1;32m\][\u@\H] \[\e[1;34m\]\w \[\e[0m\]\$ "
WarningPrompt="\[\e[1;32m\][\u@\H] \[\e[1;34m\]\w \[\e[1;31m\]! \[\e[00;02;31m\]"

[security-scanner]
RegularPrompt="\[\e[0m\][\[\e[0;36m\]\S\[\e[0m\]]\l \[\e[0m\]\[\e[1;31m\]\U\[\e[0m\]:\[\e[1;33m\]\G\[\e[0m\]:\[\e[1;32m\]\O\[\e[0m\]:\[\e[1;34m\]\X\[\e[0m\] \A \[\e[0;36m\]\w\n\[\e[0m\]<\z\[\e[0m\]> \[\e[0;34m\]\$ \[\e[0m\]"
WarningPrompt="\[\e[00;02;31m\](!) > "

[curves]
RegularPrompt="\[\e[01;32m\]╭─\[\e[0m\][\S]\[\e[01;32m\]─\[\e[0m\](\u:\H)\[\e[01;32m\]─\[\e[0m\][\[\e[00;36m\]\w\[\e[0m\]]\n\[\e[01;32m\]╰─\[\e[1;0m\]<\z\[\e[0m\]> \[\e[01;34m\]λ\[\e[0m\] "
WarningPrompt="\[\e[01;32m\]╰─\[\e[1;0m\]<\z\[\e[0m\]> \[\e[01;31m\]\x\[\e[00;02;31m\] "

[firestarter]
RegularPrompt="\[\e[01;38;5;124m\]╭─\[\e[00;38;5;124m\]\[\e[00;37;48;5;124m\]\A \[\e[00;38;5;124;43m\]\[\e[00;30;43m\] \u:\H \[\e[00;33;48;5;124m\]\[\e[00;37;48;5;124m\] \w \[\e[00;38;5;124m\]\[\e[0m\]\n\[\e[01;38;5;124m\]╰─ \[\e[0m\] "
WarningPrompt="\[\e[01;38;5;124m\]╰──\[\e[0;38;5;124m\] \[\e[00;02;31m\]"

[cold-winter]
RegularPrompt="\[\e[00;37;100m\] \A \[\e[00;90;46m\]  \[\e[0;30;46m\]\u:\H \[\e[0;36;100m\]  \[\e[00;37;100m\]\w \[\e[00;90;40m\] \n \[\e[1;90m\]\[\e[0m\] "
WarningPrompt=" \[\e[0;36m\] \[\e[00;02;31m\]"

[spot]
RegularPrompt="\[\e[00;38;5;0;48;5;178m\] \A \u:\H \w \[\e[00;38;5;178;48;5;0m\]\[\e[0;40m\]\n\[\e[0;38;5;254;48;5;53m\] \$ \[\e[0;38;5;53;48;5;0m\] \[\e[0m\] "
WarningPrompt="\n\[\e[0;37;48;5;124m\] \x \[\e[0;38;5;124;48;5;0m\] \[\e[00;02;31m\] "

[artic-particles]
RegularPrompt="\[\e[00;37;48;5;18m\] \A \[\e[00;38;5;18;47m\]  \u:\H \[\e[00;37;48;5;18m\] \w \[\e[00;38;5;18;40m\] \n\[\e[00;37;48;5;18m\] \$ \[\e[00;38;5;18;40m\] "
WarningPrompt="\[\e[00;02;31;47m\] \$ \[\e[00;37;0m\] \[\e[00;02;31m\]"

[green-beret]
RegularPrompt=" ╭─\[\e[0;38;5;239;48;5;0m\]\[\e[0;38;5;15;48;5;239m\]  \A \[\e[0;38;5;239;48;5;70m\]\[\e[0;38;5;0;48;5;70m\] \w \[\e[0;38;5;70;48;5;0m\]\n \[\e[0;40m\]╰──\[\e[0;38;5;70;48;5;0m\]▸\[\e[0;40m\] "
WarningPrompt="\[\e[0;40m\] ╰──\[\e[0;38;5;9;48;5;0m\]▸\[\e[00;02;31m\] "
