#include "TapQuoteAPI.h"
#include "TapAPIError.h"
#include "Quote.h"
#include "QuoteConfig.h"

#include <iostream>
#include <string.h>
#include <stdio.h>
#include<thread>
using namespace std;
TAPIUINT32 qq;
void ShowBuf(char* buf,int len)
{
    printf("===================\n");
        for(int i=0; i < len; ++i)
    {
        if(i%32==0){
            printf("\n");
        }
        printf("0x%x(%c) ", buf[i], buf[i]);
    }
    printf("===================\n");
}

int main(int argc, char* argv[])
{
	void omg();
	void omg2();
   /* //ȡ��API�İ汾��Ϣ
    cout << GetTapQuoteAPIVersion() << endl;

    //����APIʵ��
    TAPIINT32 iResult = TAPIERROR_SUCCEED;
    TapAPIApplicationInfo stAppInfo;
    strcpy(stAppInfo.AuthCode, DEFAULT_AUTHCODE);
	strcpy(stAppInfo.KeyOperationLogPath, "\\log");

    ITapQuoteAPI *pAPI = CreateTapQuoteAPI(&stAppInfo, iResult);
    if (NULL == pAPI){
            cout << "����APIʵ��ʧ�ܣ������룺" << iResult <<endl;
            return -1;
    }

    //�趨ITapQuoteAPINotify��ʵ���࣬�����첽��Ϣ�Ľ���
    Quote objQuote;
    pAPI->SetAPINotify(&objQuote);
	void omg();
	Quote *qq1;
    //�������ԣ���������
    objQuote.SetAPI(pAPI);
	objQuote.RunTest();
	qq1 = &objQuote;*/
	thread th2(omg2);
    thread th1(omg);
	th2.join();
	th1.join();
	//th1.swap(objQuote.RunTest);
	//objQuote.OnRspSubscribeQuote();
    return 0;
}
void omg()
{
	int i;
	for ( i = 0; i < 20; i++)
	{
		cout << i << endl;
	}
}
void omg2()
{
	//ȡ��API�İ汾��Ϣ
	cout << GetTapQuoteAPIVersion() << endl;

	//����APIʵ��
	TAPIINT32 iResult = TAPIERROR_SUCCEED;
	TapAPIApplicationInfo stAppInfo;
	strcpy(stAppInfo.AuthCode, DEFAULT_AUTHCODE);
	strcpy(stAppInfo.KeyOperationLogPath, "\\log");

	ITapQuoteAPI *pAPI = CreateTapQuoteAPI(&stAppInfo, iResult);
	if (NULL == pAPI) {
		cout << "����APIʵ��ʧ�ܣ������룺" << iResult << endl;
		//return -1;
	}

	//�趨ITapQuoteAPINotify��ʵ���࣬�����첽��Ϣ�Ľ���
	Quote objQuote;
	pAPI->SetAPINotify(&objQuote);
	void omg();
	Quote *qq1;
	//�������ԣ���������
	objQuote.SetAPI(pAPI);
	objQuote.RunTest();
	
}