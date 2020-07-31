#ifndef _UFT4_APIDATATYPE_H_
#define _UFT4_APIDATATYPE_H_

//����������
//������
#define EXCHANGE_TYPE_SHFE	'S'
//֣����
#define EXCHANGE_TYPE_CZCE	'Z'
//������
#define EXCHANGE_TYPE_DCE		'D'
//�н���
#define EXCHANGE_TYPE_CFFEX	'J'
//�Ϻ���Դ��������
#define EXCHANGE_TYPE_SHETC	'N'

//�Ϻ�֤ȯ������ ��Ȩ
#define EXCHANGE_TYPE_SSEOPT	'H'
//�Ϻ�֤ȯ������
#define EXCHANGE_TYPE_SSE		'1'
//����֤ȯ������
#define EXCHANGE_TYPE_SZSE	'2'




typedef unsigned char     T_UFT_BYTE;
typedef unsigned short    T_UFT_WORD;
typedef unsigned long     T_UFT_DWORD;
typedef char              T_UFT_INT1;
typedef short             T_UFT_INT2;
typedef int               T_UFT_INT4;
typedef unsigned int      T_UFT_UINT4;
typedef float             T_UFT_REAL4;
typedef double            T_UFT_REAL8;
typedef char 			  T_UFT_CHAR;

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorIDType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcErrorIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriorityType��һ������Ȩ����
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcPriorityType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSettlementIDType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcSettlementIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMonthCountType��һ���·���������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMonthCountType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingSegmentSNType��һ�����׽׶α������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcTradingSegmentSNType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPeriodIDType��һ��ʱ��׶α������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcPeriodIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeSortIDType��һ����ʱ���Ŷӵ��������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcTimeSortIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcFrontIDType��һ��ǰ�ñ������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcFrontIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSessionIDType��һ���Ự�������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcSessionIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSequenceNoType��һ�����к�����
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcSequenceNoType;

/////////////////////////////////////////////////////////////////////////
///TFtdcBulletinIDType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcBulletinIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInformationIDType��һ����Ϣ�������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcInformationIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMillisecType��һ��ʱ�䣨���룩����
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMillisecType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeMultipleType��һ����Լ������������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcVolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcImplyLevelType��һ��������������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcImplyLevelType;

/////////////////////////////////////////////////////////////////////////
///TFtdcStartPosType��һ����ʼλ������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcStartPosType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDataCenterIDType��һ���������Ĵ�������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcDataCenterIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCommFluxType��һ��ͨѶ������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcCommFluxType;

/////////////////////////////////////////////////////////////////////////
///TFtdcAliasType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAliasType[3];

/////////////////////////////////////////////////////////////////////////
///TFtdcOriginalTextType��һ��ԭ������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOriginalTextType[3];

/////////////////////////////////////////////////////////////////////////
///TFtdcParticipantIDType��һ����Ա��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcParticipantIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcParticipantNameType��һ����Ա��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcParticipantNameType[51];

/////////////////////////////////////////////////////////////////////////
///TFtdcParticipantAbbrType��һ����Ա�������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcParticipantAbbrType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcUserIDType��һ�������û���������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcUserIDType[16];

/////////////////////////////////////////////////////////////////////////
///TFtdcPasswordType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcPasswordType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcClientIDType��һ���ͻ���������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcClientIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentIDType��һ����Լ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcInstrumentIDType[31];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductIDType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductNameType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductNameType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcExchangeIDType��һ����������������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcExchangeIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcDateType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcDateType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeType��һ��ʱ������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcTimeType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentNameType��һ����Լ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcInstrumentNameType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductGroupIDType��һ����Ʒ���������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductGroupNameType��һ����Ʒ����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductGroupNameType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcMarketIDType��һ���г���������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcMarketIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcSettlementGroupIDType��һ���������������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcSettlementGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderSysIDType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOrderSysIDType[17];

