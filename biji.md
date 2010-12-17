
# LINUX Ubuntu COMMAND 


## In zhe path in symbolic meaning
    ~          //the current user of your own home
    .          //the current path
    ..         //path above
    /          // root
    ~username   // the current user path under dir
------------------------------------------------------------------------------------------------------
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
    cp                   // copy conment
    mv                   //move file and chang filename
    find . -name 's*'  //find this file on the current director path
                       // <s*>  is begin by 's' \ <*s> is end by 's'  \ <*s*> mean contains 's'
      find / -name filename 再根目录里面搜索文件名为filename的文件
      find /etc -name *s*在目录里面搜索带有s的文件
      find /etc -name *S 在目录里面搜索以s结尾的文件
      find /etc -name s*在目录里面搜索以s开头的文件
      find / -amin -10在系统中搜索最后１０分钟访问的文件
      find / -atime -2查找在系统中最后４８小时访问的文件
      find / -empty 查找在系统中为空的文件或者是文件夹
      find / -group groupname 查找在系统中属于groupname的文件
      find / -mmin -5查找在系统中最后５分钟修改过的文件
      find / -mtime -1查找在系统中最后２４小时修改过的文件
      find /－nouser查找在系统中属于费用户的文件
      find / -user username 查找在系统中属于username的文件
      find / -ctime -1查找在系统中最后２４小时被改变状态的文件
      find / -fstype type查找在系统中文件类型为？的文件
      find / -user user１name -or -user
      user２name查找在系统中属于user1name或着属于user2name的文件
      find / -user user1name -and
      -user2name在系统中查找既属于user1name又属于user2name用户的文件
      more detailed find command <http://ycyk168.javaeye.com/blog/514575>
    which command        //find this command absolute path 
    grep [option] file  //the specific contents specifid file search"grep'printf'/user/include -R
    cw -c -w -l             //  statistical file bytes/words/lines number
    vimdiff file file      //compare two file
    sudo !!              // example input: "$apt-get install ggg" ,(it absence 'sudo')   then input "$sudo !!"  
                            '$sudo !!' = $sudo apt-get ingstall ggg
    ^ggg^tig^           // 'tig' replecment 'ggg'     
    ps                  //check process
    ps a                 //check terminal process including other process
    ps u                   //show process owner
    ps x                     //showed no ctronal terminal process
    ps aux |grep "() "       // is a u x combining 
    #jobs                    //display shell are runing what process
kill (PID)             //kill recep"tionist process
    kill -9 (PID)         // force kill    ditto "$kill -SIGKILL (PID)"
    fg (PID)             //the backstage process or hung up process into receptionist process
    bg (PID)                  //make hung up process into backstage execution    '$fg %2895'
    $tar zcf dir1.tar.gz dir1   // put dir1 pack dir1.tar.gz
    $tar tvf dir1.tar.gz            // see package content
    $tar zxf dir1.tar.gz       // unpack
    ctrl +r           //find history command 
    
------------------------------------------------------------------------------
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

## .gitconefig
###   collaction method git script
###     file '.gitconefig' is git script .how to configoration git script file
       |$ touch .gitconfib                       |
       |$ vim .gitconfig                         |
       |  [core]                                 |
       |         neditor = vim                   |
       |  [alias]                                |
       |         ci = commit -a -v               |
       |         throw = reset --hard HEAD       |
       |         throwh =reset --hard HEAD^      |  
       |  [user]                                 |                    
       |          name = wuliao                  |
       |       email = guoming2199@126.com       |

    -----------------------------------------------------------------------       
## .gitignore
###     cancellation git add files
          $vim .gitignore
`          write filename in the `.gitignore` file

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
###  get the new changes
     $cd dirname
     $git pull
-------------------------------------------------------------------------------
## git command
    $git reset --hard HEAD^      //delete the git version,but not recover 
    $git checkout commitnumber   //recovery of the previous version, but delete can recover
    $git branch     //see current master
    $git checkout master     //recover delete versoon 

----------------------------------------------------------------------------------------
## Tig
   
      $sudo apt-get install tig
      $cd dirname   
      $git init
      $patch filename
      $git add filename
      $git commit -a -m "first "
      $tig       ("d" in   /  "q"  quit)
-----------------------------------------------------------------------

## markdown

### how to use marksown
   $sudo apt-get install markdown
   $vim file.md
   $markdown file.md > file1.html
   $firefox file1.html&   ("&"  exeuction in backstage)

-------------------------------------------------------------------------------------------------------------------------
##diff and patch 
     $diff -u a b>ab.diff 
     $rm b
     $patch < ab.diff
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
        :DOX                //code annotation  "coding style"
        :NeRDTreeTOGGle     //  insted of <,n>  .check list of file
        :cats               //
        :diffseave          // cached file with the disk of source file contrast
------------------------------------------------------------------------------------------------------------------
### vim shortcuts and orders
###     vim .c  file        
       ctrl +t    ;line indented
       ctrl +d    ;line indented
       shift +v &'<' or '>'  ; indented
       xp         //to exchange two char
       rc         //change the char in example "mn' change "mj"cursor in 'n' on  ,then press key `rj`
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


------------------------------------------------------------------------------------------------------------------------
## vim of plug-in
  
###    ctags     ; with the file of the plugei
###          Tlist    ; use for navigation in the code class 、variabile and the function name but use it must use ctags maketags file
                       
           $ctags -R *    // -R :recarsion subdirectories , * :all dir
             tlist        //in vim on nosert write tlist , it will appear taglist famework

###    NERDTree Toggle   ;Navigation and open file (show the current file and with it)

###  OmniComplete     ;complement code
                    




\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
         

#  C
   
     i = *&i
     &             //taking the address symbole
     

 
