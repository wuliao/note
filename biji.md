# LINUX Ubuntu COMMAND

## commonly  used command
#### echo $PATH    //Deposit command of the path
#### which         // look up command path  " $which ls "
####
-------------------------------------------------------------------------------
###  make command easy
###example: " markdown biji.md > biji.html"  change mmm 
####   $vim mark.sh  
###    vim|markdown biji.md > biji.html     |
###       |firefox biji.html&               |
### --------------------------------------------------------------------------- ###       | markdown /home/wuliao/note/biji.md > /home/wuliao/note/biji.html
###         firefox /home/wuliao/note/biji.html&
''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
###        wirte absolute path can make command again another directory also effect
###       |  markdown /$HOME/note/biji.md > /$HOME/note/biji.html           |
###       | firefox /$HOME/note/biji.html&                                  |   
###       | (%s/\/home\/wuliao/$HOME/g) ;In the Vim replacement command     |   
###    $chmod +x biji.sh
###    $mv mark.sh /bin/mmm
---------------------------------------------------------------------------------------------------------------------------------------------------------------
# Git

## collaction method git script
###   file 'gitconefig' is git script
###   |$ mkdir gitconfib                        |
###   |$ vim gitconfig                          |
###   |  [core]                                 |
###   |         neditor = vim                   |
###   |  [alias]                                |
###   |         ci = commit -a -v               |
###   |         throw = reset --hard HEAD       |
###   |         throwh =reset --hard HEAD^      |
###   |  [user]                                 |                    
###   |          name = wuliao                  |
###   |       email = guoming2199@126.com       |

----------------------------------------------------------------------------
## Github
###    Generate publc-key(SSrm -rf .ssh/
###   | $ssh-keygen -t dsa                                    |
###   | $sudo apt-get install xclip                           |
###   | $cat /home/wuliao/.ssh/id_dsa.pub |xclip -sel clip    |
###   |---------------------------------------------------    |
###   alrady have SSH and have git director
###   | $cd cxisting_git_report                               |
###   | $git remote add origin git@github.com/wuliao/note.git |
###   | $git push origin master                               |
###   |-------------------------------------------------------|
###   generate SSH  then make dorector and so on 
###   | $mkdir note                                           |
###   | $cd note                                              |
###   | $git init                                             |
###   | $touch README                                         |
###   | $git add README                                       |
###   | $git commit -m 'first commit'                         |  
###   | $git remote add origin git@github.com:wuliao/note.git |
###   | $git push origin master                               |

-------------------------------------------------------------------------------
##git command
###
-------------------------------------------------------------------------------------------------------------------------------------------------------------
# VIM

