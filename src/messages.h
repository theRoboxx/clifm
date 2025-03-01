/* messages.h - Usage and help messages for CliFM */

/*
 * This file is part of CliFM
 *
 * Copyright (C) 2016-2023, L. Abramovich <leo.clifm@outlook.com>
 * All rights reserved.

 * CliFM is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CliFM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
*/

#ifndef MESSAGES_H
#define MESSAGES_H

/* Usage messages */
#define GRAL_USAGE "[-aAeEfFgGhHiIlLmoOprsStuUvwWxy] [-b FILE] [-c FILE] [-D DIR] \
[-k FILE] [-P PROFILE] [-z METHOD] [PATH]"

#define ACTIONS_USAGE "List or edit actions/plugins\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  actions [edit [APP]]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available actions/plugins\n\
    actions\n\
- Open/edit the actions configuration file with nano\n\
    actions edit nano\n\
- Open/edit the actions configuration file with the default associated\n\
  application\n\
    actions edit\n\n\
Actions are just names for plugins.\n\
An action definition has the following form: \"NAME=plugin\", for example:\n\
\"//=rgfind.sh\".\n\
To run a plugin just enter the action name. So, to run the rgfind.sh plugin,\n\
just enter \"//\".\n\
Some plugins accept parameters. To get information about a specific plugin\n\
use the -h,--help flag. Example: \"- --help\"."

#define ALIAS_USAGE "List, print, or import aliases\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  alias [import FILE] [ls, list] [NAME]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available aliases\n\
    alias\n\
  or\n\
    alias ls (or 'alias <TAB>')\n\
- Print a specific alias definition\n\
    alias my_alias\n\
