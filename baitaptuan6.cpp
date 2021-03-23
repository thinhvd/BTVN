//bai 1
void reverse(char *s){
	int count = 0;
	char *s2 = new char[50];
    while( (s+count) < (s+strlen(s)) )
    {
        *(s2+strlen(s) - 1 - count) = *(s + count);
        count++;
    }
    count=0;
    while( (s+count) < (s+strlen(s)) )
    {
        *(s+count)=*(s2+count);
        count++;
    }

}


// bai 2
void rFilter(char *s) {
    // Your code goes here
    char *last = s + strlen(s) - 1;
    while (last >= s && !('a' <= *(last) && *(last) <= 'z' || 'A' <= *(last) && *(last) <= 'Z'))
    {
        *(last) = '_';
        last--;
    }
}
