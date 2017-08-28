//µİ¹éÇóÒÔº¢×ÓĞÖµÜÁ´±í´æ´¢µÄÊ÷Éî¶È


int Height(CSTree b){
    int hc,hs;
    if(!b)
        return 0;
    else{
        hc=Height(b->firstchild);
        hs=Height(b->nextsibling);
    if(hc+1>hs)
        return hc+1;
    else
        return hs;
    }
}
