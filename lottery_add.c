#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int id;
    char name[10];
    int num;
    char type[10];
    int price;
    char is_the_lottery;
    char start_time[10];
    char stop_time[10];
    int confirm;
}lottery;
int add_to_file();
int main(int argc,char *argv[])
{
    lottery new_lottery;

    printf("请输入您要创建的彩票ID\n");
    scanf("%d", &new_lottery.id);
    
    printf("请输入彩票名称：\n");
    scanf("%s", &new_lottery.name);
    
    printf("请输入彩票数量：\n");
    scanf("%d", &new_lottery.num);

    printf("请输入彩票类型：\n");
    scanf("%s", &new_lottery.type);

    printf("请输入彩票的价格：\n");
    scanf("%d", &new_lottery.price);

    printf("请输入是否开奖：\n");
    scanf("%s", &new_lottery.is_the_lottery);

    printf("请输入开始时间：\n");
    scanf("%s", &new_lottery.start_time);

    printf("请输入结束时间:\n");
    scanf("%s", &new_lottery.stop_time);

    printf("您创建的彩票为：\n id:%d \n 名称：%s \n 数量：%d \n 类型：%s \n 价格：%d \n 开奖状态：%c \n 开始时间：%s \n 结束时间：%s \n 添加？确认：1\t取消：0\n", new_lottery.id, new_lottery.name, new_lottery.num, new_lottery.type, new_lottery.price, new_lottery.is_the_lottery, new_lottery.start_time, new_lottery.stop_time);
    scanf("%d",&new_lottery.confirm);
    if(new_lottery.confirm==1){
        printf("确认成功！");
    }
    else if(new_lottery.confirm == 0){
        printf("已取消");
    }
    return 0;
}