/////////////////////////////////////////////////////////////////////////
///TFtdcOTCOrderSysIDType��һ��OTC�����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOTCOrderSysIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcExecOrderSysIDType��һ��ִ������ϵͳ�������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcExecOrderSysIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcQuoteSysIDType��һ�����۱������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcQuoteSysIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradeIDType��һ���ɽ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcTradeIDType[17];

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderLocalIDType��һ�����ر����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOrderLocalIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcComeFromType��һ����Ϣ��Դ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcComeFromType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcAccountIDType��һ���ʽ��ʺ�����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAccountIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcNewsTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcNewsTypeType[3];

/////////////////////////////////////////////////////////////////////////
///TFtdcAdvanceMonthType��һ����ǰ�·�����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAdvanceMonthType[4];

/////////////////////////////////////////////////////////////////////////
///TFtdcCommodityIDType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCommodityIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcIPAddressType��һ��IP��ַ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIPAddressType[16];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductInfoType��һ����Ʒ��Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductInfoType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcProtocolInfoType��һ��Э����Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProtocolInfoType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcBusinessUnitType��һ��ҵ��Ԫ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcBusinessUnitType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingSystemNameType��һ������ϵͳ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcTradingSystemNameType[61];

/////////////////////////////////////////////////////////////////////////
///TFtdcDeliveryModeType��һ�����ʽ����
/////////////////////////////////////////////////////////////////////////
///�޽���
#define UFT_FTDC_DM_None '0'
///�ֽ𽻸�
#define UFT_FTDC_DM_CashDeliv '1'
///ʵ�ｻ��
#define UFT_FTDC_DM_CommodityDeliv '2'

typedef char T_UFT_FtdcDeliveryModeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingRoleType��һ�����׽�ɫ����
/////////////////////////////////////////////////////////////////////////
///����
#define UFT_FTDC_ER_Broker '1'
///��Ӫ
#define UFT_FTDC_ER_Host '2'

typedef char T_UFT_FtdcTradingRoleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUserTypeType��һ�������û���������
/////////////////////////////////////////////////////////////////////////
///����Ա
#define UFT_FTDC_UT_Trader '1'
///���׿���Ա
#define UFT_FTDC_UT_TradeManager '2'
///�������û�
#define UFT_FTDC_UT_MDUser '3'
///����Ȩ����Ա
#define UFT_FTDC_UT_SingleTrader '4'
///��������û�
#define UFT_FTDC_UT_MDProxyUser '5'

typedef char T_UFT_FtdcUserTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcProductClassType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
///�ڻ�
#define UFT_FTDC_PC_Futures '1'
///��Ȩ
#define UFT_FTDC_PC_Options '2'
///���
#define UFT_FTDC_PC_Combination '3'
///����
#define UFT_FTDC_PC_Spot '4'
///��ת��
#define UFT_FTDC_PC_EFP '5'

typedef char T_UFT_FtdcProductClassType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOptionsTypeType��һ����Ȩ��������
/////////////////////////////////////////////////////////////////////////
///����Ȩ
#define UFT_FTDC_OT_NotOptions '0'
///����
#define UFT_FTDC_OT_CallOptions '1'
///����
#define UFT_FTDC_OT_PutOptions '2'

typedef char T_UFT_FtdcOptionsTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentStatusType��һ����Լ����״̬����
/////////////////////////////////////////////////////////////////////////
///����ǰ
#define UFT_FTDC_IS_BeforeTrading '0'
///�ǽ���
#define UFT_FTDC_IS_NoTrading '1'
///��������
#define UFT_FTDC_IS_Continous '2'
///���Ͼ��۱���
#define UFT_FTDC_IS_AuctionOrdering '3'
///���Ͼ��ۼ۸�ƽ��
#define UFT_FTDC_IS_AuctionBalance '4'
///���Ͼ��۴��
#define UFT_FTDC_IS_AuctionMatch '5'
///����
#define UFT_FTDC_IS_Closed '6'
///����ҵ����
#define UFT_FTDC_IS_TransactionProcessing '7'


