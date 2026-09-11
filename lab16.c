#include<stdio.h>
struct employee{
  int id;
  char name[50];
  float salary;
  char department[50];
};
void inputemployee(struct employee *e)
{
  printf("enter emp id:");
  scanf("%d",&e->id);
  printf("enter emp name:");
  scanf("%49s",e->name);
  printf("enter emp salary:");
  scanf("%f",&e->salary);
  printf("enter emp department:");
  scanf("%49s",e->department);
  printf("\n employee details entered successfully\n");
      }
  void displayemployee(struct employee e)
      {
      printf("\n===employee details===\n");
      printf("emp id:%d\n",e.id);
      printf("name:%s\n",e.name);
      printf("salary:%f\n",e.salary);
      printf("department:%s\n",e.department);
      }
      void updateemployee(struct employee *e)
      {
        printf("\n===update employee details===\n");
        printf("enter new employee id:");
        scanf("%d",&e->id);
        printf("enter new emp name:");
        scanf("%49s",e->name);
        printf("enter new salary:");
        scanf("%f",&e->salary);
        printf("enter new department:");
        scanf("%s",e->department);
        printf("\nempolyee details updated successfully\n");
       }

int main()
{
  struct employee emp;
  int c;
  do{
  printf("\n====employee management system===\n");
  printf("1.input employee details\n");
  printf("2.display\n");
  printf("3.update\n");
  printf("4.exit\n");
  printf("enter your choice:");
  scanf("%d",&c);
  switch(c)
  {
    case 1:
      inputemployee(&emp);
      break;
    case 2:
      displayemployee(emp);
      break;
    case 3:
      updateemployee(&emp);
      break;
    case 4:
      printf("\nexit ");
      break;
    default:
      printf("\ninvalid choice\n");
  }
  }
  while(c!=4);
  return 0;
}
