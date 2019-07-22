#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int dns()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	b = system("netsh interface ip set dns \"以太网\" source=static addr=114.114.114.114");
	c = system("netsh interface ip add dns \"以太网\" addr=8.8.8.8");
    a = system("ipconfig /flushdns");

   

	if (a != 0 && b != 0 && c != 0)
	{
		return 1;
	}
	else { return 0; }

	

}

int main()
{
	/*为了保存以前的代码思路及作品现在重新写一个一份*/
	/*目前只能适合于win10，如果想兼容 win7，请把以太网 换成 本地连接 就ok */
	int biaozhi = 0;
	system("color 0A");

    printf("你好欢迎来到小杨切网工具，祝您开心每一天\n");
    printf("请用管理员打开我");
	biaozhi = dns();
	if (biaozhi != 0)
	{
		printf("切换失败，请用管理员打开，或联系开发人员");
	}
	else
	{
		printf("切换成功！！！！！！！！！");

	}

	
	system("pause");
	return 0;
}