// ϵͳ״̬(DCE)
#define UFT_ES_INITING          '0'	          //��ʼ������׼����
#define	UFT_ES_INITED           '1'	          //��ʼ������׼�����
#define	UFT_ES_LOADED           '2'	          //��ʼ�����ݼ������
#define	UFT_ES_OPEN             '3'	          //����
#define	UFT_ES_PAUSE            '4'	          //��ͣ
#define	UFT_ES_CLOSE            '5'	          //����
#define	UFT_ES_CLOSEDEALING     '6'	          //���к�����
#define	UFT_ES_CLOSEDEALED      '7'          //���к������
#define	UFT_ES_CLEARING         '8'	          //������
#define	UFT_ES_CLEARED          '9'	          //�������



typedef char T_UFT_FtdcInstrumentStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDirectionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///��
#define UFT_FTDC_D_Buy '0'
///��
#define UFT_FTDC_D_Sell '1'

typedef char T_UFT_FtdcDirectionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPositionTypeType��һ���ֲ���������
/////////////////////////////////////////////////////////////////////////
///���ֲ�
#define UFT_FTDC_PT_Net '1'
///�ۺϳֲ�
#define UFT_FTDC_PT_Gross '2'

typedef char T_UFT_FtdcPositionTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPosiDirectionType��һ���ֲֶ�շ�������
/////////////////////////////////////////////////////////////////////////
///��
#define UFT_FTDC_PD_Net '1'
///��ͷ
#define UFT_FTDC_PD_Long '2'
///��ͷ
#define UFT_FTDC_PD_Short '3'

typedef char T_UFT_FtdcPosiDirectionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExchangeDataSyncStatusType��һ������������ͬ��״̬����
/////////////////////////////////////////////////////////////////////////
///δͬ��
#define UFT_FTDC_EDS_Asynchronous '1'
///ͬ����
#define UFT_FTDC_EDS_Synchronizing '2'
///��ͬ��
#define UFT_FTDC_EDS_Synchronized '3'

typedef char T_UFT_FtdcExchangeDataSyncStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSGDataSyncStatusType��һ������������ͬ��״̬����
/////////////////////////////////////////////////////////////////////////
///δͬ��
#define UFT_FTDC_SGDS_Asynchronous '1'
///ͬ����
#define UFT_FTDC_SGDS_Synchronizing '2'
///��ͬ��
#define UFT_FTDC_SGDS_Synchronized '3'

typedef char T_UFT_FtdcSGDataSyncStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcHedgeFlagType��һ��Ͷ���ױ���־����
/////////////////////////////////////////////////////////////////////////
///Ͷ��
#define UFT_FTDC_HF_Speculation '1'
///����
#define UFT_FTDC_HF_Arbitrage '2'
///�ױ�
#define UFT_FTDC_HF_Hedge '3'
///������
#define UFT_FTDC_HF_MarketMaker '4'

typedef char T_UFT_FtdcHedgeFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcClientTypeType��һ���ͻ���������
/////////////////////////////////////////////////////////////////////////
///��Ȼ��
#define UFT_FTDC_CT_Person '0'
///����
#define UFT_FTDC_CT_Company '1'
///Ͷ�ʻ���
#define UFT_FTDC_CT_Fund '2'

typedef char T_UFT_FtdcClientTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInstStatusEnterReasonType��һ��Ʒ�ֽ��뽻��״̬ԭ������
/////////////////////////////////////////////////////////////////////////
///�Զ��л�
#define UFT_FTDC_IER_Automatic '1'
///�ֶ��л�
#define UFT_FTDC_IER_Manual '2'
///�۶�
#define UFT_FTDC_IER_Fuse '3'
///�۶��ֶ�
#define UFT_FTDC_IER_FuseManual '4'

