#include <stdio.h>
int main () {

int bookid;
int duedate;
int returndate;
int rateupto7=20;
int rateupto14=50;
int ratemore15=100;
int finerate;


printf("enter book id");
scanf("%d",&bookid);

printf("enter duedate");
scanf("%d",&duedate);

printf("enter returndate");
scanf("%d",&returndate);
int overdue=returndate-duedate;
printf ("days overdue=%d\n",overdue);
if(overdue<=7)
finerate=printf("finerate=%d\n",rateupto7);
else if(overdue>7&&overdue<=14)
finerate=printf("finerate=%d\n",rateupto14);
else if(overdue>14)
finerate=printf("finerate=%d\n",ratemore15);
int fineamount=(finerate*overdue);
printf("fine amount=%d",fineamount);















 return 0;
 
}