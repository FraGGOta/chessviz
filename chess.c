#include<stdio.h>

int main()
{
    printf(" |a|b|c|d|e|f|g|h|\n");
    printf("1|r|k|b|k|q|b|k|r|\n");
    printf("2|p|p|p|p|p|p|p|p|\n");
    
    for (int i = 0; i < 4; ++i) { 
	int r = i + 3;
	printf("%d| | | | | | | | |\n", r);
    }
    
    printf("7|P|P|P|P|P|P|P|P|\n");
    printf("8|R|K|B|K|Q|B|K|R|\n");
    return 0;
}
    