typedef char T_UFT_FtdcInstStatusEnterReasonType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderBs��һ�������۸���������
/////////////////////////////////////////////////////////////////////////
//֤ȯ
//��
#define UFT_FTDC_SECU_BUY  '1' 
//��
#define UFT_FTDC_SECU_SELL  '2'
//��Ȩ
///����
#define UFT_FTDC_OPT_K '0'
///ƽ��
#define UFT_FTDC_OPT_P '1'
typedef char T_UFT_FtdcOrderBs;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderPriceTypeType��һ�������۸���������
/////////////////////////////////////////////////////////////////////////
//֤ȯ
//ί������'0'�޼�ί�У�
//'1'�������ţ�
//'2'���ַ�����ʣ��ת�޼ۣ�
//'3'�м������ɽ�ʣ�೷����
//'4'�м�ȫ��ɽ�������
//'5'�м������嵵ȫ��ɽ�ʣ�೷��
#define UFT_FTDC_SECU_0  '0' 
#define UFT_FTDC_SECU_1  '1'
#define UFT_FTDC_SECU_2  '2'
#define UFT_FTDC_SECU_3  '3'
#define UFT_FTDC_SECU_4  '4'
#define UFT_FTDC_SECU_5  '5'


//��Ȩ
///�����/�м�
#define UFT_FTDC_OPT_AnyPrice '1'
///�޼�
#define UFT_FTDC_OPT_LimitPrice '2'
///���ż�
#define UFT_FTDC_OPT_BestPrice '3'
///5����
#define UFT_FTDC_OPT_FiveLevelPrice '4'

//'K' =�м�ʣ��ת�޼�(��Ȩ)
#define UFT_FTDC_OPT_Market2Limit '5'

//��ȨOrderType
#define UFT_SSEOPT_MARKETPRICE '1'
#define UFT_SSEOPT_LIMITPRICE '2'
#define UFT_SSEOPT_MARKET2LIMIT 'K'


typedef char T_UFT_FtdcOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOffsetFlagType��һ����ƽ��־����
/////////////////////////////////////////////////////////////////////////
///����
#define UFT_FTDC_OF_Open '0'
///ƽ��
#define UFT_FTDC_OF_Close '1'
///ǿƽ
#define UFT_FTDC_OF_ForceClose '2'
///ƽ��
#define UFT_FTDC_OF_CloseToday '3'
///ƽ��
#define UFT_FTDC_OF_CloseYesterday '4'

//ǿ��
#define UFT_UFTDC_OF_ForceMinus '5'

typedef char T_UFT_FtdcOffsetFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcForceCloseReasonType��һ��ǿƽԭ������
/////////////////////////////////////////////////////////////////////////
///��ǿƽ
#define UFT_FTDC_FCC_NotForceClose '0'
///�ʽ���
#define UFT_FTDC_FCC_LackDeposit '1'
///�ͻ�����
#define UFT_FTDC_FCC_ClientOverPositionLimit '2'
///��Ա����
#define UFT_FTDC_FCC_MemberOverPositionLimit '3'
///�ֲַ�������
#define UFT_FTDC_FCC_NotMultiple '4'
///Υ��
#define UFT_FTDC_FCC_Violation '5'
///����
#define UFT_FTDC_FCC_Other '6'
///��Ȼ���ٽ�����
#define UFT_FTDC_FCC_PersonDeliv '7'
///�ͻ��ױ�����
#define UFT_FTDC_FCC_HedgeOverPositionLimit '8'

