const *codes="<h1>";
const *codes2="<h1>";
const *hello="Hello World."; 
char mem1[1025];
void strcpy(char *into,char *froms){
    int n=0;
    while(froms[n]!=0){
        into[n]=froms[n];
        n++;
    }
    into[n]=0;
}
void strcat(char *into,char *froms){
    int n=0;
    char *c;
    while(into[n]!=0){
        n++;
    }
    c=into+n;
    strcpy(c,froms);
    
}
const char* copys() {
    strcpy(mem1,codes);
    strcat(mem1,hello);
    strcat(mem1,codes2);
    return mem1;
}
