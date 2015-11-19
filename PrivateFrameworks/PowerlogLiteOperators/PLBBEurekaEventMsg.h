/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSMutableString, NSMutableDictionary;

@interface PLBBEurekaEventMsg : PLBasebandMessage {

	unsigned char _inited;
	NSMutableString* _sdEvent;
	NSMutableString* _sdAct;
	NSMutableString* _sdState;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (assign,nonatomic) unsigned char inited;                          //@synthesize inited=_inited - In the implementation block
@property (nonatomic,retain) NSMutableString * sdEvent;                     //@synthesize sdEvent=_sdEvent - In the implementation block
@property (nonatomic,retain) NSMutableString * sdAct;                       //@synthesize sdAct=_sdAct - In the implementation block
@property (nonatomic,retain) NSMutableString * sdState;                     //@synthesize sdState=_sdState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)bbEuEvMsgNameCMCDMAExit;
+(id)bbEuEvMsgNameSDEventActionCode;
+(id)bbEuEvMsgNameWCDMARRCState;
+(id)bbEuEvMsgNameLTERRCState;
+(id)bbEuEvMsgUTRANRRCState;
+(id)bbEuEvMsgNameGSML1State;
+(id)bbEuEvMsgNameCMCallEventOrig;
+(id)bbEuEvMsgNameCMCallEventOrigV2;
+(id)bbEuEvMsgNameCMCallEventEnd;
+(id)bbEuEvMsgNameCMCallEventEndV2;
+(id)bbEuEvMsgNameCMCallEventConn;
+(id)bbEuEvMsgNameBBEurekaMsgLite;
+(id)bbEuEvMsgEventNotProcessed;
+(id)bbEuEvMsgNameCMCallEventConnV2;
+(id)bbEuEvMsgNameCMCallEventIncom;
-(id)init;
-(void)setPayload:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3 ;
-(void)appendToError:(id)arg1 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
-(void)setEventCode:(unsigned)arg1 ;
-(void)setSDEventActionCodeWith:(id)arg1 andSDAction:(id)arg2 andSDState:(id)arg3 ;
-(void)addPairWithKey:(id)arg1 andWithVal:(id)arg2 ;
-(void)logEventForwardSDEventActionCode;
-(void)logEventCMCallEventConnWithId:(id)arg1 andCallType:(id)arg2 andSysMode:(id)arg3 ;
-(void)logEventCMCallEventEndWithId:(id)arg1 andNumCalls:(id)arg2 ;
-(void)logEventCMCallEventOrigWithId:(id)arg1 andCallType:(id)arg2 andSrvType:(id)arg3 ;
-(void)logEventCMCallEventConnWithId:(id)arg1 andCallType:(id)arg2 andSysMode:(id)arg3 andClientId:(id)arg4 ;
-(void)logEventCMCallEventEndWithId:(id)arg1 andNumCalls:(id)arg2 andClientId:(id)arg3 ;
-(void)logEventCMCallEventOrigWithId:(id)arg1 andCallType:(id)arg2 andSrvType:(id)arg3 andClientId:(id)arg4 ;
-(void)logEventPointCMExitCodeWithState:(id)arg1 ;
-(void)logEventForwardGSML1StateWith:(id)arg1 ;
-(void)logEventForwardWCDMARRCPrevStateAs:(id)arg1 andCurrState:(id)arg2 andRate:(id)arg3 ;
-(void)logEventForwardLTERRCStateAs:(id)arg1 ;
-(void)logEventForwardUTRANRRCNextStateAs:(id)arg1 andCurrStateAs:(id)arg2 andRateAs:(id)arg3 ;
-(void)logEventNoneEventNotProcessed;
-(void)logEventForwardBBEurekaEventMsgLite;
-(unsigned char)inited;
-(void)setInited:(unsigned char)arg1 ;
-(void)sendAndLogPLEntry:(id)arg1 ;
-(void)refreshBBEurekaEventMsgLite;
-(void)refreshSDEventActionCode;
-(void)refreshWCDMARRCState;
-(void)refreshLTERRCState;
-(void)refreshUTRANRRCState;
-(void)refreshEventNotProcessed;
-(NSMutableString *)sdEvent;
-(void)setSdEvent:(NSMutableString *)arg1 ;
-(NSMutableString *)sdAct;
-(void)setSdAct:(NSMutableString *)arg1 ;
-(NSMutableString *)sdState;
-(void)setSdState:(NSMutableString *)arg1 ;
@end