typedef char T_UFT_FtdcForceCloseReasonType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderStatusType��һ������״̬����
/////////////////////////////////////////////////////////////////////////
///ȫ���ɽ�
#define UFT_FTDC_OST_AllTraded '0'
///���ֳɽ����ڶ�����
#define UFT_FTDC_OST_PartTradedQueueing '1'
///���ֳɽ����ڶ�����
#define UFT_FTDC_OST_PartTradedNotQueueing '2'
///δ�ɽ����ڶ�����
#define UFT_FTDC_OST_NoTradeQueueing '3'
///δ�ɽ����ڶ�����
#define UFT_FTDC_OST_NoTradeNotQueueing '4'
///����
#define UFT_FTDC_OST_Canceled '5'
///�ϵ�
#define UFT_FTDC_OST_Invalid 'f'
///���ֳɽ��ѳ�
#define UFT_FTDC_OST_PartTraded_Canceled 'g'
///δ��
#define UFT_FTDC_OST_Not_Send 'n'
///�������ѽ���
#define UFT_FTDC_OST_Received 'r'

typedef char T_UFT_FtdcOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
///����
#define UFT_FTDC_ORDT_Normal '0'
///��������
#define UFT_FTDC_ORDT_DeriveFromQuote '1'
///�������
#define UFT_FTDC_ORDT_DeriveFromCombination '2'

typedef char T_UFT_FtdcOrderTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOTCOrderStatusType��һ��OTC����״̬����
/////////////////////////////////////////////////////////////////////////
///һ������
#define UFT_FTDC_OOS_Inputed '0'
///�Ѿ�ȷ��
#define UFT_FTDC_OOS_Confirmed '1'
///�Ѿ�����
#define UFT_FTDC_OOS_Canceled '2'
///�Ѿ��ܾ�
#define UFT_FTDC_OOS_Refused '3'

typedef char T_UFT_FtdcOTCOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeConditionType��һ����Ч����������
/////////////////////////////////////////////////////////////////////////
///������ɣ�������
#define UFT_FTDC_TC_IOC '1'
///������Ч
#define UFT_FTDC_TC_GFS '2'
///������Ч
#define UFT_FTDC_TC_GFD '3'
///ָ������ǰ��Ч
#define UFT_FTDC_TC_GTD '4'
///����ǰ��Ч
#define UFT_FTDC_TC_GTC '5'
///���Ͼ�����Ч
#define UFT_FTDC_TC_GFA '6'

///��Ӧ��ȨTimInForce///
///GFD, ������Ч
#define UFT_SSEOPT_OPT_GFD '0'

///IOC, ��ʱ�ɽ�ʣ���Զ�����
#define UFT_SSEOPT_OPT_IOC '3'

///FOK, ��ʱȫ���ɽ�������
#define UFT_SSEOPT_OPT_FOK '4'


typedef char T_UFT_FtdcTimeConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeConditionType��һ���ɽ�����������
/////////////////////////////////////////////////////////////////////////
///�κ�����
#define UFT_FTDC_VC_AV '1'
///��С����
#define UFT_FTDC_VC_MV '2'
///ȫ������
#define UFT_FTDC_VC_CV '3'

typedef char T_UFT_FtdcVolumeConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcContingentConditionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///����
#define UFT_FTDC_CC_Immediately '1'
///ֹ��
#define UFT_FTDC_CC_Touch '2'

typedef char T_UFT_FtdcContingentConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcActionFlagType��һ��������־����
/////////////////////////////////////////////////////////////////////////
///ɾ��
#define UFT_FTDC_AF_Delete '0'
///����
#define UFT_FTDC_AF_Suspend '1'
///����
#define UFT_FTDC_AF_Active '2'
///�޸�
#define UFT_FTDC_AF_Modify '3'

typedef char T_UFT_FtdcActionFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderSourceType��һ��������Դ����
/////////////////////////////////////////////////////////////////////////
///���Բ�����
#define UFT_FTDC_OSRC_Participant '0'
///���Թ���Ա
#define UFT_FTDC_OSRC_Administrator '1'

typedef char T_UFT_FtdcOrderSourceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradeTypeType��һ���ɽ���������
/////////////////////////////////////////////////////////////////////////
///��ͨ�ɽ�
#define UFT_FTDC_TRDT_Common '0'
///��Ȩִ��
#define UFT_FTDC_TRDT_OptionsExecution '1'
///OTC�ɽ�
#define UFT_FTDC_TRDT_OTC '2'
///��ת�������ɽ�
#define UFT_FTDC_TRDT_EFPDerived '3'
///��������ɽ�
#define UFT_FTDC_TRDT_CombinationDerived '4'

