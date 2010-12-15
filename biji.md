
# LINUX Ubuntu COMMAND 

## commonly  used command in bash under 
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
    sudo !!              // example input: "$apt-get install ggg" ,(it absence 'sudo')   then input "$sudo !!"  
                            '$sudo !!' = $sudo apt-get ingstall ggg
    ^ggg^tig^            // 'tig' replecment 'ggg'     
    ctrl +r              //find history command 
    

-------------------------------------------------------------------------------
##   make command easy
      example: " markdown biji.md > biji.html"  change mmm 
     ' mark.sh '   //it is command script under bash 
     $vim mark.sh  
     vim|markdown biji.md > biji.html     |
        |firefox biji.html&               |
      ----------------------------------------------------------------------------  
        | markdown /home/wuliao/note/biji.md > /home/wuliao/note/biji.html
        |  firefox /home/wuliao/note/biji.html&     
       -------------------------------------------
###  wirte absolute path can make command again another directory also effect
       |  markdown /$HOME/note/biji.md > /$HOME/note/biji.html           |
       | firefox /$HOME/note/biji.html&                                  |   
       | (%s/\/home\/wuliao/$HOME/g) ;In the Vim replacement command     |   
    $chmod +x biji.sh
    $mv mark.sh /bin/mmm
    
---------------------------------------------------------------------------------------------------------------------------------------------------------------
# Git

## collaction method git script
###   file '.gitconefig' is git script .how to configoration git script file
       |$ touch .gitconfib                        |
       |$ vim .gitconfig                          |
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
## git command
    $git reset --hard HEAD^      //delete the git version,but not recover 
    $git checkout commitnumber   //recovery of the previous version, but delete can recover
    $git branch     //see current master
    $git checkout master     //recover delete versoon 
-----------------------------------------------------------------------

# markdown
## 
-------------------------------------------------------------------------------------------------------------------------
##diff and patch 

-------------------------------------------------------------------------------------------------------------------------------------------------------------
# VIM

  
     $vimdiff filename filename     //compare two the content of the document
------------------------------------------------------------------------------------------------------------------------ 
### collaction method makefile  
    $vim makefile
      vim / all:                                 /
          /      gcc hello.c ...........         /
          /      ./a.out   ...........           /  
          / clean:                               /    
          /      a.out   .........               /  
  
### collaction method vim script 
      $vim .vimrc                        
        vim |runtime vimrc  ( connect to vimrc )   |
            vimrc /   
                  /  map ,cc :botrig ht cope<cr>   /
                  /  map ,cn :cn<cr>               /     **********more .vimrc content in my github "vim" director********                                     
                  /  map ,cp :cp<cr>               /

--------------------------------------------------------------------------------------------------------------------
### vim's command on nosert 
        :w                  //save
        :make               //create 
        :cwindow            //debug        |   :cn    //skip to next  error
        :cclose             //close debug window
      -------------------------------------------------------------------------
        set nu              //in vim show line number 
        :set +s =4          //set tab key is four blank
        :DOX                //code annotation
        :NeRDTreeTOGGle     //  insted of <,n>  .check list of file
        :cats               //
        :diffseave          // cached file with the disk of source file contrast
------------------------------------------------------------------------------------------------------------------
### vim shortcuts and orders
###     vim .c  file        
       ctrl +t    ;line indented
       ctrl +d    ;line indented
       shift +v &'<' or '>'  ; indented
       %             //matching '{' (nosert  press % key)
       shift +v & zf%   ;flod the selected content
       :zf%    ;flod the content by" { }"selected
       :zx     ;opean flod contenat
       :zc     ;close 
       :shfit +j  ;mergin two line
-----------------------------------------------------------------------------------------------------------------------------  
##   Gcc
###  

--------------------------------------------------------------------------------------------------------------------------
##  Gdb
### command 
     $gcc -g filename    //  -g : produce general debugging information
     $gcc -ggdb filename //   -ggdb :
     $gdb a.out          //  debugging 
        (gdb) f(file)    // specifice an executable file debugging
              l(list)    // list progran soruce 
              r(run)     // operation executable file 
              b(break point)  //  'b 4'  or 'b main:4'   , set break point
              c(continnue)   // go on
              p(print)        // 'p a'   printf function a , example : int a .  "(pdb)p a"  /printf a value
              n(next)        // don't enter a function call , step execution
              s(step)        // sigle-step executive into a function 
              q(quit)        // quit GDB 







\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
         

#  C
   
     i = *&i
     &             //taking the address symbole
     