- Import aliases from ~/.bashrc\n\
    alias import ~/.bashrc\n\
  Note: Only aliases following the POSIX specification (NAME=\"STR\")\n\
  will be imported"

#define ARCHIVE_USAGE "Compress/archive files\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ac, ad ELN/FILE...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Compress/archive all selected files\n\
    ac sel\n\
- Compress/archive a range of files\n\
    ac 12-24 (or 'ac <TAB>' to choose from a list - multi-selection is allowed)\n\
- Decompress/dearchive a file\n\
    ad file.tar.gz\n\
  or just open the file and CliFM will prompt the appropriate menu\n\
    o file.tar.gz (or just 'file.tar.gz')\n\n\
\x1b[1mDEPENDENCIES\x1b[0m\n\
zstd(1)           Everything related to Zstandard\n\
mkisofs(1)        Create ISO 9660 files\n\
7z(1) / mount(1)  Operate on ISO 9660 files\n\
archivemount(1)   Mount archives\n\
atool(1)          Extraction/decompression, listing, and repacking of archives"

#define AUTOCD_USAGE "Turn autocd on/off\n\
\x1b[1mUSAGE\x1b[0m\n\
  acd, autocd [on, off, status]"

#define AUTOCMDS_USAGE "Tweak settings or run custom commands on a per directory basis\n\n\
There are two ways to set autocommands:\n\
  1) Via the 'autocmd' keyword in the configuration file\n\
  2) By placing a '.cfm.in' and/or a '.cfm.out' file in the corresponding\n\
  directory\n\n\
Example using the first method:\n\
Edit the configuration file ('edit' or F10) and add the following line:\n\n\
  autocmd /media/remotes/** fc=0,lm=1\n\n\
This instructs CliFM to always disable the files counter and to run in\n\
light mode whenever you enter the /media/remotes directory (or any\n\
subdirectory).\n\n\
Example using the second method:\n\
Create a .cfm.in file in the ~/Important directory with the following\n\
content:\n\n\
  echo \"Please keep me in sync with work files\" && read -n1\n\n\
This little reminder will be printed every time you enter the Important\n\
directory.\n\
If the file is named rather .cfm.out, the command will be executed when\n\
leaving, instead of entering, the directory.\n\n\
Note: Only single-line commands are allowed. If you need more advanced\n\
stuff, set here the path to a script doing whatever needs to be done."

#define AUTO_OPEN_USAGE "Turn auto-open on/off\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ao, auto-open [on, off, status]"

#define BACK_USAGE "Change to the previous directory in the directory \
history list\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  b, back [h, hist] [clear] [!ELN]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Just change to the previously visited directory\n\
    b (also Alt-j or Shift-Left)\n\
- Print the directory history list\n\
    b hist (or 'dh')\n\
- Change to the directory whose ELN in the list is 24\n\
    b !24\n\
- Use the 'f' command to go forward\n\
    f (also Alt-k or Shift-Right)"

#define BD_USAGE "Quickly change to a parent directory matching NAME. If \
NAME is not specified, print the list of all parent directories\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  bd [NAME]\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Supposing you are in ~/Documents/misc/some/deep/dir, change to\n\
~/Documents/misc\n\
    bd mi (or 'bd <TAB>' to choose from a list)"

#define BL_USAGE "Create multiple symbolic links at once\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  bl FILE...\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Symlink files file1 file2 file3 and file4 at once\n\
    bl file* (or 'bl <TAB>' to choose from a list - multi-selection is\n\
  allowed)\n\n\
Note: Links are created in the current directory.\n\
By default links are named FILE.link (you will be given the option to\n\
change this suffix)"

#define BLEACH_USAGE "Clean up file names from non-ASCII characters\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  bb, bleach ELN/FILE...\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Bleach file names in your Downloads directory\n\
    bb ~/Downloads/*"

#define BOOKMARKS_USAGE "Manage bookmarks\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  bm, bookmarks [a, add FILENAME NAME [SHORTCUT]] [d, del [NAME]] [e, edit [APP]] [NAME, SHORTCUT]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Open the bookmarks screen\n\
    bm (Alt-b)\n\
- Bookmark the directory /media/mount as 'mount'\n\
    bm add /media/mount mnt\n\
  You can add a shortcut as well: 'bm add /media/mount mount m'\n\
  Note: Regular files can be bookmarked too\n\
- Access the bookmark named 'mount'\n\
    bm mount (or 'bm <TAB>' to choose from a list)\n\
    Note: Shortcuts can be used as well: 'bm m'\n\
- Remove the bookmark named 'mount'\n\
    bm del mount (or 'bm del <TAB>' to choose from a list)\n\
- Edit the bookmarks file manually\n\
    bm edit (or F11)\n\
- Edit the bookmarks file using vi\n\
    bm edit vi\n\
- Print file properties of specific bookmarks using the 'b:' construct\n\
    p b:<TAB> (multi-selection is allowed)\n\
- Select all bookmarks at once\n\
    s b:\n\n\
Note: When using TAB completion only bookmark names are listed"

#define BULK_USAGE "Bulk rename files\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  br, bulk ELN/FILE...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Bulk rename all files ending with .pdf in the current directory\n\
    br *.pdf (or 'br <TAB> to choose from a list - mutli-selection is\n\
  allowed')\n\
- Bulk rename all selected files\n\
    br sel"

#define CD_USAGE "Change the current working directory\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  cd [ELN/DIR]\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Change to /var\n\
    cd /var\n\
  or, if autocd is enabled (default)\n\
    /var"

#define COLORS_USAGE "Print the list of currently used color codes\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  colors"

#define COLUMNS_USAGE "Set columned list of files on/off\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  cl, columns [on, off]"

#define CS_USAGE "Switch color schemes\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  cs, colorschemes [COLORSCHEME] [edit [APP]] [n, name]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print current color scheme\n\
    cs name (or 'cs n')\n\
- List available color schemes\n\
    cs (or 'cs <TAB>')\n\
- Edit the current color scheme\n\
    cs edit\n\
- Edit the current color scheme using vi\n\
    cs edit vi\n\
- Switch to the color scheme named 'mytheme'\n\
    cs mytheme"

#define DESEL_USAGE "Deselect one or more selected files\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ds, desel [*, a, all]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Deselect all selected files\n\
    ds * (or Alt-d)\n\
- Deselect files from a menu\n\
    ds (or 'ds <TAB>' to choose from a list - multi-selection is allowed)"

#define DESKTOP_NOTIFICATIONS_USAGE "Errors, warnings, and notices are send \
to the notification daemon instead of\n\
being printed immediately before the next prompt\n\n\
To enable this feature use the --desktop-notifications command line flag or\n\
set DesktopNotifications to true in the configuration file (F10)\n\n\
Notifications are sent using the following command:\n\n\
Linux/BSD: notify-send -u \"TYPE\" \"TITLE\" \"MSG\"\n\
MacOS:     osascript -e 'display notification \"MSG\" subtitle \"TYPE\" with title \"TITLE\"'\n\
Haiku:     notify --type \"TYPE\" --title \"TITLE\" \"MSG\"\n\n\
Note: It is the notification daemon itself who takes care of actually printing\n\
notifications on your screen. For troubleshoting, consult your \
daemon's documentation\n\n\
Tip: You can always check notifications using the 'msg' command"

#define DH_USAGE "Access the directory history list\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  dh [STRING] [PATH] [!ELN]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the directory history list\n\
    dh (also 'dh <TAB>')\n\
- Print directory history entries matching \"query\"\n\
    dh query (also 'dh query<TAB>')\n\
- Change to the entry number (ELN) 12\n\
    dh !12\n\
  Note: Entry numbers are not displayed when using TAB completion\n\n\
Note: If the first argument is an absolute path, 'dh' works just as 'cd'\n\
Tip: Take a look at the 'j' command as well"

#define DIRHIST_USAGE "List or access entries in the directory history list\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  b/f [hist] [clear] [!ELN]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the directory history list\n\
    b hist\n\
- Change to the directory whose ELN is 12 in the directory history list\n\
    b !12\n\
- Remove all entries from the directory history list\n\
    b clear\n\n\
Tip: See also the 'dh' and 'j' commands"

#define DUP_USAGE "Duplicate files via rsync(1) (cp(1) if rsync is not found)\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  d, dup ELN/FILE...\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Duplicate files whose ELN's are 12 through 20\n\
    d 12-20\n\n\
You will be asked for a destiny directory\n\
Duplicated files are created as SRC.copy, and, if SRC.copy exists, as \n\
SRC.copy-n, where n is an positive integer (starting at 1)\n\n\
Parameters passed to rsync: --aczvAXHS --progress\n\n\
Parameters passed to cp: -a"

#define EDIT_USAGE "Edit the main configuration file\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  edit [reset] [APPLICATION]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Open/edit the configuration file\n\
    edit (or F10)\n\
- Open/edit the configuration file using nano\n\
    edit nano\n\
- Create a fresh configuration file (making a backup of the old one)\n\
    edit reset"

#define EXT_USAGE "Turn on/off the use of external commands\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ext [on, off, status]"

#define EXPORT_FILES_USAGE "Export files to a temporary file\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  exp [ELN/FILE]...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Export all selected files\n\
    exp sel\n\
- Export all PDF files in the current directory\n\
    exp *.pdf"

#define EXPORT_VAR_USAGE "Add one or more variables to the environment\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  export NAME=VALUE..."

#define FC_USAGE "Turn on/off the files counter for directories\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  fc, filescounter [on, off, status]"

#define FILE_DETAILS "List file details\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Toggle long/detail view mode\n\
    Alt-l\n\
  Note: use PropFields in the configuration file to customize output\n\
  fields (and TimeStyle for custom timestamp formats)\n\
- Print properties of the file whose ELN is 4\n\
    p4\n\
- Print file properties, including directory full size\n\
    pp DIR"

#define FILE_SIZE_USAGE "File sizes/disk usage\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Enable full directory size (long view)\n\
    fz on (or --full-dir-size)\n\
- Toggle the disk usage analyzer mode on/off\n\
    Alt-TAB (or -t, --disk-usage-analyzer)\n\
- Print files sizes as used blocks instead of used bytes (apparent size)\n\
    Run with --no-apparent-size or set ApparentSize to false in the\n\
    configuration file\n\
- Use powers of 1000 instead of 1024 for file sizes\n\
    Run with --si"

#define FF_USAGE "Set list-directories-first on/off\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ff, dirs-first [on, off, status]\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Disable list directories-first\n\
    ff off\n\
  Note: Toggle directories-first on/off pressing Alt-g"

#define FILE_PREVIEWS "Use the 'view' command to preview files in the current \
directory (depends on fzf).\n\n\
To add file previews to TAB completion (fzf mode only), use the --fzfpreview\n\
command line option, or set FzfPreview to true in the configuration file\n\
('edit' or F10).\n\n\
Enabling image previews (either ueberzug (X11 only) or the Kitty terminal\n\
are required)\n\
\n\
1. Copy 'clifmrun' and 'clifmimg' scripts to somewhere in you $PATH \n\
(say /usr/local/bin). You can find them in DATADIR/clifm/plugins (usually\n\
/usr/local/share/clifm/plugins).\n\n\
2. Edit shotgun's configuration file ('view edit' or F7) and add the\n\
following lines at the top of the file (to make sure they won't be\n\
overriden by previous directives):\n\
\n\
X:^application/.*(officedocument|msword|ms-excel|opendocument).*=clifmimg doc;\n\
X:^text/rtf$=clifmimg doc;\n\
X:^application/epub\\+zip$=clifmimg epub;\n\
X:^appliaction/pdf$=clifmimg pdf;\n\
X:^image/vnd.djvu=clifmimg djvu;\n\
X:^image/svg\\+xml$=clifmimg svg;\n\
X:^image/.*=clifmimg image;\n\
X:^video/.*=clifmimg video;\n\
X:^audio/.*=clifmimg audio;\n\
X:^application/postscript$=clifmimg postscript;\n\
X:N:.*\\.otf$=clifmimg font;\n\
X:font/.*=clifmimg font;\n\
\n\
Comment out whatever you want to exclude from the image preview function.\n\
\n\
3. Run clifm via the 'clifmrun' script:\n\
clifmrun --fzfpreview\n\
\n\
Note on Kitty and Wayland:\n\
If running on the kitty terminal you can force the use of the kitty image\n\
protocol (instead of ueberzug) as follows:\n\
\n\
CLIFM_KITTY_NO_UEBERZUG=1 clifmrun --fzfpreview\n\
\n\
Note that on Wayland the kitty image protocol will be used by default, so\n\
that there is no need to set this variable."

#define FILTER_USAGE "Set a filter for the files list\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ft, filter [unset] [[!]REGEX,=FILE-TYPE-CHAR]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the current filter, if any\n\
    ft\n\
- Do not list hidden files\n\
    ft !^\\.\n\
- List only files ending with \".pdf\"\n\
    ft .*\\.pdf$\n\
- List only symbolic links\n\
    ft =l\n\
- Do not list socket files\n\
    ft !=s\n\
  Note: See below for the list of available file type characters\n\
- Unset the current filter\n\
    ft unset\n\n\
You can also filter files in the current directory using TAB\n\
completion via wildcards and the file type filter:\n\
- List PDF files\n\
    /*.pdf<TAB>\n\
- List executable files\n\
    =x<TAB>\n\n\
Available file type characters:\n\
  b: Block devices\n\
  c: Character devices\n\
  d: Directories\n\
  f: Regular files\n\
  h: Multi-hardlink files\n\
  l: Symbolic links\n\
  p: FIFO/pipes\n\
  s: Sockets\n\
  C: Files with capabilities (1)(2)\n\
  o: Other-writable files (2)\n\
  t: Files with the sticky bit set (2)\n\
  u: SUID files (2)\n\
  g: SGID files (2)\n\
  x: Executable files (2)\n\n\
(1) Only via TAB completion\n\
(2) Not available in light mode\n\n\
Type '=<TAB>' to get the list of available file type filters\n\n\
Other ways of filtering files in the current directory:\n\n\
* @<TAB>       List all MIME-types found\n\
* @query<TAB>  MIME-type filter. Ex: @pdf<TAB> to list all PDF files\n\
* /query       Quick search function: consult the 'search' help topic\n\
* Alt-.        Toggle hidden files\n\
* Alt-,        Toggle list-only-dirs\n\
* Just press TAB (fzf/fzy mode) and perform a fuzzy search\n\n\
You can also operate on files filtered by file type and/or MIME type as\n\
follows:\n\n\
    CMD =file-type-char @query\n\n\
For example, to select all executable files, symbolic links, and image\n\
files in the current directory:\n\n\
    s =x =l @image"

#define FORTH_USAGE "Change to the next directory in the directory history list\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  f, forth [h, hist] [clear] [!ELN]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Just change to the next visited directory\n\
    f (also Alt-k or Shift-Right)\n\
- Print the directory history list\n\
    f hist (or 'dh')\n\
- Change to the directory whose ELN in the list is 24\n\
    f !24\n\
- Use the 'b' command to go backwards\n\
    b (also Alt-j or Shift-Left)"

#define FZ_USAGE "Toggle full directory size on/off (only for long view mode)\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  fz [on, off]"

#define HELP_USAGE "Get help\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  help [TOPIC]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the help screen\n\
    help\n\
- Get help about the 'bookmarks' topic\n\
    help bookmarks\n\
- Print the list of available help topics\n\
    help <TAB>"

#define HF_USAGE "Set hidden files on/off\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  hf, hh, hidden [on, off, status]\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Show hidden files\n\
    hh on\n\
- Toggle hidden files\n\
    hh (or Alt-.)"

#define HISTEXEC_USAGE "Access commands history entries\n\n\
\x1b[1mUSAGE\x1b[0m\n\
history or !<TAB>: List available commands\n\
!!: Execute the last command\n\
!n: Execute the command number 'n' in the history list\n\
!-n: Execute the last - n command in the history list"

#define HISTORY_USAGE "List or access commands history entries\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  history [edit [APP]] [clear] [-n] [on, off, status, show-time]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the complete list of commands in history\n\
    history\n\
- Print the complete list of commands in history (with timestamps)\n\
    history show-time\n\
- Print the last 4 commands in history\n\
    history -4\n\
  Note: 'history show-time -4' to add timestamps\n\
- Prevent subsequent commands from being written to the history file\n\
    history off (then reenable it via 'history on')\n\
  Note: Starting a command by a space prevent it from being added to history\n\
- Edit the commands history list\n\
    history edit\n\
- Edit the commands history list using vi\n\
    history edit vi\n\
- Clear the history list\n\
    history clear\n\n\
You can also access the commands history via the exclamation mark (!)\n\
- List available commands\n\
    !<TAB>\n\
- List all history entries matching 'sudo'\n\
    !sudo<TAB>\n\
- Execute the last command\n\
    !!\n\
- Execute the command number 'n' in the history list\n\
    !n\n\
- Execute the 'last - n' command in the history list\n\
    !-n"

#define ICONS_USAGE "Set icons on/off\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  icons [on, off]"

#define JUMP_USAGE "Change to a directory in the jump database (visited directories)\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  j [--purge [NUM]] [--edit [APP]], jc, jp, jl [STRING]..., jo [NUM], je\n\n\
For information about the matching algorithm consult the manpage\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the list of entries in the jump database\n\
    j (or jl)\n\
- List all entries matching \"str\"\n\
    jl str\n\
- Jump (cd) to the best ranked directory matching \"bui\"\n\
    j bui\n\
    Note: Hit TAB to get a list of possible matches: 'j bui<TAB>'\n\
- If not enough, use multiple query strings\n\
    j ho bui\n\
    Note: Most likey, this will take you to /home/build\n\
- Jump to the best ranked PARENT directory matching \"str\"\n\
    jp str\n\
- Jump to the best ranked CHILD directory matching \"str\"\n\
    jc str\n\
- Open/edit the jump database\n\
    je (also 'j --edit')\n\
- Open/edit the jump database using vim\n\
    j --edit vim\n\
- Purge the database from non-existent directories\n\
    j --purge\n\
    Note: To automatically purge the database from non-existent directories\n\
    at startup, set PurgeJumpDB to true in the configuration file\n\
- Purge the database from entries ranked below 100\n\
    j --purge 100\n\
    Note: To remove a specific entry, just remove the corresponding line\n\
    from the database ('je' or 'j --edit')"

#define KB_USAGE "Manage keybindings\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  kb, keybinds [edit [APP]] [reset] [readline]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List your current key bindings\n\
    kb\n\
- Open/edit the key bindings file\n\
    kb edit\n\
- Open/edit the key bindings file using mousepad\n\
    kb edit mousepad\n\
- List the current key bindings for readline\n\
    kb readline\n\
- Reset your key bindings settings\n\
    kb reset"

#define LE_USAGE "Edit a symbolic link\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  le SYMLINK\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Edit the symbolic link named file.link\n\
    le file.link"

#define LL_USAGE "Toggle long view mode\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ll, lv [on, off]\n\n\
\x1b[1mEXAMPLE\x1b[0m\n\
- Change to long view\n\
    ll on\n\
- Toggle long view\n\
    ll (or Alt-l)"

#define LM_USAGE "Set light mode on/off\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  lm [on, off]"

#define LOG_USAGE "List or clear CliFM logs\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  log [clear]"

#define MEDIA_USAGE "List available media devices, allowing you to mount or \
unmount them\n\
Note: Either udevil(1) or udisks2(1) is required\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  media\n\n\
The list of mounted and unmounted devices will be displayed.\n\
Choose the device you want using ELN's.\n\
If the device is mounted, it will be unmounted; if unmounted, it will \
be mounted.\n\
If mounting a device, CliFM will change automatically to the corresponding\n\
mountpoint.\n\n\
To get information about a device, enter iELN. For example: i12"

#define MF_USAGE "Limit the amount of files listed on the screen to NUM \
(valid range: >= 0). Use 'unset' to remove the files limit.\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  mf [NUM, unset]"

#define MIME_USAGE "Set default opening applications based on MIME types or file names\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  mm, mime [info ELN/FILENAME] [edit [APP]] [import]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Get MIME information for the file whose ELN is 12\n\
    mm info 12\n\
- Open/edit the MIME configuration file\n\
    mm edit (or F6)\n\
- Open/edit the MIME configuration file using vim\n\
    mm edit vim\n\
- Try to import MIME file associations from the system\n\
    mm import\n\
- Add/modify default opening application for myfile\n\
    1) Find out the MIME type (or file name) of the file\n\
      mm info myfile\n\
    2) Edit the mimelist file\n\
      mm edit (or F6)\n\
    Once in the file, find the appropriate entry and add the opening\n\
    application you want\n\
  For more information consult the manpage"

#define MSG_USAGE "List available CliFM messages\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  msg, messages [clear]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available messages\n\
    msg\n\
- Clear the current list of messages\n\
    msg clear (or Alt-t)"

#define MOUNTPOINTS_USAGE "List and change to a mountpoint\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  mp, mountpoints\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available mountpoints\n\
    mp\n\
  Once here, just select the mountpoint you want to change to"

#define NET_USAGE "Manage network resources\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  net [NAME] [edit [APP]] [m, mount NAME] [u, unmount NAME]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available remote resources (like SSHFS or samba)\n\
    net (or 'net <TAB>')\n\
- Mount the remote resource named 'work'\n\
    net work (or 'net m work', 'net mount work', or 'net m <TAB>')\n\
- Unmount the remote resource named 'work'\n\
    net u work (or 'net unmount work' or 'net u <TAB>')\n\
- Open/edit the net configuration file\n\
    net edit\n\
- Open/edit the net configuration file using nano\n\
    net edit nano\n\
- Copy a file to a remote location via the 'cr' plugin\n\
    cr FILE (run 'cr --edit' before to set up your remotes)"

#define NEW_USAGE "Create new files and/or directories\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  n, new [FILE]... [DIR/]...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Create two files named file1 and file2\n\
    n file1 file2\n\
- Create two directories named dir1 and dir2\n\
    n dir1/ dir2/\n\
    Note: Note the ending slashes\n\
- Both of the above at once:\n\
    n file1 file2 dir1/ dir2/\n\n\
Parent directories are created if necessary. For example, if you run:\n\
    n dir/subdir/file\n\
both 'dir' and 'subdir' directories will be created if they do not exist"

#define OC_USAGE "Interactively change files ownership\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  oc FILE...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Change ownership of selected files\n\
  oc sel\n\
- Change ownership of all .iso files\n\
  oc *.iso\n\n\
\x1b[1mNOTES\x1b[0m\n\
A template is presented to the user to be edited.\n\n\
Only user and primary group common to all files passed as\n\
parameters are set in the ownership template.\n\n\
Ownership (both user and primary group, if specified) is\n\
changed for all files passed as parameters.\n\n\
Both names and ID numbers are allowed (TAB completion is available).\n\n\
If only a name/number is entered, it is taken as user.\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Change user to root\n\
  root (or \"0\")\n\
- Change primary group to video\n\
  :video (or \":981\")\n\
- Change user to peter and primary group to audio\n\
  peter:audio (or \"1000:986\" or \"peter:986\" or \"1000:audio\")\n\n\
Note: Use the 'pc' command to edit files permissions"

#define OPEN_USAGE "Open a file\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  o, open ELN/FILE [APPLICATION]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Open the file whose ELN is 12 with the default associated application\n\
  (see the 'mime' command)\n\
    o 12\n\
- Open the file whose ELN is 12 with vi\n\
    o 12 vi\n\
  Note: If auto-open is enabled (default), 'o' could be just omitted\n\
    12\n\
    12 vi"

#define OPENER_USAGE "Set the resource opener\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  opener APPLICATION\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Set the resources opener to xdg-open (instead of the default, Lira)\n\
    opener xdg-open\n\
- Set the resources opener back to the default (Lira)\n\
    opener default"

#define OW_USAGE "Open a file with a specific application\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ow ELN/FILE\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Choose opening application for test.c from a menu\n\
    ow test.c (or 'ow test.c <TAB>' to get a list of applications able to\n\
  open this file)\n\
- Open the file test.c with geany\n\
    ow test.c geany"

#define PAGER_USAGE "Set the files list pager on/off\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  pg, pager [on, off, status, NUM]\n\n\
If set to 'on', run the pager whenever the list of files does no fit on\n\
the screen. If set to any positive integer greater than 1, run the pager\n\
whenever the amount of files in the current directory is greater than or\n\
equal to this value (say, 1000). 1 amounts to 'on' and 0 to 'off'\n\n\
Note: You can also try the 'pager' plugin running 'gg'"

#define PC_USAGE "Interactively edit file permissions\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  pc FILE...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Change permissions of file named file.txt\n\
    pc file.txt\n\
- Change permissions of all selected files at once\n\
    pc sel\n\n\
When editing multiple files with different permissions at once,\n\
only shared permission bits will be set in the permissions template.\n\
Bear in mind that the new permissions set will be applied to all files\n\
passed as arguments\n\n\
Both symbolic and octal notation for the new permissions set are allowed\n\n\
Note: Use the 'oc' command to edit files ownership"

#define PIN_USAGE "Pin a file or directory\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  pin FILE/DIR\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Pin the directory ~/my_important_dir\n\
    pin ~/my_important_dir\n\
- Change to the pinned directory\n\
    , (yes, just a comma)\n\
- Unpin the currently pinned directory\n\
    unpin"

#define PROFILES_USAGE "Manage profiles\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  pf, prof, profile [ls, list] [set, add, del PROFILE] [rename PROFILE NEW_NAME]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the current profile name\n\
    pf\n\
- List available profiles\n\
    pf ls\n\
- Switch to the profile 'myprofile'\n\
    pf set myprofile (or 'pf set <TAB>' to choose from a list)\n\
- Add a new profile named new_profile\n\
    pf add new_profile\n\
- Remove the profile 'myprofile'\n\
    pf del myprofile (or 'pf del <TAB>' to choose from a list)\n\
- Rename the profile 'myprofile' as 'cool_name'\n\
    pf rename myprofile cool_name"

#define PROP_USAGE "Print files properties\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  p, pr, pp, prop [ELN/FILE]...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Print the properties of the file whose ELN is 12\n\
    p 12 (or 'p <TAB>' to choose from a list)\n\
- Print the properties of all selected files\n\
    p sel\n\
- Print the properties of the directory 'dir' (including total size)\n\
    pp dir"

#define PROMPT_USAGE "Change current prompt\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  prompt [NAME, edit [APP], list, reload, unset]\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available prompts\n\
    prompt list (or 'prompt <TAB>' to choose from a list)\n\
- Change prompt to the prompt named MYPROMPT\n\
    prompt MYPROMPT\n\
- Edit the prompts file\n\
    prompt edit\n\
- Edit the prompts file with vi\n\
    prompt edit vi\n\
- Set the default prompt\n\
    prompt unset\n\
- Reload available prompts\n\
    prompt reload\n\n\
Note: To permanently set a new prompt edit the current\n\
color scheme file ('cs edit'), and set the Prompt field to\n\
whatever prompt you like."

#define QUIT_HELP "Exit clifm\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  Q, q, quit, exit\n\n\
Use 'Q' to exit running the CD on quit function\n\
To enable this feature consult the manpage"

#define RR_USAGE "Remove files in bulk using a text editor\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  rr [DIR] [EDITOR]\n\n\
The list of files in DIR (current directory if omitted) is opened via \
EDITOR (default associated application if omitted). Remove the lines \
corresponding to the files you want to delete, save, and quit the editor.\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Bulk remove files/dirs in the current directory using the default editor\n\
    rr\n\
- Bulk remove files/dirs in the current directory using nano\n\
    rr nano\n\
- Bulk remove files/dirs in the directory 'mydir' using vi\n\
    rr mydir vi"

#define SEARCH_USAGE "Search for files using either glob or regular expressions\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  /PATTERN [-filetype] [-x] [DIR]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List all PDF files in the current working directory\n\
    /*.pdf (or, as a regular expression, '/.*\\.pdf$')\n\
- List all files starting with 'A' in the directory whose ELN is 7\n\
    /A* 7\n\
- List all .conf files in /etc\n\
    /*.conf /etc\n\n\
You can further filter the search using a file type filter:\n\
  -b	block device\n\
  -c	character device\n\
  -d	directory\n\
  -f	regular file\n\
  -l	symlink\n\
  -p	FIFO/pipe\n\
  -s	socket\n\
- For example, to list all directories containing a dot or a dash and ending \
with 'd' in the directory named Documents\n\
    /[.-].*d$ -d Documents/\n\n\
To perform a recursive search, use the -x modifier (file types not allowed)\n\
    /str -x /boot\n\n\
To search for files by content instead of names use the rgfind plugin, bound\n\
by default to the \"//\" action name. For example:\n\
    // content I\\'m looking for\n\n\
Note: This plugin depends on fzf(1) and rg(1) (ripgrep)"

#define SECURITY_USAGE "CliFM provides three different security mechanisms:\n\n\
1. Stealth mode (aka incognito/private mode): No file is read nor written\n\
to the file system (unless explicitly required by the user via a command).\n\
Default values are used.\n\
Enable this mode via the -S,--stealth-mode command line switch.\n\n\
2. Secure environment: CliFM runs on a sanitized environment (most\n\
environment variables are cleared and a few of them set to sane defaults).\n\
Enable this mode via the --secure-env or --secure-env-full command line\n\
switches.\n\n\
3. Secure commands: Automatically executed shell commands (autocommands,\n\
(un)mount, opening applications, just as prompt and profile commands) are\n\
sanitized before being executed: a secure environment is set and the\n\
command is validated using a whitelist to prevent unexpected/insecure\n\
behavior and command injection. Enable this mode using the --secure-cmds\n\
command line switch."

#define SEL_USAGE "Select one or multiple files\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  s, sel ELN/FILE... [[!]PATTERN] [-FILETYPE] [:PATH]\n\n\
Recognized file types: (d)irectory, (r)egular file, symbolic (l)ink,\n\
(s)ocket, (f)ifo/pipe, (b)lock device, (c)haracter device\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Select the file whose ELN is 12\n\
    s 12 (or 's <TAB>' to choose from a list - multi-selection is allowed)\n\
- Select all files ending with .odt:\n\
    s *.odt\n\
- Select multiple files at once\n\
    s 12 15-21 *.pdf\n\
- Select all regular files in /etc starting with 'd'\n\
    s ^d.* -r :/etc\n\
- Select all files in the current directory (including hidden files)\n\
    s * .* (or Alt-a)\n\
- Interactively select files in '/media' (requires fzf, fzy, or smenu\n\
  TAB completion mode)\n\
    s /media/*<TAB>\n\
- List currently selected files\n\
    sb\n\
- Copy selected files into the current directory:\n\
    c sel\n\
- Move selected files into the directory whose ELN is 24\n\
    m sel 24\n\
- Deselect all selected files\n\
    ds * (or Alt-d)\n\
- Deselect files selectively\n\
    ds <TAB> (multi-selection is allowed)"

#define SORT_USAGE "Change files sorting order\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  st [METHOD] [rev]\nMETHOD: 0 = none, \
1 = name, 2 = size, 3 = atime, 4 = btime, \
5 = ctime, 6 = mtime, 7 = version, 8 = extension, \
9 = inode, 10 = owner, 11 = group\n\
Note: Both numbers and names are allowed\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List files by size\n\
    st size (or 'st <TAB>' to choose from a list)\n\
- Revert the current sorting order (i.e. z-a instead of a-z)\n\
    st rev"

#define TAG_USAGE "(Un)tag files and/or directories\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  tag [add, del, list, list-full, merge, new, rename, untag]\n\
      [FILE]... [[:]TAG]\n\n\
Instead of the long format described above, you can use any of the\n\
following shortcuts as well:\n\n\
  ta: Tag files as ...       (same as 'tag add')\n\
  td: Delete tag(s)          (same as 'tag del')\n\
  tl: List tags/tagged files (same as 'tag list')\n\
  tm: Rename tag             (same as 'tag rename')\n\
  tn: Create new tag(s)      (same as 'tag new')\n\
  tu: Untag file(s)          (same as 'tag untag')\n\
  ty: Merge two tags         (same as 'tag merge')\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available tags\n\
    tag list (or 't:<TAB>')\n\
- List available tags and each tagged file\n\
    tag list-full\n\
- List files tagged as 'pdf'\n\
    tag list pdf (or 't:pdf<TAB>')'\n\
- List tags applied to the file 'file.txt'\n\
    tag list file.txt\n\
- Tag all .PNG files in the current directory as both 'images' and 'png'\n\
    tag add *.png :images :png\n\
    Note: Tags are created if they do not exist\n\
    Note 2: Since 'add' is the default action, it can be omitted\n\
- Tag all selected files as 'special'\n\
    tag add sel :special\n\
- Rename tag 'documents' as 'docs'\n\
    tag rename documents docs\n\
- Merge tag 'png' into 'images'\n\
    tag merge png images\n\
    Note: All files tagged as 'png' will be now tagged as 'images', \
and the 'png' tag will be removed\n\
- Remove the tag 'images' (untag all files tagged as 'images')\n\
    tag del images\n\
- Untag a few files from the 'work' tag\n\
    tag untag :work file1 image.png dir2\n\
    or\n\
    tag untag :<TAB> (and then TAB again to select tagged files)\n\n\
Operating on tagged files (t:TAG)\n\
- Print the file properties of all files tagged as 'docs'\n\
    p t:docs (or 'p t:<TAB>' to choose from a list)\n\
- Remove all files tagged as 'images'\n\
    r t:images\n\
- Run stat(1) over all files tagged as 'work' and all files tagged as\n\
  'docs'\n\
    stat t:work t:docs\n\n\
To operate only on some tagged files use TAB as follows:\n\
    t:TAG<TAB> (multi-selection is allowed)\n\
Mark the files you need via TAB and then press Enter or Right"

#define TE_USAGE "Toggle the executable bit on files\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  te ELN/FILE... (or 'te <TAB>' to choose from a list - multi-selection\n\
  is allowed)\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Set the executable bit on all shell scripts in the current directory\n\
    te *.sh\n\
- Set the executable bit on all selected files\n\
   te sel"

#define TRASH_USAGE "Send one or multiple files to the trash can\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  t, tr, trash [ELN/FILE]... [ls, list] [clear, empty] [del]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Trash the file whose ELN is 12\n\
    t 12 (or 't <TAB>' to choose from a list - multi-selection is allowed)\n\
- Trash all files ending with .sh\n\
    t *.sh\n\
- List currently trashed files\n\
    t (or 't ls', 't list', or 't <TAB>')\n\
- Remove/delete trashed files using a menu (permanent removal)\n\
    t del\n\
- Remove/delete all files from the trash can (permanent removal)\n\
    t empty\n\
- Untrash all trashed files (restore them to their original location)\n\
    u *\n\
- Untrash files selectively using a menu\n\
    u (or 'u <TAB>' to choose from a list - multi-selection is allowed)"

#define UNSET_USAGE "Delete variables from the environment\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  unset NAME..."

#define UNTRASH_USAGE "Restore files from the trash can\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  u, undel, untrash [FILE]... [*, a, all]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Untrash all trashed files (restore them to their original location)\n\
    u *\n\
- Untrash files selectively using a menu\n\
    u (or 'u <TAB>' to choose from a list - multi-selection is allowed)\n\n\
Note: Use the 'trash' command to trash files. Try 'trash --help'"

#define VV_USAGE "Copy files into a directory and bulk rename them at once\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  vv FILE... DIR\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Copy selected files into 'mydir' and rename them\n\
    vv sel mydir\n\
- Copy all PDF files into the directory whose ELN is 4 and rename them\n\
    vv *.pdf 4"

#define VIEW_USAGE "Preview files in the current directory (requires fzf)\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  view [edit [app]]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Just run the previewer\n\
    view (or Alt+-)\n\
- Edit the configuration file\n\
    view edit (or F7)\n\
- Edit the configuration file using vi\n\
    view edit vi\n\n\
Enter 'help file-previews' for more information"

#define WRAPPERS_USAGE "c (v, paste), l, m, md, and r commands are wrappers \
for cp(1), ln(1), mv(1),\nmkdir(1), and rm(1) shell commands respectively.\n\n\
\x1b[1mUSAGE\x1b[0m\n\
c  -> cp -iRp\n\
l  -> ln -sn\n\
m  -> mv -i\n\
md -> mkdir -p\n\
r  -> rm -dIr (for directories) (1)\n\
r  -> rm -I (for non-directories) (2)\n\n\
(1) 'rm -dr' on NetBSD/OpenBSD/MacOS.\n    Note: -d is not supported by the POSIX version of rm(1)\n\
(2) 'rm -f' on NetBSD/OpenBSD/MacOS\n\n\
The 'paste' command is equivalent to 'c' and exists only for semantic\n\
reasons. For example, to copy selected files into the current directory,\n\
it makes sense to write 'paste sel', or its shortened version, 'v sel'.\n\n\
By default, both the 'c' and 'm' commands run cp(1)/mv(1) interactively\n\
(-i), i.e. prompting before overwriting a file. To run non-interactivelly\n\
instead, use the -f,--force parameter (see the examples below). You can\n\
also permanently run in non-interactive mode using the cpCmd/mvCmd options\n\
in the configuration file ('edit' or F10).\n\n\
Just as 'c' and 'm', the 'r' command accepts -f,--force as paramater to\n\
prevent rm(1) from prompting before removals. Set rmForce to true in the\n\
configuration file to make this option permanent.\n\n\
To use different parameters, just run the corresponding utility, as usual.\n\
Example: cp -abf ...\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Create a copy of file1 named file2\n\
    c file1 file2\n\
- Create a copy of file1 in the directory dir1 named file2\n\
    c file1 dir1/file2\n\
- Copy all selected files into the current directory\n\
    c sel\n\
    Note: If destiny directory is omitted, the current directory is assumed\n\
- Copy all selected files into the current directory (non-interactively):\n\
    c -f sel\n\
- Move all selected files into the directory named testdir\n\
    m sel testdir\n\
- Rename file1 as file_test\n\
    m file1 file_test\n\
- Interactively rename file1\n\
    m file1\n\
    Note: The user is prompted to enter a new name using the old name as\n\
    template\n\
- Move all selected files into the current directory (non-interactively)\n\
    m -f sel\n\
- Remove all selected files\n\
    r sel\n\
- Remove all selected files (non-interactively)\n\
    r -f sel\n\
- Create a symbolic link pointing to the directory whose ELN is 12 named\n\
  link\n\
    l 12 link\n\
- Create a directory named mydir\n\
    md mydir\n\
    Note: To create files and directories you can use the 'n' command as\n\
    well. See 'n --help'\n\
- Edit the symbolic link named mylink\n\
    le mylink\n\n\
Use the 'vv' command to copy files into a directory and bulk rename them\n\
at once. See 'vv --help'\n\n\
Use the 'cr' plugin to send a file to a remote location:\n\
    cr FILE (run 'cr --edit' before to set up your remotes)"

#define WS_USAGE "Switch workspaces\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  ws [NUM/NAME [unset], +, -]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- List available workspaces\n\
    ws (or 'ws <TAB>')\n\
- Switch to the first workspace\n\
    ws 1 (or Alt-1)\n\
- Switch to worksapce named 'main'\n\
    ws main\n\
- Switch to the next workspace\n\
    ws +\n\
- Switch to the previous workspace\n\
    ws -\n\
- Unset the workspace number 2\n\
    ws 2 unset\n\n\
Note: Use the WorkspaceNames option in the configuration file to name\n\
your workspaces"

#define X_USAGE "Launch a new instance of CliFM on a new terminal window\n\n\
\x1b[1mUSAGE\x1b[0m\n\
  x, X [DIR]\n\n\
\x1b[1mEXAMPLES\x1b[0m\n\
- Launch a new instance in the current directory\n\
    x\n\
- Open the directory mydir in a new instance\n\
    x mydir\n\
- Launch a new instance as root\n\
    X\n\n\
Note: By default xterm(1) is used. Set your preferred terminal\n\
emulator using the TerminalCmd option in the configuration file"

/* Misc messages */
#define PAGER_HELP "?, h: help\nDown arrow, Enter, Space: Advance one line\n\
Page Down: Advance one page\nq: Stop pagging\n"
#define PAGER_LABEL "\x1b[7;97m--Mas--\x1b[0;49m"
#define NOT_AVAILABLE "This feature has been disabled at compile time"
#define STEALTH_DISABLED "Access to configuration files is not allowed in stealth mode"
#define CONFIG_FILE_UPDATED "File modified. Settings updated\n"

#ifndef __HAIKU__
# define HELP_MESSAGE "Enter '?' or press F1-F3 for instructions"
#else
# define HELP_MESSAGE "Enter '?' or press F5-F7 for instructions"
#endif

#define SHORT_OPTIONS "\
\n  -a, --no-hidden\t\t Do not show hidden files (default)\
\n  -A, --show-hidden\t\t Show hidden files\
\n  -b, --bookmarks-file=FILE\t Specify an alternative bookmarks file\
\n  -c, --config-file=FILE\t Specify an alternative configuration file\
\n  -D, --config-dir=DIR\t\t Specify an alternative configuration directory\
\n  -e, --no-eln\t\t\t Do not print ELN's (entry list number)\
\n  -E, --eln-use-workspace-color\t ELN's use the current workspace color\
\n  -f, --no-dirs-first\t\t Do not list directories first\
\n  -F, --dirs-first\t\t List directories first (default)\
\n  -g, --pager\t\t\t Enable the pager\
\n  -G, --no-pager\t\t Disable the pager (default)\
\n  -h, --help\t\t\t Show this help and exit\
\n  -H, --horizontal-list\t\t List files horizontally\
\n  -i, --no-case-sensitive\t No case-sensitive files listing (default)\
\n  -I, --case-sensitive\t\t Case-sensitive files listing\
\n  -k, --keybindings-file=FILE\t Specify an alternative keybindings file\
\n  -l, --no-long-view\t\t Disable long/detail view mode (default)\
\n  -L, --long-view\t\t Enable long/detail view mode\
\n  -m, --dihist-map\t\t Enable the directory history map\
\n  -o, --no-autols\t\t Do not list files automatically\
\n  -O, --autols\t\t\t List files automatically (default)\
\n  -p, --path=PATH\t\t Use PATH as CliFM's starting path (deprecated: use positional \
parameters instead)\
\n  -P, --profile=PROFILE\t\t Use (or create) PROFILE as profile\
\n  -r, --no-refresh-on-empty-line Do not refresh the list of files when pressing Enter \
on an empty line\
\n  -s, --splash\t\t\t Enable the splash screen\
\n  -S, --stealth-mode\t\t Run in incognito/private mode\
\n  -t, --disk-usage-analyzer\t Run in disk usage analyzer mode\
\n  -v, --version\t\t\t Show version details and exit\
\n  -w, --workspace=NUM\t\t Start in workspace NUM\
\n  -x, --no-ext-cmds\t\t Disallow the use of external commands\
\n  -y, --light-mode\t\t Run in light mode\
\n  -z, --sort=METHOD\t\t Sort files by METHOD (see the manpage)"

#define LONG_OPTIONS_A "\
\n      --case-sens-dirjump\t Do not ignore case when consulting the jump \
database (via the 'j' command)\
\n      --case-sens-path-comp\t Enable case sensitive path completion\
\n      --cd-on-quit\t\t Enable cd-on-quit functionality (see the manpage)\
\n      --color-scheme=NAME\t Use color scheme NAME\
\n      --cwd-in-title\t\t Print current directory in the terminal window title\
\n      --desktop-notifications\t Enable desktop notifications\
\n      --disk-usage\t\t Show disk usage (free/total)\
\n      --enable-logs\t\t Enable program logs\
\n      --full-dir-size\t\t Print the size of directories and their contents \
(long view only)\
\n      --fuzzy-match\t\t Enable fuzzy TAB completion/suggestions for file names \
and paths\
\n      --fzfpreview-hidden\t Enable file previews for TAB completion (fzf mode only) with the preview window hidden (toggle it with Alt-p)\
\n      --fzftab\t\t\t Use fzf to display completion matches (default if fzf binary is found)\
\n      --fzytab\t\t\t Use fzy to display completion matches\
\n      --icons\t\t\t Enable icons\
\n      --icons-use-file-color\t Icon colors follow file colors\
\n      --int-vars\t\t Enable internal variables\
\n      --list-and-quit\t\t List files and quit\
\n      --max-dirhist=NUM\t\t Maximum number of visited directories to recall\
\n      --max-files=NUM\t\t List only up to NUM files\
\n      --max-path=NUM\t\t Number of characters \
after which the current directory in the prompt will be abreviated to its \
base name (if \\z is used in the prompt)\
\n      --no-apparent-size\t Inform file sizes as used blocks instead of used bytes (apparent size)\
\n      --no-dir-jumper\t\t Disable the directory jumper function\
\n      --no-cd-auto\t\t Disable the autocd function\
\n      --no-classify\t\t Do not append file type indicators\
\n      --no-clear-screen\t\t Do not clear the screen when listing files\
\n      --no-color\t\t Disable colors \
\n      --no-columns\t\t Disable columned files listing\
\n      --no-file-cap\t\t Do not check file capabilities when listing files\
\n      --no-file-ext\t\t Do not check file extensions when listing files\
\n      --no-files-counter\t Disable the files counter for directories\
\n      --no-follow-symlink\t Do not follow symbolic links when listing files\
\n      --no-fzfpreview\t\t Disable file previews for TAB completion (fzf mode only)\
\n      --no-highlight\t\t Disable syntax highlighting\
\n      --no-history\t\t Do not write commands into the history file\
\n      --no-open-auto\t\t Same as no-cd-auto, but for files\
\n      --no-restore-last-path\t Do not record the last visited directory\
\n      --no-suggestions\t\t Disable auto-suggestions\
\n      --no-tips\t\t\t Disable startup tips\
\n      --no-trim-names\t\t Do not trim file names\
\n      --no-warning-prompt\t Disable the warning prompt\
\n      --no-welcome-message\t Disable the welcome message\
\n      --only-dirs\t\t List only directories and symbolic links to directories\
\n      --open=FILE\t\t Open FILE (via Lira) and exit\
\n      --opener=APPLICATION\t Resource opener to use instead of Lira, \
CliFM's built-in opener\
\n      --preview=FILE\t\t Display a preview of FILE (via Shotgun) and exit\
\n      --print-sel\t\t Keep the list of selected files in sight\
\n      --rl-vi-mode\t\t Set readline to vi editing mode (defaults to emacs mode)\
\n      --secure-cmds\t\t Filter commands to prevent command injection\
\n      --secure-env\t\t Run in a sanitized environment (regular mode)\
\n      --secure-env-full\t\t Run in a sanitized environment (full mode)\
\n      --sel-file=FILE\t\t Set FILE as custom selections file\
\n      --share-selbox\t\t Make the Selection Box common to different profiles\
\n      --shotgun-file=FILE\t Set FILE as shotgun configuration file\
\n      --si\t\t\t Print sizes in powers of 1000 instead of 1024\
\n      --sort-reverse\t\t Sort in reverse order, e.g. z-a instead of a-z\
\n      --smenutab\t\t Use smenu to display completion matches\
\n      --stdtab\t\t\t Force the use of the standard TAB completion mode (readline)\
\n      --trash-as-rm\t\t The 'r' command executes 'trash' instead of \
'rm' to prevent accidental deletions\n"

#define LONG_OPTIONS_B "\
      --virtual-dir-full-paths\t Files in virtual directories are listed as full paths instead of target base names\
\n      --virtual-dir=PATH\t Absolute path to a directory to be used as virtual directory\n"

#define CLIFM_COMMANDS_HEADER "\
For a complete description of all the below \
commands run 'cmd' (or press F2) or consult the manpage (F1).\n\
You can also try the interactive help plugin (it depends on FZF): just \
enter 'ih', that's it.\n\
Help topics are available as well. Type 'help <TAB>' to get a list of topics.\n\n\
The following is just a list of available commands and a brief description.\n\
For more information about a specific command run 'CMD -h' or 'CMD --help'.\n"

#define CLIFM_COMMANDS "\
 ELN/FILE/DIR       Auto-open and autocd functions\n\
 /PATTERN           Quick search\n\
 ;[CMD], :[CMD]     Run CMD via the system shell\n\
 ac, ad             Archiving functions\n\
 acd, autocd        Set auto-cd on/off\n\
 actions            Manage actions/plugins\n\
 alias              Manage aliases\n\
 ao, auto-open      Set auto-open on/off\n\
 b, back            Go back in the directory history list\n\
 bb, bleach         A file names cleaner\n\
 bd                 Go back to any parent directory\n\
 bl                 Create symbolic links in bulk\n\
 bm, bookmarks      Manage bookmarks\n\
 br, bulk           Rename files in bulk\n\
 c, l, m, md, r     Copy, link, move, makedir, and remove\n\
 colors             List current file type colors\n\
 cd                 Change directory\n\
 cl, columns        Set columns on/off\n\
 cmd, commands      Jump to the COMMANDS section in the manpage\n\
 config, edit       Open/edit the main configuration file\n\
 cs, colorscheme    Manage color schemes\n\
 d, dup             Duplicate files\n\
 dh                 Access the directory history list\n\
 ds, desel          Deselect selected files\n\
 exp                Export file names to a temporary file\n\
 ext                Set external/shell commands on/off\n\
 f, forth           Go forth in the directory history list\n\
 fc, filescounter   Set the files counter on/off\n\
 ff, dirs-first     Set list-directories-first on/off\n\
 fs                 What is free software?\n\
 ft, filter         Set a files filter\n\
 fz                 Printf directories full size (long view mode only)\n\
 hf, hidden         Set show-hidden-files on/off\n\
 history            Manage the commands history\n\
 icons              Set icons on/off\n\
 j                  The directory jumper function\n\
 kb, keybinds       Manage keybindings\n\
 ll, lv             Toggle long view mode\n\
 lm                 Set the light mode on/off\n\
 log                Manage your logs\n\
 media              (Un)mount storage devices\n\
 mf                 Limit the number of listed files\n\
 mm, mime           The resource opener\n\
 mp, mountpoints    Change to a mountpoint\n\
 msg, messages      Print system messages\n\
 n, new             Create new files\n\
 net                Manage network/remote resources\n\
 o, open            Open a file\n\
 oc                 Change files ownership interactively\n\
 ow                 Open a file with ...\n\
 opener             Set a custom resource opener\n\
 p, pr, pp, prop    Print file properties\n\
 path, cwd          Print the current working directory\n\
 pc                 Change files permissions interactively\n\
 pf, prof, profile  Manage profiles\n\
 pg, pager          Set the files pager on/off\n\
 pin                Pin a directory\n\
 prompt             Switch/edit prompt\n\
 q, quit, exit      Quit clifm\n\
 Q                  CD on quit\n\
 rf, refresh        Reprint the current list of files\n\
 rl, reload         Reload the main configuration file\n\
 rr                 Remove files in bulk\n\
 s, sel             Select files\n\
 sb, selbox         Access the Selection Box\n\
 splash             Print the splash screen\n\
 st, sort           Change files sorting order\n\
 stats              Print file statistics\n\
 t, tr, trash       Send files to the trash can\n\
 tag                Tag files\n\
 te                 Toggle the executable bit on files\n\
 tips               Print tips\n\
 u, undel, untrash  Restore trashed files\n\
 unpin              Unpin the currently pinned directory\n\
 v, paste sel       Copy selected files into the current directory\n\
 vv                 Copy and rename files at once\n\
 ver, version       Print version information\n\
 view               Preview files in the current directory\n\
 ws                 Switch workspaces\n\
 x, X               Launch a new instance of clifm\n"

#define CLIFM_KEYBOARD_SHORTCUTS "DEFAULT KEYBOARD SHORTCUTS:\n\n\
 Right, C-f    Accept the entire suggestion\n\
 M-Right, M-f  Accept the first suggested word\n\
 M-c           Clear the current command line buffer\n\
 M-q           Delete the last entered word\n\
 M-g           Toggle list directories first on/off\n\
 M-l           Toggle long/detail view mode on/off\n\
 M-.           Toggle hidden files on/off\n\
 M-,           Toggle list only directories on/off\n\
 M-m           List mountpoints\n\
 M-h           Show directory history\n\
 M-t           Clear messages\n\
 C-r           Refresh the screen\n\
 M-s           Open the Selection Box\n\
 M-a           Select all files in the current working directory\n\
 M-d           Deselect all selected files\n\
 M-r           Change to the root directory\n\
 M-e, Home     Change to the home directory\n\
 M-u, S-Up     Change to the parent directory\n\
 M-j, S-Left   Change to previous visited directory\n\
 M-k, S-Right  Change to next visited directory\n\
 M-o           Lock terminal\n\
 M-p           Change to pinned directory\n\
 M-v           Toggle prepend sudo\n\
 M-[1-4]       Switch to workspace 1-4\n\
 C-M-j         Change to first visited directory\n\
 C-M-k         Change to last visited directory\n\
 C-M-o         Switch to previous profile\n\
 C-M-p         Switch to next profile\n\
 C-M-a         Archive selected files\n\
 C-M-e         Export selected files\n\
 C-M-r         Rename selected files\n\
 C-M-d         Remove selected files\n\
 C-M-t         Trash selected files\n\
 C-M-u         Restore trashed files\n\
 C-M-b         Bookmark last selected file or directory\n\
 C-M-g         Open/change-into last selected file/directory\n\
 C-M-n         Move selected files into the current working directory\n\
 C-M-v         Copy selected files into the current working directory\n\
 C-M-l         Toggle max name length on/off\n\
 M-y           Toggle light mode on/off\n\
 M-z           Switch to previous sorting method\n\
 M-x           Switch to next sorting method\n\
 C-x           Launch a new instance\n\
 F1            Manual page\n\
 F2            Commands help\n\
 F3            Keybindings help\n\
 F6            Open the MIME list file\n\
 F7            Open the shotgun configuration file\n\
 F8            Open the current color scheme file\n\
 F9            Open the keybindings file\n\
 F10           Open the configuration file\n\
 F11           Open the bookmarks file\n\
 F12           Quit\n\n\
NOTE: C stands for Ctrl, S for Shift, and M for Meta (Alt key in \
most keyboards)\n"

#define HELP_END_NOTE "For a full description consult the manpage and/or the \
Wiki (https://github.com/leo-arch/clifm/wiki)."

#define ASCII_LOGO "\
                            _______     _ \n\
                           | ,---, |   | |\n\
                           | |   | |   | |\n\
                           | |   | |   | |\n\
                           | |   | |   | |\n\
                           | !___! !___! |\n\
                           `-------------'\n"

#define QUICK_HELP_HEADER "\
This is only a quick start guide. For more information and advanced tricks \n\
consult the manpage and/or the Wiki (https://github.com/leo-arch/clifm/wiki)\n\
For a brief description of available commands type 'cmd<TAB>'\n\
Help topics are also available: 'help <TAB>'"

#define QUICK_HELP_NAVIGATION "\
NAVIGATION\n\
----------\n\
/etc                     Change the current directory to '/etc'\n\
5                        Change to the directory whose ELN is 5\n\
b | Shift-left | Alt-j   Go back in the directory history list\n\
f | Shift-right | Alt-k  Go forth in the directory history list\n\
.. | Shift-up | Alt-u    Change to the parent directory\n\
bd media                 Change to the parent directory matching 'media'\n\
j <TAB> | dh <TAB>       Navigate the directory history list\n\
j xproj                  Jump to the best ranked directory matching 'xproj'\n\
bm | b:<TAB> | Alt-b     List bookmarks\n\
bm mybm | b:mybm         Change to the bookmark named 'mybm'\n\
ws2 | Alt-2              Switch to the second workspace\n\
mp                       Change to a mountpoint\n\
pin mydir                Pin the directory 'mydir'\n\
,                        Change to pinned directory\n\
x                        Run new instance in the current directory\n\
/*.pdf<TAB>              File-name filter: List all PDF files in the current directory\n\
=x<TAB>                  File-type filter: List all executable files in the current directory (1)\n\
@gzip<TAB>               MIME-type filter: List all gzip files in the current directory (1)\n\
view | Alt+-             Preview files in the current directory (requires fzf)\n\n\
(1) Run 'help file-filters' for more information"

#define QUICK_HELP_BASIC_OPERATIONS "\
BASIC FILE OPERATIONS\n\
---------------------\n\
myfile.txt          Open 'myfile.txt' with the default associated application\n\
myfile.txt vi       Open 'myfile.txt' with vi (also 'vi myfile.txt')\n\
12                  Open the file whose ELN is 12\n\
12&                 Open the file whose ELN is 12 in the background\n\
ow 10 | ow 10 <TAB> Choose opening application for the file whose ELN is 10\n\
p4                  Print the properties of the file whose ELN is 4\n\
/*.png              Search for files ending with .png in the current dir\n\
s *.c               Select all C files\n\
s 1-4 8 19-26       Select multiple files by ELN\n\
sb | s:<TAB>        List currently selected files\n\
ds | ds <TAB>       Deselect a few selected files\n\
ds * | Alt-d        Deselect all selected files\n\
bm add mydir mybm   Bookmark the directory named 'mydir' as 'mybm'\n\
bm del mybm         Remove the bookmark named 'mybm'\n\
tag --help          Learn about tagging files\n\
n myfile            Create a new file named 'myfile'\n\
n mydir/            Create a new directory named 'mydir'\n\
c sel               Copy selected files into the current directory (1)\n\
r sel               Remove all selected files (1)\n\
br sel              Bulk rename selected files (1)\n\
c 34 file_copy      Copy the file whose ELN is 34 as 'file_copy' in the CWD\n\
cr myfile           Copy 'myfile' to a remote location\n\
m 45 3              Move the file whose ELN is 45 to the dir whose ELN is 3\n\
m myfile.txt        Interactively rename 'myfile.txt'\n\
l myfile mylink     Create a symbolic link named 'mylink' pointing to 'myfile'\n\
le mylink           Edit the symbolic link 'mylink'\n\
oc myfile           Edit file ownership of the file 'myfile'\n\
pc myfile           Edit file properties of the file 'myfile'\n\
te *.sh             Toggle the executable bit on all .sh files\n\
t 12-18             Send the files whose ELN's are 12-18 to the trash can\n\
t del | t del <TAB> Permanently remove trashed files using a menu\n\
t empty             Empty the trash can\n\
u | u <TAB>         Undelete trashed files using a menu\n\
ac sel              Compress/archive selected files (1)\n\n\
(1) 's:' can be used instead of the 'sel' keyword"

#define QUICK_HELP_MISC "\
MISC\n\
----\n\
CMD --help     Get help for command CMD\n\
help <TAB>     List available help topics\n\
F1             Open the manpage\n\
ih             Run the interactive help plugin (requires fzf)\n\
ll | Alt-l     Toggle detail/long view mode\n\
hf | Alt-.     Toggle hidden files\n\
rf | Ctrl-l    Clear the screen (also Enter on empty line)\n\
config | F10   View/edit the configuration file\n\
mm edit | F6   Change default associated applications\n\
kb edit | F9   Edit keybindings\n\
view edit | F7 Change previewing applications\n\
mm info 12     Get MIME information for the file whose ELN is 12\n\
Alt-TAB        Toggle disk usage analyzer mode\n\
cs             Manage color schemes\n\
Right          Accept the entire suggestion\n\
Alt-f          Accept the first/next word of the current suggestion\n\
pf set test    Change to the profile named 'test'\n\
st size rev    Sort files by size in reverse order\n\
Alt-x | Alt-z  Change sort order\n\
media          (Un)mount storage devices\n\
net work       Mount the network resource named 'work'\n\
actions        List available actions/plugins\n\
icons on       Enable icons\n\
q | F12        I'm tired, quit\n\
Q              cd on quit (consult the manpage)"

#define ASCII_LOGO_BIG "\
     .okkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkd. \n\
    'kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkc\n\
    xkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk\n\
    xkkkkkc::::::::::::::::::dkkkkkkc:::::kkkkkk\n\
    xkkkkk'..................okkkkkk'.....kkkkkk\n\
    xkkkkk'..................okkkkkk'.....kkkkkk\n\
    xkkkkk'.....okkkkkk,.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....dkkkkkk;.....okkkkkk'.....kkkkkk\n\
    xkkkkk'.....coooooo'.....:llllll......kkkkkk\n\
    xkkkkk'...............................kkkkkk\n\
    xkkkkk'...............................kkkkkk\n\
    xkkkkklccccccccccccccccccccccccccccccckkkkkk\n\
    lkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkx\n\
     ;kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkc \n\
        :c::::::::::::::::::::::::::::::::::."

#define FREE_SOFTWARE "Excerpt from 'What is Free Software?', by Richard Stallman. \
Source: https://www.gnu.org/philosophy/free-sw.html\n \
\n\"'Free software' means software that respects users' freedom and \
community. Roughly, it means that the users have the freedom to run, \
copy, distribute, study, change and improve the software. Thus, 'free \
software' is a matter of liberty, not price. To understand the concept, \
you should think of 'free' as in 'free speech', not as in 'free beer'. \
We sometimes call it 'libre software', borrowing the French or Spanish \
word for 'free' as in freedom, to show we do not mean the software is \
gratis.\n\
\nWe campaign for these freedoms because everyone deserves them. With \
these freedoms, the users (both individually and collectively) control \
the program and what it does for them. When users don't control the \
program, we call it a 'nonfree' or proprietary program. The nonfree \
program controls the users, and the developer controls the program; \
this makes the program an instrument of unjust power. \n\
\nA program is free software if the program's users have the four \
essential freedoms:\n\n\
- The freedom to run the program as you wish, for any purpose \
(freedom 0).\n\
- The freedom to study how the program works, and change it so it does \
your computing as you wish (freedom 1). Access to the source code is a \
precondition for this.\n\
- The freedom to redistribute copies so you can help your neighbor \
(freedom 2).\n\
- The freedom to distribute copies of your modified versions to others \
(freedom 3). By doing this you can give the whole community a chance to \
benefit from your changes. Access to the source code is a precondition \
for this. \n\
\nA program is free software if it gives users adequately all of these \
freedoms. Otherwise, it is nonfree. While we can distinguish various \
nonfree distribution schemes in terms of how far they fall short of \
being free, we consider them all equally unethical [...]\""

/* Brief commands description */
#define AC_DESC      " (archive/compress files)"
#define ACD_DESC     " (set autocd on/off)"
#define ACTIONS_DESC " (manage actions/plugins)"
#define AD_DESC      " (dearchive/decompress files)"
#define ALIAS_DESC   " (manage aliases)"
#define AO_DESC      " (set auto-open on/off)"
#define B_DESC       " (go back in the directory history list)"
#define BD_DESC      " (change to a parent directory)"
#define BL_DESC      " (create symbolic links in bulk)"
#define BB_DESC      " (clean up non-ASCII file names)"
#define BM_DESC      " (manage bookmarks)"
#define BR_DESC      " (rename files in bulk)"
#define C_DESC       " (copy files)"
#define CD_DESC      " (change directory)"
#define CL_DESC      " (set columns on/off)"
#define CMD_DESC     " (jump to the COMMANDS section in the manpage)"
#define COLORS_DESC  " (print currently used file type colors)"
#define CONFIG_DESC  " (edit the main configuration file)"
#define CS_DESC      " (manage color schemes)"
#define CWD_DESC     " (print the current directory)"
#define D_DESC       " (duplicate files)"
#define DS_DESC      " (deselect files)"
#define EDIT_DESC    " (edit the main configuration file)"
#define EXP_DESC     " (export file names to a temporary file)"
#define EXT_DESC     " (set external/shell commands on/off)"
#define F_DESC       " (go forth in the directory history list)"
#define FC_DESC      " (set the files counter on/off)"
#define FF_DESC      " (set list-directories-first on/off)"
#define FS_DESC      " (what is free software?)"
#define FT_DESC      " (set a files filter)"
#define FZ_DESC      " (print directories full size - long view only)"
#define HF_DESC      " (set show-hidden-files on/off)"
#define HIST_DESC    " (manage the commands history)"
#define ICONS_DESC   " (set icons on/off)"
#define J_DESC       " (jump to a visited directory)"
#define KB_DESC      " (manage keybindings)"
#define L_DESC       " (create a symbolic link)"
#define LE_DESC      " (edit a symbolic link)"
#define LL_DESC      " (toggle long view)"
#define LM_DESC      " (set light mode on/off)"
#define LOG_DESC     " (manage logs)"
#define M_DESC       " (move files)"
#define MD_DESC      " (create directories)"
#define MEDIA_DESC   " (mount/unmount storage devices)"
#define MF_DESC      " (limit the number of listed files)"
#define MM_DESC      " (manage default opening applications)"
#define MP_DESC      " (change to a mountpoint)"
#define MSG_DESC     " (print system messages)"
#define N_DESC       " (create files)"
#define NET_DESC     " (manage remote resources)"
#define O_DESC       " (open file)"
#define OC_DESC      " (change files ownership)"
#define OPENER_DESC  " (set a custom resource opener)"
#define OW_DESC      " (open file with...)"
#define P_DESC       " (print files properties)"
#define PC_DESC      " (change files permissions)"
#define PF_DESC      " (manage profiles)"
#define PG_DESC      " (set the files pager on/off)"
#define PIN_DESC     " (pin a directory)"
#define PP_DESC      " (print files properties - with full directory size)"
#define PROMPT_DESC  " (switch/edit prompt)"
#define Q_DESC       " (quit)"
#define QU_DESC      " (exit - cd on quit)"
#define R_DESC       " (remove files)"
#define RF_DESC      " (reprint the current list of files)"
#define RL_DESC      " (reload the configuration file)"
#define RR_DESC      " (remove files in bulk)"
#define SB_DESC      " (access the selection box)"
#define SEL_DESC     " (select files)"
#define SPLASH_DESC  " (print the splash screen)"
#define ST_DESC      " (change files sorting order)"
#define STATS_DESC   " (print file statistics)"
#define TA_DESC      " (tag files as ...)"
#define TD_DESC      " (delete tags)"
#define TE_DESC      " (toggle the executable bit on files)"
#define TIPS_DESC    " (print tips)"
#define TL_DESC      " (list tags or tagged files)"
#define TM_DESC      " (rename tags)"
#define TN_DESC      " (create tags)"
#define TU_DESC      " (untag files)"
#define TY_DESC      " (merge tags)"
#define TRASH_DESC   " (trash files)"
#define U_DESC       " (restore trashed files using a menu)"
#define UNPIN_DESC   " (unpin the pinned directory)"
#define V_DESC       " (copy selected files here: v sel, or paste sel)"
#define VER_DESC     " (print version information)"
#define VIEW_DESC    " (preview files in the current directory)"
#define VV_DESC      " (copy and rename files in bulk at once)"
#define WS_DESC      " (switch workspaces)"
#define X_DESC       " (launch a new instance of clifm)"
#define XU_DESC      " (launch a new instance of clifm as root)"

#endif /* MESSAGES_H */