typedef char T_UFT_FtdcTradeTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceSourceType��һ���ɽ�����Դ����
/////////////////////////////////////////////////////////////////////////
///ǰ�ɽ���
#define UFT_FTDC_PSRC_LastPrice '0'
///��ί�м�
#define UFT_FTDC_PSRC_Buy '1'
///��ί�м�
#define UFT_FTDC_PSRC_Sell '2'

typedef char T_UFT_FtdcPriceSourceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcAccountStatusType��һ���ʻ�״̬����
/////////////////////////////////////////////////////////////////////////
///����״̬
#define UFT_FTDC_ACCS_Enable '0'
///ֹͣ״̬
#define UFT_FTDC_ACCS_Disable '1'

typedef char T_UFT_FtdcAccountStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMemberTypeType��һ����Ա��������
/////////////////////////////////////////////////////////////////////////
///���׻�Ա
#define UFT_FTDC_MT_Trading '0'
///�����Ա
#define UFT_FTDC_MT_Settlement '1'
///�ۺϻ�Ա
#define UFT_FTDC_MT_Compositive '2'

typedef char T_UFT_FtdcMemberTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExecResultType��һ��ִ�н������
/////////////////////////////////////////////////////////////////////////
///û��ִ��
#define UFT_FTDC_OER_NoExec 'n'
///�Ѿ�ȡ��
#define UFT_FTDC_OER_Canceled 'c'
///ִ�гɹ�
#define UFT_FTDC_OER_OK '0'
///��Ȩ�ֲֲ���
#define UFT_FTDC_OER_NoPosition '1'
///�ʽ𲻹�
#define UFT_FTDC_OER_NoDeposit '2'
///��Ա������
#define UFT_FTDC_OER_NoParticipant '3'
///�ͻ�������
#define UFT_FTDC_OER_NoClient '4'
///��Լ������
#define UFT_FTDC_OER_NoInstrument '6'
///û��ִ��Ȩ��
#define UFT_FTDC_OER_NoRight '7'
///������������
#define UFT_FTDC_OER_InvalidVolume '8'
///û���㹻����ʷ�ɽ�
#define UFT_FTDC_OER_NoEnoughHistoryTrade '9'

typedef char T_UFT_FtdcExecResultType;

/////////////////////////////////////////////////////////////////////////
///TFtdcYearType��һ���������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcYearType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMonthType��һ���·�����
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMonthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLegMultipleType��һ�����ȳ�������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcLegMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLegIDType��һ�����ȱ������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcLegIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcBoolType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcBoolType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUserActiveType��һ������Ա��Ծ�������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcUserActiveType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceType��һ���۸�����
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcPriceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUnderlyingMultipleType��һ����Լ������Ʒ��������
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcUnderlyingMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCombOffsetFlagType��һ����Ͽ�ƽ��־����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCombOffsetFlagType[5];

/////////////////////////////////////////////////////////////////////////
///TFtdcCombHedgeFlagType��һ�����Ͷ���ױ���־����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCombHedgeFlagType[5];

/////////////////////////////////////////////////////////////////////////
///TFtdcRatioType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcRatioType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMoneyType��һ���ʽ�����
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcMoneyType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLargeVolumeType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcLargeVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcNewsUrgencyType��һ�������̶�����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcNewsUrgencyType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSequenceSeriesType��һ������ϵ�к�����
/////////////////////////////////////////////////////////////////////////
typedef short T_UFT_FtdcSequenceSeriesType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCommPhaseNoType��һ��ͨѶʱ�κ�����
/////////////////////////////////////////////////////////////////////////
typedef short T_UFT_FtdcCommPhaseNoType;

