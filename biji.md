# LINUX Ubuntu COMMAND

## commonly  used command
    sudo apt-get install package
    sudo apt-get update
    history > filename  //save history command in cache
    echo $PATH        //Deposit command of the path
    which commane     // look up command path  " $which ls "
    chmod +x file      //change files permessions
    chmod 755 file    //ditto
    adduser newname   //add new other user
    su username       //change the current user
    file dirname      //check if the thing is a file or a director
    file filename     //.........................................
    rm -rf filename   //delate anything
    ls -l -a          // show the current path content
    touch filename    //ceate a new file 
    mkdir dirname     //create a new directory
    rmdir dirname     // delate a empty directory
    cd dirname        //switching the current directory '$cd ~':switching home
    pwd               // show current path
    cat file          // see file content
    more file           // see file content ,press any key to next screen when full screen
    less file            // ditto  but it see less
                         //press ctrl +c or 'q'  exit it
    head file            //show file content ten rows on the default "$head -5 fiel" show file fount five rows
    tail file            // ditto    but it is behand 
    cp                   // copy conent
    mv                   //move file and chang filename
    find .-name 'file*'  //find this file on the current director path
    which command        //find this command absolute path 
    greap [option] file  //the specific contents specifid file search"greap'printf'/user/include -R
    cw -c -w -l                //  statistical file bytes/words/lines number
    vimdiff file file         //compare two file
    
    

-------------------------------------------------------------------------------
##   make command easy
      example: " markdown biji.md > biji.html"  change mmm 
     $vim mark.sh  
     vim|markdown biji.md > biji.html     |
        |firefox biji.html&               |
 ------------------------------------------------                                                       | markdown /home/wuliao/note/biji.md > /home/wuliao/note/biji.html
       |  firefox /home/wuliao/note/biji.html&                                                       -------------------------------------------
###  wirte absolute path can make command again another directory also effect
       |  markdown /$HOME/note/biji.md > /$HOME/note/biji.html           |
       | firefox /$HOME/note/biji.html&                                  |   
       | (%s/\/home\/wuliao/$HOME/g) ;In the Vim replacement command     |   
    $chmod +x biji.sh
    $mv mark.sh /bin/mmm
    $
---------------------------------------------------------------------------------------------------------------------------------------------------------------
# Git

## collaction method git script
###   file 'gitconefig' is git script
       |$ mkdir gitconfib                        |
       |$ vim gitconfig                          |
       |  [core]                                 |
       |         neditor = vim                   |
       |  [alias]                                |
       |         ci = commit -a -v               |
       |         throw = reset --hard HEAD       |
       |         throwh =reset --hard HEAD^      |  
       |  [user]                                 |                    
       |          name = wuliao                  |
       |       email = guoming2199@126.com       |

----------------------------------------------------------------------------
## Github
###    Generate publc-key(SSrm -rf .ssh/
      | $ssh-keygen -t dsa                                    |
      | $sudo apt-get install xclip                           |
      | $cat /home/wuliao/.ssh/id_dsa.pub |xclip -sel clip    |
      |---------------------------------------------------    |
###   alrady have SSH and have git director
      | $cd cxisting_git_report                               |
      | $git remote add origin git@github.com/wuliao/note.git |
      | $git push origin master                               |
      |-------------------------------------------------------|
###   generate SSH  then make dorector and so on 
      | $mkdir note                                           |
      | $cd note                                              |
      | $git init                                             |
      | $touch README                                         |
      | $git add README                                       |
      | $git commit -m 'first commit'                         |  
      | $git remote add origin git@github.com:wuliao/note.git |
      | $git push origin master                               |

-------------------------------------------------------------------------------
##git command
###
-------------------------------------------------------------------------------------------------------------------------------------------------------------
# VIM

