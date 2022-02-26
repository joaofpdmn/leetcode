bool isPalindrome(int x){
    int resto, aux, original;
    long int reverso=0;
    if(x==11){
        return true;
    }
    if(x<0){
        return false;
    }
    original = x;
    while(x!=0){
        resto = x%10;
        x /= 10;
        reverso = reverso * 10 + resto;
    }
    if(reverso==original){
        return true;
    }
    return false;
}