/////////////////////////////////////////////////////////////////////////
///TFtdcContentLengthType��һ�����ĳ�������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcContentLengthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorMsgType��һ��������Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcErrorMsgType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcAbstractType��һ����ϢժҪ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAbstractType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcContentType��һ����Ϣ��������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcContentType[501];

/////////////////////////////////////////////////////////////////////////
///TFtdcURLLinkType��һ��WEB��ַ����
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcURLLinkType[201];

/////////////////////////////////////////////////////////////////////////
///TFtdcIdentifiedCardNoType��һ��֤����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIdentifiedCardNoType[51];

/////////////////////////////////////////////////////////////////////////
///TFtdcIdentifiedCardNoV1Type��һ��ԭ֤����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIdentifiedCardNoV1Type[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcPartyNameType��һ����������������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcPartyNameType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcIdCardTypeType��һ��֤����������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIdCardTypeType[16];


/////////////////////////////////////////////////////////////////////////
///TFtdcAdminOrderCommandFlagType��һ����������ָ������
/////////////////////////////////////////////////////////////////////////
///���Ϲ�ĳֲ�ǿƽ
#define UFT_FTDC_AOC_InvalidPositionForceClose '1'
///��ʼ�����׻�Ա�����޶�
#define UFT_FTDC_AOC_InitCreditLimit '2'
///�������׻�Ա�����޶�
#define UFT_FTDC_AOC_AlterCreditLimit '3'
///ȡ�����׻�Ա�����޶�
#define UFT_FTDC_AOC_CancelCreditLimit '4'

typedef char T_UFT_FtdcAdminOrderCommandFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCurrencyIDType��һ�����ִ�������
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCurrencyIDType[4];


/////////////////////////////////////////////////////////////////////////
///TFtdcBusinessLocalIDType��һ������ҵ���ʶ����
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcBusinessLocalIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSessionTypeType��һ���Ự��������
/////////////////////////////////////////////////////////////////////////
///����
#define UFT_FTDC_SESSION_Trade 'T'
///����
#define UFT_FTDC_SESSION_Md 'M'

typedef char T_UFT_FtdcSessionTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcRateUnitType��һ����㽻�׵�λ����
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcRateUnitType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExRatePriceType��һ�������м������
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcExRatePriceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMeasureSecType��һ��������������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMeasureSecType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMeasureUsecType��һ������΢��������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMeasureUsecType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDepthType��һ���������
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcDepthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSessionStatusType��һ���Ự״̬����
/////////////////////////////////////////////////////////////////////////
///������
#define UFT_FTDC_SESSIONSTATUS_Connected '0'
///�Ͽ�
#define UFT_FTDC_SESSIONSTATUS_DisConnected '1'

typedef char T_UFT_FtdcSessionStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExecOrderPositionFlagType��һ����Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı������
/////////////////////////////////////////////////////////////////////////
///����
#define UFT_FTDC_EOPF_Reserve '0'
///������
#define UFT_FTDC_EOPF_UnReserve '1'

typedef char T_UFT_FtdcExecOrderPositionFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExecOrderCloseFlagType��һ����Ȩ��Ȩ���Ƿ��Զ�ƽ������
/////////////////////////////////////////////////////////////////////////
///�Զ�ƽ��
#define UFT_FTDC_EOCF_AutoClose '0'
///�����Զ�ƽ��
#define UFT_FTDC_EOCF_NotToClose '1'

typedef char T_UFT_FtdcExecOrderCloseFlagType;

typedef int T_UFT_ErrorIDType;
typedef char T_UFT_ErrorMsgType[81];

typedef uint64_t T_UFT_ORDERREF_TYPE;
typedef int      T_UFT_TRADEDATE_TYPE;

//������

//��������ʧ��
#define UFT_ERROR_ID_NET_CONNECTION_FAIL			-1			

//δ�������󳬹�������
#define UFT_ERROR_ID_UNPROCESSREQ_EXCEEDLIMITED		-2	

