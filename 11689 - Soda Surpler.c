#include <stdio.h>
int main()
{
    int t,e,f,g,em_bottel,store,i,drink;
    scanf("%d", &t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %d %d", &e, &f ,&g);
        em_bottel=e+f;
        drink=0;
        while(em_bottel>=g)
        {
            drink+=(em_bottel/g);
            store=(em_bottel%g);
            em_bottel=(em_bottel/g)+store;
        }
        printf("%d\n",drink);
    }
    return 0;
}
