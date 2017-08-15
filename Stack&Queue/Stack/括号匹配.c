//∞¸¿®(){}[]»˝÷÷¿®∫≈
//

bool BracketCheck(char *str){
    InitStak(S);
    int i=0;
    while(str[i]!='\0'){
        switch(str[i]){

            case '(':Push(S,'(');break;
            case '[':Push(S,'[');break;
            case '{':Push(S,'{');break;

            case ')':Pop(S,e);
                if(e!='(')
                    return false;
            break;
            case ']':Pop(S,e);
                if(e!='(')
                    return false;
            break;
            case '}':Pop(S,e);
                if(e!='{')
                    return false;
            break;

            default:
                break;
        }
        i++;
    }
    if(!IsEmpty(S)){
        printf("¿®∫≈≤ª∆•≈‰\n");
        return false;
    }
    else{
        printf("¿®∫≈∆•≈‰\n");
        return true;
    }
}