//ÿ�뷢������������������
#define UFT_ERROR_ID_REQNUM_EXCEEDLIMITED			-3

//��Լ���벻����
#define UFT_ERROR_ID_CODE_NOT_EXIST					-4

//�۸񳬹��ǵ�ͣ�۷�Χ
#define UFT_ERROR_ID_PRICE_ERROR					-5

//�����ʽ𲻹�
#define UFT_ERROR_ID_MARGIN_NOTENOUGH				-6

//ƽ�ֲ�λ����
#define UFT_ERROR_ID_POSITIONTODAY_NOTENOUGH		-7

#define UFT_ERROR_ID_POSITIONY_NOTENOUGH			-8

//����������
#define UFT_ERROR_ID_ENTRUST_NOT_EXIST				-9

//�������ɳ�
#define UFT_ERROR_ID_ENTRUST_CANNOT_CANCEL			-10


// δ֪����
#define UFT_ERR_UNKNOWN_REQ							-100

// �ʽ��˺Ŵ���
#define UFT_ERR_FUND_ACCOUNT						-101

// �������
#define UFT_ERR_PASSWORD							-102

// �ѵ�¼
#define UFT_ERR_ALREADY_LOGGED_ON					-103

// �����ļ���
#define UFT_ERR_PWSSWD_FILE_DESTROY					-104

// û��Ȩ��
#define UFT_ERR_PERMISSION_DENIED					-105


// �û�������
#define UFT_ERR_USER_UNEXIST						-106

//��ȡ�����ڵ�ʧ��
#define UFT_ERR_GET_ENTRUST_ITEM                    -107

// �û�״̬����ȷ
#define UFT_ERR_USER_STATUS							-108

// ��������Ч
#define UFT_ERR_NEW_PASSWD_INVALID					-109

// �û�������
#define UFT_ERR_USER_UNEXIST					-106

// ������Ƿ�
#define UFT_ERR_INVALID_MSG							-111

// ί�дﵽ����
#define UFT_ERR_ENTRUST_CEILING					-112


// ��¼�������յ��ỰID��������ֵ
#define UFT_ERR_SESSION_ID							-113

// Ͷ���ױ���־����ȷ
#define UFT_ERR_HEDGE_FLAG							-114

// û������Ͷ���ױ���ʶ��Ӧ�Ľ��ױ��룬����������!
#define UFT_ERR_HEDGE_FUTUACCOUNT					-115

// ÿ�뱨��������������ֵ
#define UFT_ERR_ORDER_LIMIT							-116

//API INI����, OK
#define UFT_API_INIT_ERR_OK 0
//API ini����, sockͨѶ����
#define UFT_API_INIT_ERR_CONNFAILED	-1
//�˺Ÿ�ʽ����
#define UFT_API_INIT_ERR_ACCOUNT_FMT	-2
//�ͻ��˽���ģʽ�����˲�ƥ�����
#define UFT_API_INIT_ERR_MODE -3
//����˷��ش���
#define UFT_API_INIT_ERR_SERVER -4
//��¼ʧ��
#define UFT_API_INIT_ERR_LOGIN_FAILED -5

//�ַ����ȴ���
#define UFT_API_INIT_ERR_CHARLENGTH_FAILED -6

//API�������󷵻ش���˵��
//ͨѶ����
#define UFT_API_ORDER_ERR_CONN -1
//����<��ƽ>����
#define UFT_API_ORDER_ERR_PARAM_OFFSETFLAG -2
//����<Ͷ���ױ�>����
#define UFT_API_ORDER_ERR_PARAM_SHFLAG -3
//����<����>����
#define UFT_API_ORDER_ERR_PARAM_DIR -4
//����<��������>����
#define UFT_API_ORDER_ERR_PARAM_ORDERTYPE -5
//����<��������>����
#define UFT_API_ORDER_ERR_PARAM_DIRECTION -6




#endif